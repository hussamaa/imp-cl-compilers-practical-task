// -g 5,58,22 -l 1,2,1
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


// Seed: 689044577

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   uint64_t  f1;
   int64_t  f2;
};

union U1 {
   volatile uint32_t  f0;
   volatile uint32_t  f1;
   int16_t  f2;
   volatile uint8_t  f3;
   uint64_t  f4;
};

struct S2 {
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    int32_t g_9;
    int32_t * volatile g_8;
    union U1 g_50;
    uint16_t g_59;
    int32_t *g_71;
    int32_t **g_70;
    uint16_t g_73;
    uint16_t *g_72;
    uint8_t g_89;
    int32_t g_94;
    uint32_t g_98;
    int16_t g_137;
    uint8_t g_140;
    int8_t g_171;
    uint64_t g_181;
    volatile int32_t g_186;
    int32_t g_188;
    volatile uint16_t g_189;
    int64_t g_202;
    struct S0 * volatile g_209;
    struct S0 g_212;
    struct S0 * volatile g_211;
    uint64_t *g_215;
    union U1 g_243;
    uint32_t g_270[9][9][1];
    union U1 *g_275[4][7][3];
    union U1 ** volatile g_274;
    volatile uint8_t g_329;
    volatile struct S0 *g_366;
    volatile struct S0 **g_365;
    union U1 g_408[1];
    union U1 g_411;
    uint16_t g_475[4][2];
    int16_t g_495[5][9];
    uint64_t **g_507;
    volatile union U1 g_539;
    int8_t g_541[7];
    union U1 ***g_554;
    volatile int64_t g_571;
    volatile uint32_t g_572;
    volatile int64_t g_577;
    volatile int32_t g_578[10][7][3];
    int32_t * volatile g_595;
    volatile int32_t *g_641;
    volatile int32_t ** volatile g_640[3];
    volatile int32_t ** volatile g_642;
    uint32_t g_676[2][1];
    volatile int32_t ** volatile g_684;
    volatile int64_t *g_687[8][2][6];
    volatile int64_t * volatile * volatile g_686;
    volatile int64_t * volatile * volatile * volatile g_685[1][4];
    int64_t * volatile *g_689;
    int64_t * volatile * volatile *g_688;
    volatile int32_t ** volatile g_710[1];
    volatile int32_t ** volatile g_712;
    union U1 ****g_720;
    union U1 g_732;
    union U1 g_740;
    int32_t *g_744;
    int32_t **g_743;
    struct S0 * volatile g_746[1];
    struct S0 * volatile g_747;
    uint32_t *g_776;
    uint32_t **g_775[5][9][4];
    uint16_t ** volatile g_787;
    uint16_t ** volatile *g_786;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_813);
int16_t  func_15(int32_t ** p_16, struct S0  p_17, int8_t  p_18, uint16_t  p_19, struct S2 * p_813);
int32_t ** func_20(uint64_t  p_21, uint32_t  p_22, int32_t ** p_23, struct S2 * p_813);
int32_t ** func_32(int64_t  p_33, uint32_t  p_34, struct S2 * p_813);
union U1  func_35(uint32_t  p_36, uint32_t  p_37, struct S2 * p_813);
uint32_t  func_38(uint64_t  p_39, int32_t ** p_40, int16_t  p_41, int32_t  p_42, int32_t ** p_43, struct S2 * p_813);
int32_t ** func_44(int32_t * p_45, int32_t ** p_46, int8_t  p_47, uint32_t  p_48, uint16_t  p_49, struct S2 * p_813);
int32_t * func_51(uint64_t  p_52, struct S2 * p_813);
int16_t  func_62(int32_t * p_63, int32_t ** p_64, struct S2 * p_813);
int32_t ** func_65(uint16_t  p_66, int32_t ** p_67, uint16_t * p_68, uint16_t * p_69, struct S2 * p_813);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_813->g_5 p_813->g_8 p_813->g_9 p_813->g_50 p_813->g_70 p_813->g_71 p_813->g_89 p_813->g_495 p_813->g_212.f0 p_813->g_212.f2 p_813->g_270 p_813->g_541 p_813->g_329 p_813->g_215 p_813->g_181 p_813->g_72 p_813->g_73 p_813->g_732 p_813->g_740 p_813->g_475 p_813->g_676 p_813->g_59 p_813->g_743 p_813->g_641 p_813->g_578 p_813->g_744 p_813->g_747 p_813->g_202 p_813->g_189 p_813->g_94 p_813->g_775 p_813->g_137 p_813->g_212.f1 p_813->g_786 p_813->g_787 p_813->g_188 p_813->g_684 p_813->g_571 p_813->g_171
 * writes: p_813->g_5 p_813->g_9 p_813->g_4 p_813->g_8 p_813->g_71 p_813->g_70 p_813->g_720 p_813->g_541 p_813->g_181 p_813->g_73 p_813->g_212 p_813->g_275 p_813->g_775 p_813->g_475 p_813->g_94 p_813->g_578
 */
uint32_t  func_1(struct S2 * p_813)
{ /* block id: 4 */
    int64_t l_2[10] = {0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL,0x0D21DFE4B283066CL};
    int32_t *l_31 = &p_813->g_9;
    int32_t **l_30 = &l_31;
    int64_t l_713 = (-10L);
    int32_t ***l_715 = &p_813->g_70;
    int32_t **l_716 = &l_31;
    uint8_t l_742 = 0UL;
    struct S0 l_748[6][7][2] = {{{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}}},{{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}}},{{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}}},{{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}}},{{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}}},{{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}},{{0xAFL,18446744073709551611UL,0x45939911A27CEF84L},{9UL,3UL,0L}}}};
    uint8_t l_749 = 248UL;
    uint32_t l_782 = 4294967290UL;
    uint16_t **l_788 = (void*)0;
    int32_t l_800[6] = {1L,0L,1L,1L,0L,1L};
    int32_t l_803 = 0x0FDFD3ACL;
    int32_t *l_807[2];
    uint32_t l_809 = 0x09714BC5L;
    int16_t l_812 = 0x5B14L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_807[i] = &p_813->g_94;
    for (p_813->g_5 = 0; (p_813->g_5 <= 9); p_813->g_5 += 1)
    { /* block id: 7 */
        int i;
        (*p_813->g_8) |= (safe_lshift_func_uint16_t_u_s(l_2[p_813->g_5], 10));
        for (p_813->g_9 = 1; (p_813->g_9 <= 9); p_813->g_9 += 1)
        { /* block id: 11 */
            int32_t **l_10 = (void*)0;
            int32_t *l_12 = &p_813->g_5;
            int32_t **l_11 = &l_12;
            int32_t *l_14 = &p_813->g_9;
            int32_t **l_13 = &l_14;
            int i;
            for (p_813->g_4 = 0; p_813->g_4 < 10; p_813->g_4 += 1)
            {
                l_2[p_813->g_4] = 0x0E6B6CD333563700L;
            }
            p_813->g_8 = ((*l_13) = ((*l_11) = &p_813->g_5));
            return l_2[p_813->g_5];
        }
    }
    if (p_813->g_9)
        goto lbl_808;
lbl_808:
    if (((((func_15(func_20((l_2[6] , ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((*p_813->g_72) = ((((((4UL >= ((l_30 != ((*l_715) = func_32((func_35((*l_31), func_38(p_813->g_5, ((*l_715) = func_44((*l_30), (((p_813->g_50 , ((*p_813->g_70) = func_51(((void*)0 == &l_31), p_813))) == (*l_30)) , &l_31), p_813->g_89, (*l_31), l_713, p_813)), p_813->g_495[1][8], p_813->g_212.f0, l_716, p_813), p_813) , 3L), p_813->g_475[2][0], p_813))) | l_742)) || (**l_30)) <= p_813->g_676[1][0]) & p_813->g_270[7][3][0]) , (void*)0) == &p_813->g_641)), 9)), 3)) , 0x4B28L), 0x6C9DL)) > 1UL)), p_813->g_59, p_813->g_743, p_813), l_748[0][0][0], p_813->g_202, l_749, p_813) && (*l_31)) , (void*)0) == (*p_813->g_743)) || (*p_813->g_215)))
    { /* block id: 368 */
        struct S0 l_753 = {0xBEL,1UL,-1L};
        uint16_t l_764 = 0x4760L;
        int32_t l_778 = (-10L);
        uint32_t *l_783 = &p_813->g_270[3][6][0];
        int32_t l_798 = 0x1E058F39L;
        int32_t l_799 = 0x7CD25376L;
        int32_t l_801[3];
        uint32_t l_804[5][10] = {{6UL,0x10785FA1L,0x1DAB4940L,0x8E9AD3F4L,0x1DAB4940L,0x10785FA1L,6UL,0x4C87EA5DL,4294967295UL,0UL},{6UL,0x10785FA1L,0x1DAB4940L,0x8E9AD3F4L,0x1DAB4940L,0x10785FA1L,6UL,0x4C87EA5DL,4294967295UL,0UL},{6UL,0x10785FA1L,0x1DAB4940L,0x8E9AD3F4L,0x1DAB4940L,0x10785FA1L,6UL,0x4C87EA5DL,4294967295UL,0UL},{6UL,0x10785FA1L,0x1DAB4940L,0x8E9AD3F4L,0x1DAB4940L,0x10785FA1L,6UL,0x4C87EA5DL,4294967295UL,0UL},{6UL,0x10785FA1L,0x1DAB4940L,0x8E9AD3F4L,0x1DAB4940L,0x10785FA1L,6UL,0x4C87EA5DL,4294967295UL,0UL}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_801[i] = 0x3FE115FBL;
        (*p_813->g_744) = ((**l_716) = (safe_rshift_func_int8_t_s_s((&p_813->g_270[4][1][0] == &p_813->g_270[8][7][0]), ((l_753 , (+(((safe_mul_func_int8_t_s_s(p_813->g_94, ((((-1L) || ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((0x727C260AL > (((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s((l_764 >= (l_753.f1 || ((((*p_813->g_215) |= 0x879AC0B571ADFD3DL) & (**l_30)) < 5UL))), p_813->g_5)) < l_753.f1) | l_753.f0), (-8L))) && (*p_813->g_72)) > 0x02F6C619L)) ^ (-1L)), 65531UL)) || l_753.f0), p_813->g_5)) && (*l_31))) ^ 0xD20DBD8AL) == l_753.f0))) , 0L) ^ l_764))) ^ 0x2A5BL))));
        for (l_742 = 0; (l_742 < 18); l_742 = safe_add_func_int32_t_s_s(l_742, 6))
        { /* block id: 374 */
            int8_t l_767 = 8L;
            int32_t *l_768 = &p_813->g_94;
            uint16_t **l_770 = &p_813->g_72;
            uint16_t ***l_769 = &l_770;
            uint32_t ***l_777 = &p_813->g_775[2][1][0];
            uint32_t *l_781[1][5][10] = {{{&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98},{&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98},{&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98},{&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98},{&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98,&p_813->g_98}}};
            int32_t *l_797[10][9][2] = {{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}},{{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5},{&p_813->g_5,&p_813->g_5}}};
            int32_t l_802 = (-1L);
            int i, j, k;
            (*l_30) = l_768;
            if ((l_769 != ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s((l_778 = ((((*l_777) = p_813->g_775[3][1][1]) == &p_813->g_776) != p_813->g_137)), 15)) & (safe_lshift_func_int16_t_s_u(((((l_782 |= p_813->g_212.f1) , l_783) != (void*)0) | (safe_rshift_func_int8_t_s_u(0x38L, 6))), 13))), 6)) , p_813->g_786)))
            { /* block id: 379 */
                uint16_t *l_795 = &p_813->g_475[0][1];
                (**p_813->g_743) = ((((*p_813->g_786) != l_788) || (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_795) = ((***p_813->g_786) |= (safe_lshift_func_uint8_t_u_s((*l_768), 2)))), p_813->g_188)), 0x39L))) && ((((*l_768) = l_753.f0) ^ (**p_813->g_684)) , ((p_813->g_571 || (p_813->g_171 , l_753.f0)) == p_813->g_541[4])));
            }
            else
            { /* block id: 384 */
                uint16_t l_796 = 0xAEFAL;
                (*p_813->g_641) = (-1L);
                if (l_796)
                    continue;
                return p_813->g_541[4];
            }
            if (l_753.f2)
                continue;
            ++l_804[4][7];
        }
    }
    else
    { /* block id: 392 */
        l_807[0] = (*l_30);
    }
    --l_809;
    return l_812;
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_189
 * writes: p_813->g_275
 */
int16_t  func_15(int32_t ** p_16, struct S0  p_17, int8_t  p_18, uint16_t  p_19, struct S2 * p_813)
{ /* block id: 365 */
    union U1 **l_750 = &p_813->g_275[1][4][0];
    (*l_750) = (void*)0;
    return p_813->g_189;
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_641 p_813->g_578 p_813->g_744 p_813->g_5 p_813->g_747
 * writes: p_813->g_5 p_813->g_212
 */
int32_t ** func_20(uint64_t  p_21, uint32_t  p_22, int32_t ** p_23, struct S2 * p_813)
{ /* block id: 361 */
    struct S0 l_745 = {0x74L,1UL,0x709854F841E25D35L};
    (**p_23) |= (*p_813->g_641);
    (*p_813->g_747) = l_745;
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_32(int64_t  p_33, uint32_t  p_34, struct S2 * p_813)
{ /* block id: 357 */
    int32_t **l_741[4][7] = {{&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71},{&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71},{&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71},{&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71,&p_813->g_71}};
    int i, j;
    return l_741[3][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_270 p_813->g_541 p_813->g_329 p_813->g_215 p_813->g_181 p_813->g_72 p_813->g_73 p_813->g_732 p_813->g_70 p_813->g_71 p_813->g_9 p_813->g_740
 * writes: p_813->g_720 p_813->g_541 p_813->g_181 p_813->g_9 p_813->g_71
 */
union U1  func_35(uint32_t  p_36, uint32_t  p_37, struct S2 * p_813)
{ /* block id: 339 */
    union U1 ****l_719 = &p_813->g_554;
    int8_t *l_721 = &p_813->g_541[4];
    int32_t l_724 = 1L;
    int32_t ***l_731 = (void*)0;
    if ((254UL | ((safe_rshift_func_int8_t_s_s(p_37, 4)) < (p_813->g_270[0][8][0] , ((((*l_721) ^= ((p_813->g_720 = l_719) != &p_813->g_554)) != p_813->g_329) && ((*l_721) = ((safe_add_func_int8_t_s_s((l_724 || ((safe_mul_func_int16_t_s_s((((safe_add_func_int16_t_s_s(p_36, (safe_rshift_func_uint16_t_u_s(p_37, 8)))) , l_731) != &p_813->g_710[0]), 0x9F49L)) != (*p_813->g_215))), p_37)) || (*p_813->g_72))))))))
    { /* block id: 343 */
        return p_813->g_732;
    }
    else
    { /* block id: 345 */
        int32_t *l_737 = &l_724;
        (**p_813->g_70) &= (p_36 ^ (++(*p_813->g_215)));
        for (p_36 = 17; (p_36 <= 53); p_36 = safe_add_func_int32_t_s_s(p_36, 1))
        { /* block id: 350 */
            int16_t l_738 = 1L;
            int32_t *l_739[1][5] = {{&p_813->g_5,&p_813->g_5,&p_813->g_5,&p_813->g_5,&p_813->g_5}};
            int i, j;
            (*p_813->g_70) = l_737;
            if (l_738)
                continue;
            (*p_813->g_70) = l_739[0][0];
        }
        return p_813->g_740;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_70 p_813->g_71 p_813->g_212.f2
 * writes: p_813->g_8 p_813->g_71
 */
uint32_t  func_38(uint64_t  p_39, int32_t ** p_40, int16_t  p_41, int32_t  p_42, int32_t ** p_43, struct S2 * p_813)
{ /* block id: 336 */
    (*p_40) = func_51(p_41, p_813);
    return p_813->g_212.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_70
 * writes: p_813->g_71
 */
int32_t ** func_44(int32_t * p_45, int32_t ** p_46, int8_t  p_47, uint32_t  p_48, uint16_t  p_49, struct S2 * p_813)
{ /* block id: 332 */
    int32_t **l_714 = &p_813->g_71;
    (*p_813->g_70) = (*p_46);
    return l_714;
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_70 p_813->g_71
 * writes: p_813->g_8
 */
int32_t * func_51(uint64_t  p_52, struct S2 * p_813)
{ /* block id: 19 */
    int32_t *l_54 = (void*)0;
    int32_t **l_53[5];
    uint16_t *l_57 = (void*)0;
    uint16_t *l_58 = &p_813->g_59;
    union U1 *l_632 = &p_813->g_408[0];
    int64_t l_659 = 0x5E3AD2FCA3FC49A7L;
    int8_t l_660 = 0x26L;
    int32_t l_661 = 0x0B4D1780L;
    uint64_t l_663 = 0x3C1358748978440DL;
    uint64_t *l_673[6] = {&p_813->g_212.f1,&p_813->g_212.f1,&p_813->g_212.f1,&p_813->g_212.f1,&p_813->g_212.f1,&p_813->g_212.f1};
    volatile int32_t **l_711 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_53[i] = &l_54;
    p_813->g_8 = (void*)0;
    return (*p_813->g_70);
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_98 p_813->g_72 p_813->g_73 p_813->g_243.f0 p_813->g_71 p_813->g_5 p_813->g_507 p_813->g_50.f0 p_813->g_9 p_813->g_215 p_813->g_181 p_813->g_411.f0 p_813->g_495 p_813->g_270 p_813->g_70 p_813->g_4 p_813->g_171 p_813->g_539 p_813->g_89 p_813->g_554 p_813->g_94 p_813->g_137 p_813->g_140 p_813->g_572 p_813->g_275 p_813->g_577 p_813->g_475 p_813->g_595 p_813->g_243.f2
 * writes: p_813->g_89 p_813->g_98 p_813->g_475 p_813->g_137 p_813->g_171 p_813->g_554 p_813->g_140 p_813->g_275 p_813->g_572 p_813->g_94 p_813->g_243.f2 p_813->g_73 p_813->g_71
 */
int16_t  func_62(int32_t * p_63, int32_t ** p_64, struct S2 * p_813)
{ /* block id: 26 */
    uint32_t l_92[5] = {0xFCD19708L,0xFCD19708L,0xFCD19708L,0xFCD19708L,0xFCD19708L};
    int32_t l_96 = 0x25CD88FCL;
    int32_t l_97 = 0L;
    uint8_t *l_111 = &p_813->g_89;
    int32_t l_116 = 0x04EDDC8DL;
    uint32_t l_134 = 0xF410D84AL;
    int32_t l_183 = 1L;
    int32_t l_185[2][7][4] = {{{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL}},{{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL},{0x23332A5AL,0x06635C27L,0x06635C27L,0x23332A5AL}}};
    struct S0 *l_234 = &p_813->g_212;
    uint32_t *l_310 = &p_813->g_270[1][8][0];
    uint16_t *l_320 = &p_813->g_73;
    union U1 **l_321 = &p_813->g_275[1][2][1];
    struct S0 **l_527[4][10] = {{(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0},{(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0},{(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0},{(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0,&l_234,(void*)0,(void*)0}};
    uint64_t l_551 = 0x71092A64039EA269L;
    int64_t l_592 = 1L;
    int64_t l_593 = (-1L);
    uint32_t l_602 = 0x779716F3L;
    int8_t l_620 = 0L;
    uint32_t l_623 = 9UL;
    int64_t l_627 = 0x1CED02AF5DB42CC7L;
    uint16_t l_631 = 1UL;
    int i, j, k;
lbl_261:
    for (p_813->g_89 = 0; (p_813->g_89 <= 4); p_813->g_89 += 1)
    { /* block id: 29 */
        int32_t *l_93 = &p_813->g_94;
        int32_t *l_95[7][3][6] = {{{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94}},{{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94}},{{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94}},{{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94}},{{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94}},{{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94}},{{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94},{(void*)0,(void*)0,&p_813->g_94,&p_813->g_94,&p_813->g_94,&p_813->g_94}}};
        int i, j, k;
        p_813->g_98++;
    }
    if ((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((l_92[3] , (((l_111 == (void*)0) > ((&p_813->g_73 != (void*)0) | (!0x6BL))) >= ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(l_92[1], (l_116 , (safe_add_func_int16_t_s_s((0x0899L < (*p_813->g_72)), l_97))))) ^ 1UL), l_116)) , 9UL))), 3)), 4)) == l_116) , p_813->g_73), l_97)), 0x0AL)), 12)))
    { /* block id: 32 */
        uint16_t l_123 = 65533UL;
        uint8_t *l_135 = &p_813->g_89;
        int32_t l_138 = (-5L);
        int32_t l_187 = 0x1D6AA018L;
        struct S0 *l_236 = (void*)0;
        uint8_t l_283 = 0xC5L;
        union U1 ***l_419 = &l_321;
        for (p_813->g_89 = 0; (p_813->g_89 >= 9); ++p_813->g_89)
        { /* block id: 35 */
            int32_t *l_121 = (void*)0;
            int32_t *l_122[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            int16_t *l_136 = &p_813->g_137;
            uint16_t l_169[3][8][10] = {{{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL}},{{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL}},{{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL},{0UL,0xB318L,2UL,6UL,0x3ED9L,0UL,5UL,0UL,0x1ACAL,8UL}}};
            uint8_t *l_200[9][4][7] = {{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}},{{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89},{&p_813->g_89,&p_813->g_89,(void*)0,(void*)0,&p_813->g_89,&p_813->g_89,&p_813->g_89}}};
            struct S0 l_208 = {1UL,18446744073709551608UL,-1L};
            uint8_t l_286 = 0x5AL;
            int32_t l_298[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_298[i] = 9L;
            ++l_123;
        }
        for (p_813->g_89 = 0; (p_813->g_89 != 30); ++p_813->g_89)
        { /* block id: 120 */
            int32_t l_307 = 0x15F833B0L;
            struct S0 l_343 = {0x28L,0xC56EBA94C3CA4362L,0x1F528355B21C627CL};
            struct S0 **l_367 = &l_234;
            int16_t *l_430 = &p_813->g_137;
            (1 + 1);
        }
    }
    else
    { /* block id: 201 */
        int32_t *l_463[1][3][3];
        union U1 **l_469 = &p_813->g_275[3][6][2];
        int32_t l_476 = 1L;
        uint16_t **l_487 = &p_813->g_72;
        int64_t l_517 = 1L;
        struct S0 **l_526 = &l_234;
        int8_t *l_594 = &p_813->g_171;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    l_463[i][j][k] = &l_185[1][4][1];
            }
        }
        for (p_813->g_98 = (-13); (p_813->g_98 <= 55); p_813->g_98 = safe_add_func_uint64_t_u_u(p_813->g_98, 6))
        { /* block id: 204 */
            uint32_t l_454 = 0x68003471L;
            union U1 ***l_468[2][7][5] = {{{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321}},{{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321},{&l_321,&l_321,&l_321,&l_321,&l_321}}};
            uint16_t *l_474 = &p_813->g_475[0][1];
            uint64_t l_515 = 18446744073709551615UL;
            int32_t l_518 = 0L;
            int16_t l_525 = 0x0DE6L;
            int32_t l_562[8][7][4] = {{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}},{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}},{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}},{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}},{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}},{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}},{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}},{{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL},{0x5C6C04AAL,0x77A1AFB0L,8L,0x5FFFF49FL}}};
            int64_t l_576 = 0L;
            uint32_t l_579 = 0xB4A4540CL;
            int i, j, k;
            if ((l_454 , ((safe_add_func_int8_t_s_s(l_185[1][4][0], (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_463[0][2][0] == ((safe_div_func_int8_t_s_s(p_813->g_243.f0, (safe_mod_func_uint16_t_u_u(((l_469 = &p_813->g_275[2][3][1]) == (void*)0), (safe_rshift_func_uint16_t_u_u((*p_813->g_72), 4)))))) , (*p_64))), (safe_rshift_func_uint16_t_u_u(((*l_474) = l_454), 4)))), l_476)) ^ 0x7994858DL) > l_454), l_97)))) | 0x237FB8F0L)))
            { /* block id: 207 */
                uint16_t ***l_488[7] = {&l_487,&l_487,&l_487,&l_487,&l_487,&l_487,&l_487};
                int16_t *l_491 = &p_813->g_137;
                int16_t *l_492 = &p_813->g_411.f2;
                int16_t *l_493 = &p_813->g_411.f2;
                int16_t *l_494[6][6][2] = {{{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]}},{{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]}},{{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]}},{{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]}},{{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]}},{{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]},{&p_813->g_495[1][8],&p_813->g_495[1][3]}}};
                int32_t l_496[10] = {1L,0x0D94FDDDL,0x3542C48FL,0x0D94FDDDL,1L,1L,0x0D94FDDDL,0x3542C48FL,0x0D94FDDDL,1L};
                int32_t l_514[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                uint16_t l_516 = 3UL;
                int i, j, k;
                l_518 &= (safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((((((-1L) >= (safe_add_func_int16_t_s_s((((p_813->g_5 , (l_487 = l_487)) == (void*)0) >= ((l_185[0][6][0] = (safe_lshift_func_int16_t_s_u((l_496[9] |= ((*l_491) = (-1L))), 12))) && (safe_lshift_func_uint16_t_u_s(((l_514[4] |= ((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_454, 3)), 0)) | (safe_mod_func_uint32_t_u_u(((p_813->g_507 != (void*)0) && ((((((safe_add_func_int64_t_s_s((((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(l_496[9], p_813->g_243.f0)), l_97)) || p_813->g_50.f0) & l_496[3]) , l_134) || 0x79L), l_496[0])) ^ (**p_64)) == (*p_813->g_215)) && p_813->g_411.f0) >= p_813->g_495[1][8]) && l_454)), 0xF561BE29L))) , 65526UL), 12)) < (**p_64))) >= (**p_64)), l_515)))), p_813->g_270[7][3][0]))) , 4L) & l_516) < 255UL) != l_517) && l_92[2]) && 0xA1176D69L), (*p_813->g_72))), l_92[2])) > 0x7492L) != l_516), p_813->g_495[0][2])), (*p_813->g_215)));
            }
            else
            { /* block id: 214 */
                uint32_t *l_530 = &l_92[2];
                int8_t *l_531 = &p_813->g_171;
                int32_t l_534 = 0x549F4819L;
                union U1 *l_570 = &p_813->g_408[0];
                if ((((((safe_div_func_int8_t_s_s(((*l_531) = ((safe_lshift_func_uint8_t_u_s(((((p_813->g_89 = (0x41C4AA21L && ((*l_530) = ((((l_183 != (safe_add_func_int64_t_s_s(l_97, l_525))) & ((l_526 == l_527[2][1]) >= 18446744073709551615UL)) | (**p_813->g_70)) && ((safe_mod_func_int64_t_s_s(8L, l_116)) || l_134))))) != 0xF6L) ^ p_813->g_4) , l_96), l_116)) == 0x13A9L)), 254UL)) >= l_518) <= 0x289CL) <= p_813->g_270[7][3][0]) & l_525))
                { /* block id: 218 */
                    int8_t *l_540[1][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                    union U1 ****l_555 = &p_813->g_554;
                    int32_t l_565 = 0x3C1FD456L;
                    int i, j, k;
                    l_183 ^= ((safe_lshift_func_int8_t_s_s(((((l_97 , (*p_813->g_72)) && (*p_813->g_72)) || ((*l_531) |= 0x6CL)) ^ l_454), 6)) ^ (l_534 , (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_185[1][0][3] = ((0x63FB0436L | ((l_454 , (p_813->g_539 , 4294967287UL)) , l_185[1][5][2])) <= p_813->g_5)), 2)), p_813->g_98))));
                    if (l_96)
                        goto lbl_261;
                    l_96 |= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int16_t_s(((safe_mul_func_uint16_t_u_u((((((((((((*l_111) &= (l_518 >= 0x34DF2BEA423A14CCL)) >= (!(((safe_sub_func_int32_t_s_s((p_813->g_495[1][6] >= (((l_185[1][4][3] = ((l_551 & ((safe_sub_func_uint32_t_u_u((((*l_555) = p_813->g_554) == &l_469), (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((!((l_562[1][1][0] = ((**p_64) == (**p_813->g_70))) && (safe_lshift_func_uint16_t_u_u(((0x30L < 0UL) < p_813->g_4), l_92[4])))) == l_518), 0xCAADF67A0C9B5A71L)), l_534)), p_813->g_94)))) <= l_534)) && l_92[0])) >= (*p_63)) < 0x6FL)), 1UL)) || 0L) && 0L))) < l_454) ^ l_534) ^ p_813->g_137) >= l_515) & 0UL) > l_565) || l_515) <= 4294967295UL), p_813->g_73)) & l_534))) , l_534), 15)), l_97)) != p_813->g_94);
                }
                else
                { /* block id: 228 */
                    uint16_t l_568 = 9UL;
                    if ((safe_lshift_func_uint8_t_u_u((p_813->g_140 |= (!l_568)), (p_813->g_411.f0 | (!p_813->g_495[1][8])))))
                    { /* block id: 230 */
                        uint32_t l_569 = 0x6CF92EE9L;
                        if ((**p_813->g_70))
                            break;
                        l_569 ^= (((*p_813->g_215) < l_525) < 255UL);
                        if ((*p_813->g_71))
                            continue;
                        if (p_813->g_94)
                            goto lbl_261;
                    }
                    else
                    { /* block id: 235 */
                        (*l_469) = l_570;
                        if ((**p_64))
                            break;
                        p_813->g_572--;
                    }
                    l_562[1][1][0] = 0x65F50F1DL;
                    if (l_534)
                        continue;
                    for (l_534 = 0; (l_534 <= 1); l_534 += 1)
                    { /* block id: 244 */
                        uint64_t l_575 = 0UL;
                        l_575 &= 0L;
                        if (l_534)
                            goto lbl_261;
                        return l_575;
                    }
                }
            }
            ++l_579;
        }
        (*l_469) = (*l_469);
        l_97 |= ((l_185[1][4][0] || p_813->g_577) ^ (((safe_rshift_func_uint16_t_u_s(((((safe_add_func_int64_t_s_s((p_813->g_137 >= ((safe_mod_func_uint32_t_u_u(p_813->g_137, (p_813->g_94 = ((safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(l_183, l_592)) , ((-1L) == ((0L >= (l_593 & (**p_64))) && (-3L)))), p_813->g_171)) && 1L)))) < 0x5ABFD112B2329A9EL)), l_185[1][4][0])) , &p_813->g_541[4]) != l_594) > 0x2612L), 1)) > 0xCF5D1A13L) && 6L));
    }
    (*p_813->g_595) &= (p_813->g_475[2][0] < 0x2DL);
    for (p_813->g_243.f2 = 0; (p_813->g_243.f2 == 29); p_813->g_243.f2++)
    { /* block id: 260 */
        int32_t *l_598 = (void*)0;
        int32_t *l_599 = &l_183;
        int32_t *l_600 = &l_96;
        int32_t *l_601[2];
        int64_t *l_607 = &p_813->g_212.f2;
        int64_t **l_606 = &l_607;
        int64_t ***l_605 = &l_606;
        int i;
        for (i = 0; i < 2; i++)
            l_601[i] = (void*)0;
        --l_602;
        (*l_605) = (void*)0;
        for (l_96 = 0; (l_96 <= 11); l_96 = safe_add_func_uint16_t_u_u(l_96, 2))
        { /* block id: 265 */
            int32_t l_612 = 0x5ABBB749L;
            int32_t l_614 = (-4L);
            int32_t l_615[1];
            int64_t l_616 = 0x04754667BE55765CL;
            int32_t l_626 = 0x2F5813BEL;
            uint64_t l_628 = 0xB63EC34C8B9D4C17L;
            int i;
            for (i = 0; i < 1; i++)
                l_615[i] = 0x6334F90AL;
            for (p_813->g_73 = 0; (p_813->g_73 <= 1); p_813->g_73 += 1)
            { /* block id: 268 */
                int8_t l_610 = 0x54L;
                int32_t l_611 = (-10L);
                int32_t l_613 = 0x7D66554BL;
                int32_t l_617 = 0x5CA8E5B8L;
                int32_t l_618 = 0x4E0B2B9CL;
                int32_t l_619 = 3L;
                int32_t l_621 = (-8L);
                int32_t l_622 = 0x532D647BL;
                l_623++;
            }
            ++l_628;
        }
        (*p_64) = l_599;
    }
    return l_631;
}


/* ------------------------------------------ */
/* 
 * reads : p_813->g_50.f0 p_813->g_5 p_813->g_71 p_813->g_9
 * writes:
 */
int32_t ** func_65(uint16_t  p_66, int32_t ** p_67, uint16_t * p_68, uint16_t * p_69, struct S2 * p_813)
{ /* block id: 22 */
    uint64_t l_76 = 0x1310F077D7E7D1C2L;
    int32_t **l_81 = &p_813->g_71;
    uint8_t *l_88[1];
    int32_t l_90[1][5];
    int32_t l_91 = 0x58A5C089L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_88[i] = &p_813->g_89;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_90[i][j] = 0L;
    }
    l_91 ^= ((l_90[0][2] = (safe_mul_func_int16_t_s_s(l_76, (0x2361AE7DL == ((safe_lshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u((((p_813->g_50.f0 , l_81) != &p_813->g_71) , 248UL), (safe_div_func_uint64_t_u_u(1UL, (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(p_813->g_5, 0x337BL)), 7)))))) <= p_66), 13)) && (**l_81)))))) >= 0x39L);
    return l_81;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_814;
    struct S2* p_813 = &c_814;
    struct S2 c_815 = {
        0x69FB1C03L, // p_813->g_3
        (-10L), // p_813->g_4
        (-9L), // p_813->g_5
        0x3C999589L, // p_813->g_9
        &p_813->g_9, // p_813->g_8
        {4UL}, // p_813->g_50
        1UL, // p_813->g_59
        &p_813->g_9, // p_813->g_71
        &p_813->g_71, // p_813->g_70
        0x2506L, // p_813->g_73
        &p_813->g_73, // p_813->g_72
        0x56L, // p_813->g_89
        0x33BE7B8BL, // p_813->g_94
        4294967295UL, // p_813->g_98
        (-5L), // p_813->g_137
        0xAAL, // p_813->g_140
        (-3L), // p_813->g_171
        18446744073709551612UL, // p_813->g_181
        (-1L), // p_813->g_186
        0x7069160EL, // p_813->g_188
        1UL, // p_813->g_189
        (-1L), // p_813->g_202
        (void*)0, // p_813->g_209
        {0xB3L,1UL,1L}, // p_813->g_212
        &p_813->g_212, // p_813->g_211
        &p_813->g_181, // p_813->g_215
        {0UL}, // p_813->g_243
        {{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}}}, // p_813->g_270
        {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}}, // p_813->g_275
        &p_813->g_275[1][2][1], // p_813->g_274
        0UL, // p_813->g_329
        (void*)0, // p_813->g_366
        &p_813->g_366, // p_813->g_365
        {{1UL}}, // p_813->g_408
        {0xE2793448L}, // p_813->g_411
        {{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}}, // p_813->g_475
        {{(-1L),(-3L),0x1CAEL,(-2L),0x1CAEL,(-3L),(-1L),0x1C4FL,0x6EC1L},{(-1L),(-3L),0x1CAEL,(-2L),0x1CAEL,(-3L),(-1L),0x1C4FL,0x6EC1L},{(-1L),(-3L),0x1CAEL,(-2L),0x1CAEL,(-3L),(-1L),0x1C4FL,0x6EC1L},{(-1L),(-3L),0x1CAEL,(-2L),0x1CAEL,(-3L),(-1L),0x1C4FL,0x6EC1L},{(-1L),(-3L),0x1CAEL,(-2L),0x1CAEL,(-3L),(-1L),0x1C4FL,0x6EC1L}}, // p_813->g_495
        (void*)0, // p_813->g_507
        {0xBE740325L}, // p_813->g_539
        {0x36L,0x03L,0x36L,0x36L,0x03L,0x36L,0x36L}, // p_813->g_541
        (void*)0, // p_813->g_554
        0x32034E08362EF918L, // p_813->g_571
        4294967295UL, // p_813->g_572
        0x64C179C448CAF0FAL, // p_813->g_577
        {{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}},{{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L},{0L,0x15F8D277L,0L}}}, // p_813->g_578
        &p_813->g_94, // p_813->g_595
        &p_813->g_578[2][2][1], // p_813->g_641
        {&p_813->g_641,&p_813->g_641,&p_813->g_641}, // p_813->g_640
        &p_813->g_641, // p_813->g_642
        {{0xCF1CE52BL},{0xCF1CE52BL}}, // p_813->g_676
        &p_813->g_641, // p_813->g_684
        {{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}},{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}},{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}},{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}},{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}},{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}},{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}},{{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577},{&p_813->g_571,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577,&p_813->g_577}}}, // p_813->g_687
        &p_813->g_687[4][1][0], // p_813->g_686
        {{&p_813->g_686,&p_813->g_686,&p_813->g_686,&p_813->g_686}}, // p_813->g_685
        (void*)0, // p_813->g_689
        &p_813->g_689, // p_813->g_688
        {&p_813->g_641}, // p_813->g_710
        &p_813->g_641, // p_813->g_712
        &p_813->g_554, // p_813->g_720
        {0x03687C5AL}, // p_813->g_732
        {0x10F80FA5L}, // p_813->g_740
        &p_813->g_5, // p_813->g_744
        &p_813->g_744, // p_813->g_743
        {&p_813->g_212}, // p_813->g_746
        &p_813->g_212, // p_813->g_747
        &p_813->g_270[4][5][0], // p_813->g_776
        {{{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0}},{{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0}},{{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0}},{{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0}},{{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0},{(void*)0,&p_813->g_776,&p_813->g_776,(void*)0}}}, // p_813->g_775
        &p_813->g_72, // p_813->g_787
        &p_813->g_787, // p_813->g_786
    };
    c_814 = c_815;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_813);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_813->g_3, "p_813->g_3", print_hash_value);
    transparent_crc(p_813->g_4, "p_813->g_4", print_hash_value);
    transparent_crc(p_813->g_5, "p_813->g_5", print_hash_value);
    transparent_crc(p_813->g_9, "p_813->g_9", print_hash_value);
    transparent_crc(p_813->g_50.f0, "p_813->g_50.f0", print_hash_value);
    transparent_crc(p_813->g_59, "p_813->g_59", print_hash_value);
    transparent_crc(p_813->g_73, "p_813->g_73", print_hash_value);
    transparent_crc(p_813->g_89, "p_813->g_89", print_hash_value);
    transparent_crc(p_813->g_94, "p_813->g_94", print_hash_value);
    transparent_crc(p_813->g_98, "p_813->g_98", print_hash_value);
    transparent_crc(p_813->g_137, "p_813->g_137", print_hash_value);
    transparent_crc(p_813->g_140, "p_813->g_140", print_hash_value);
    transparent_crc(p_813->g_171, "p_813->g_171", print_hash_value);
    transparent_crc(p_813->g_181, "p_813->g_181", print_hash_value);
    transparent_crc(p_813->g_186, "p_813->g_186", print_hash_value);
    transparent_crc(p_813->g_188, "p_813->g_188", print_hash_value);
    transparent_crc(p_813->g_189, "p_813->g_189", print_hash_value);
    transparent_crc(p_813->g_202, "p_813->g_202", print_hash_value);
    transparent_crc(p_813->g_212.f0, "p_813->g_212.f0", print_hash_value);
    transparent_crc(p_813->g_212.f1, "p_813->g_212.f1", print_hash_value);
    transparent_crc(p_813->g_212.f2, "p_813->g_212.f2", print_hash_value);
    transparent_crc(p_813->g_243.f0, "p_813->g_243.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_813->g_270[i][j][k], "p_813->g_270[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_813->g_329, "p_813->g_329", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_813->g_408[i].f0, "p_813->g_408[i].f0", print_hash_value);

    }
    transparent_crc(p_813->g_411.f0, "p_813->g_411.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_813->g_475[i][j], "p_813->g_475[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_813->g_495[i][j], "p_813->g_495[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_813->g_539.f0, "p_813->g_539.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_813->g_541[i], "p_813->g_541[i]", print_hash_value);

    }
    transparent_crc(p_813->g_571, "p_813->g_571", print_hash_value);
    transparent_crc(p_813->g_572, "p_813->g_572", print_hash_value);
    transparent_crc(p_813->g_577, "p_813->g_577", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_813->g_578[i][j][k], "p_813->g_578[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_813->g_676[i][j], "p_813->g_676[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_813->g_732.f0, "p_813->g_732.f0", print_hash_value);
    transparent_crc(p_813->g_740.f0, "p_813->g_740.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
