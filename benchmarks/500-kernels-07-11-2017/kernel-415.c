// -g 72,98,1 -l 8,14,1
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


// Seed: 2929432786

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
};

union U1 {
   uint32_t  f0;
};

struct S2 {
    int32_t g_3;
    volatile int32_t g_4;
    int32_t g_8;
    struct S0 g_46;
    uint16_t g_63;
    uint16_t g_65;
    uint32_t g_102;
    union U1 g_105[8][1];
    uint32_t g_108;
    int16_t g_112[4];
    uint8_t g_118;
    int32_t g_119;
    uint64_t g_123[9][5][5];
    int32_t *g_149[2][5];
    int32_t **g_148;
    union U1 *g_162;
    int32_t *g_221[6][9][3];
    uint64_t g_235;
    struct S0 * volatile g_237[9];
    int16_t *g_268;
    int64_t g_271[9][5];
    int8_t g_272;
    union U1 * volatile *g_403;
    union U1 * volatile **g_402;
    int32_t g_420;
    int8_t *g_438;
    int8_t **g_437;
    uint64_t *g_458;
    struct S0 * volatile g_459;
    uint8_t **g_489;
    uint8_t **g_493;
    int32_t g_613;
    int32_t * volatile g_612;
    int32_t * volatile g_653;
    uint64_t g_665;
    struct S0 *g_673;
    union U1 ** volatile g_687;
    uint32_t *g_695[6][2][10];
    uint32_t **g_694[6][6][4];
    uint32_t g_734;
    int32_t g_789;
    uint16_t g_815;
    int8_t g_861;
    uint16_t g_865[2][3][9];
    volatile int8_t g_890[1];
    union U1 **g_906[9];
    int64_t g_934;
    int8_t g_988;
    int16_t g_998;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_1006);
struct S0  func_9(int32_t * p_10, uint16_t  p_11, uint32_t  p_12, struct S2 * p_1006);
int32_t * func_13(uint32_t  p_14, struct S2 * p_1006);
uint16_t  func_17(int64_t  p_18, int32_t * p_19, int32_t * p_20, struct S2 * p_1006);
int32_t  func_26(union U1  p_27, struct S2 * p_1006);
union U1  func_28(int32_t * p_29, struct S2 * p_1006);
int32_t  func_30(int32_t * p_31, int8_t  p_32, uint32_t  p_33, int32_t * p_34, struct S2 * p_1006);
int32_t * func_36(struct S0  p_37, int32_t * p_38, struct S2 * p_1006);
int32_t * func_40(uint64_t  p_41, int32_t * p_42, uint16_t  p_43, struct S0  p_44, int32_t * p_45, struct S2 * p_1006);
int32_t * func_47(union U1  p_48, uint8_t  p_49, int32_t * p_50, uint32_t  p_51, int32_t  p_52, struct S2 * p_1006);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1006->g_3 p_1006->g_4 p_1006->g_8 p_1006->g_162 p_1006->g_105 p_1006->g_268 p_1006->g_112 p_1006->g_119 p_1006->g_815 p_1006->g_46.f1 p_1006->g_65 p_1006->g_46.f0 p_1006->g_148 p_1006->g_458 p_1006->g_673 p_1006->g_46 p_1006->g_102 p_1006->g_612 p_1006->g_613 p_1006->g_420 p_1006->g_653 p_1006->g_665 p_1006->g_865 p_1006->g_271 p_1006->g_890 p_1006->g_438 p_1006->g_272 p_1006->g_235 p_1006->g_402 p_1006->g_403 p_1006->g_998 p_1006->g_108 p_1006->g_789 p_1006->g_123
 * writes: p_1006->g_3 p_1006->g_4 p_1006->g_8 p_1006->g_613 p_1006->g_65 p_1006->g_63 p_1006->g_815 p_1006->g_149 p_1006->g_46.f1 p_1006->g_272 p_1006->g_46 p_1006->g_102 p_1006->g_861 p_1006->g_665 p_1006->g_420 p_1006->g_118 p_1006->g_221 p_1006->g_906 p_1006->g_112 p_1006->g_934 p_1006->g_998 p_1006->g_119 p_1006->g_789
 */
uint32_t  func_1(struct S2 * p_1006)
{ /* block id: 4 */
    int32_t l_2[2][6] = {{0x1EA66E58L,0x7F40FC02L,0x1EA66E58L,0x1EA66E58L,0x7F40FC02L,0x1EA66E58L},{0x1EA66E58L,0x7F40FC02L,0x1EA66E58L,0x1EA66E58L,0x7F40FC02L,0x1EA66E58L}};
    int i, j;
    for (p_1006->g_3 = 0; p_1006->g_3 < 2; p_1006->g_3 += 1)
    {
        for (p_1006->g_4 = 0; p_1006->g_4 < 6; p_1006->g_4 += 1)
        {
            l_2[p_1006->g_3][p_1006->g_4] = 0x3E135E1FL;
        }
    }
    for (p_1006->g_3 = (-18); (p_1006->g_3 < 26); ++p_1006->g_3)
    { /* block id: 8 */
        int32_t *l_7 = &p_1006->g_8;
        int32_t *l_1005[5][5][5] = {{{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3}},{{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3}},{{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3}},{{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3}},{{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_789,&p_1006->g_789,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3}}};
        int i, j, k;
        (*l_7) |= p_1006->g_4;
        p_1006->g_789 ^= ((func_9(&p_1006->g_3, l_2[0][2], l_2[1][1], p_1006) , func_13((safe_unary_minus_func_int8_t_s(((*p_1006->g_438) = (*l_7)))), p_1006)) == (void*)0);
    }
    return p_1006->g_123[0][1][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_162 p_1006->g_105 p_1006->g_613 p_1006->g_268 p_1006->g_112 p_1006->g_8 p_1006->g_119 p_1006->g_815 p_1006->g_46.f1 p_1006->g_65 p_1006->g_46.f0 p_1006->g_148 p_1006->g_272 p_1006->g_458 p_1006->g_673 p_1006->g_46 p_1006->g_102 p_1006->g_612 p_1006->g_420 p_1006->g_653 p_1006->g_665 p_1006->g_865 p_1006->g_271 p_1006->g_4 p_1006->g_890 p_1006->g_438 p_1006->g_235 p_1006->g_402 p_1006->g_403 p_1006->g_998 p_1006->g_108
 * writes: p_1006->g_613 p_1006->g_65 p_1006->g_63 p_1006->g_8 p_1006->g_815 p_1006->g_149 p_1006->g_46.f1 p_1006->g_272 p_1006->g_46 p_1006->g_102 p_1006->g_861 p_1006->g_665 p_1006->g_420 p_1006->g_118 p_1006->g_221 p_1006->g_906 p_1006->g_112 p_1006->g_934 p_1006->g_998 p_1006->g_119
 */
struct S0  func_9(int32_t * p_10, uint16_t  p_11, uint32_t  p_12, struct S2 * p_1006)
{ /* block id: 10 */
    uint32_t l_25 = 4294967291UL;
    int16_t *l_997 = &p_1006->g_998;
    int32_t *l_999 = &p_1006->g_3;
    struct S0 l_1003 = {1UL,0x4BA4D34CL,-10L};
    (*p_1006->g_148) = func_13((safe_div_func_uint16_t_u_u((!func_17((p_11 || (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((l_25 , l_25) | ((func_26(func_28(p_10, p_1006), p_1006) , 0x41629DA3E891A9BDL) & ((((((*l_997) &= 1L) | 0x4640L) | 0x534B75BFL) , p_11) , p_12))) | p_11), 0L)), p_11))), p_10, l_999, p_1006)), p_1006->g_108)), p_1006);
    return l_1003;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_13(uint32_t  p_14, struct S2 * p_1006)
{ /* block id: 531 */
    int32_t *l_1002 = &p_1006->g_8;
    return l_1002;
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_148 p_1006->g_119 p_1006->g_613 p_1006->g_46.f1
 * writes: p_1006->g_149 p_1006->g_119
 */
uint16_t  func_17(int64_t  p_18, int32_t * p_19, int32_t * p_20, struct S2 * p_1006)
{ /* block id: 522 */
    int32_t *l_1000 = &p_1006->g_613;
lbl_1001:
    (*p_1006->g_148) = l_1000;
    for (p_1006->g_119 = 0; (p_1006->g_119 <= 1); p_1006->g_119 += 1)
    { /* block id: 526 */
        if (p_1006->g_119)
            goto lbl_1001;
        return (*l_1000);
    }
    return p_1006->g_46.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_162 p_1006->g_105 p_1006->g_268 p_1006->g_112 p_1006->g_8 p_1006->g_119 p_1006->g_815 p_1006->g_46.f1 p_1006->g_65 p_1006->g_46.f0 p_1006->g_148 p_1006->g_458 p_1006->g_673 p_1006->g_46 p_1006->g_102 p_1006->g_612 p_1006->g_613 p_1006->g_420 p_1006->g_653 p_1006->g_665 p_1006->g_865 p_1006->g_271 p_1006->g_4 p_1006->g_890 p_1006->g_438 p_1006->g_272 p_1006->g_235 p_1006->g_402 p_1006->g_403
 * writes: p_1006->g_613 p_1006->g_65 p_1006->g_63 p_1006->g_8 p_1006->g_815 p_1006->g_149 p_1006->g_46.f1 p_1006->g_272 p_1006->g_46 p_1006->g_102 p_1006->g_861 p_1006->g_665 p_1006->g_420 p_1006->g_118 p_1006->g_221 p_1006->g_906 p_1006->g_112 p_1006->g_934
 */
int32_t  func_26(union U1  p_27, struct S2 * p_1006)
{ /* block id: 348 */
    int32_t *l_793 = &p_1006->g_8;
    int16_t l_842[10][4] = {{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L},{1L,0x56E5L,0x56E5L,1L}};
    int64_t *l_851 = &p_1006->g_46.f2;
    int32_t l_882 = 0x53849CBBL;
    struct S0 l_883 = {0x568CE22EL,0x1E935223L,0x7810AB6297B391DAL};
    union U1 **l_907 = &p_1006->g_162;
    int16_t l_943 = 0x280CL;
    int32_t l_982 = 0L;
    int32_t l_983 = 6L;
    int64_t l_989 = 1L;
    int32_t l_990 = 0x03479C60L;
    int32_t l_991 = (-1L);
    int32_t l_993 = 0L;
    int i, j;
lbl_835:
    for (p_1006->g_613 = 21; (p_1006->g_613 == (-27)); --p_1006->g_613)
    { /* block id: 351 */
        uint16_t *l_806 = (void*)0;
        uint16_t *l_807 = &p_1006->g_65;
        int32_t l_812 = 0L;
        uint16_t *l_813 = &p_1006->g_63;
        uint16_t *l_814 = &p_1006->g_815;
        (*p_1006->g_148) = func_47(func_28(l_793, p_1006), ((((((*l_814) |= ((*l_793) = ((*l_813) = ((0x63F19D0FL > (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((p_27.f0 >= (1L != ((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(((*p_1006->g_268) | (safe_mul_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((((*l_807) = 0UL) < (safe_lshift_func_uint8_t_u_s(((!(safe_mul_func_int16_t_s_s(((1UL | (((-10L) == (-1L)) <= p_27.f0)) < 0x560BL), (*l_793)))) || l_812), p_27.f0))) , (*p_1006->g_268)), 4UL)) , 0x22E9B791CC219A3FL) >= p_27.f0), 0x7FL))), 0x23L)) && (*l_793)), 5)) && p_1006->g_8))), 10)), p_27.f0)) , 1UL) & p_1006->g_119)) & l_812)))) != p_27.f0) ^ 0x0EL) , p_27.f0) ^ l_812), l_793, l_812, l_812, p_1006);
        for (p_1006->g_46.f1 = 0; (p_1006->g_46.f1 == 60); p_1006->g_46.f1 = safe_add_func_uint8_t_u_u(p_1006->g_46.f1, 1))
        { /* block id: 359 */
            (*p_1006->g_148) = &l_812;
        }
        if (p_27.f0)
            continue;
    }
    for (p_1006->g_272 = 0; (p_1006->g_272 < (-16)); p_1006->g_272 = safe_sub_func_uint8_t_u_u(p_1006->g_272, 7))
    { /* block id: 366 */
        uint32_t l_820 = 0xA3043AE8L;
        int32_t l_823 = 0x7836A051L;
        struct S0 l_833 = {4294967290UL,3UL,-1L};
        uint64_t *l_855 = &p_1006->g_123[0][3][0];
        int32_t l_902 = 6L;
        union U1 **l_903 = &p_1006->g_162;
        int32_t l_908 = 0x5B3053E1L;
        int32_t l_910[5][6] = {{0x430C3FADL,0x5C0B5240L,0x3ED4896CL,0x4DD5F00AL,0x5C0B5240L,0x4DD5F00AL},{0x430C3FADL,0x5C0B5240L,0x3ED4896CL,0x4DD5F00AL,0x5C0B5240L,0x4DD5F00AL},{0x430C3FADL,0x5C0B5240L,0x3ED4896CL,0x4DD5F00AL,0x5C0B5240L,0x4DD5F00AL},{0x430C3FADL,0x5C0B5240L,0x3ED4896CL,0x4DD5F00AL,0x5C0B5240L,0x4DD5F00AL},{0x430C3FADL,0x5C0B5240L,0x3ED4896CL,0x4DD5F00AL,0x5C0B5240L,0x4DD5F00AL}};
        uint32_t ***l_932 = &p_1006->g_694[0][0][3];
        int i, j;
        --l_820;
        l_823 &= (*l_793);
        (*p_1006->g_148) = &l_823;
        for (p_1006->g_65 = (-5); (p_1006->g_65 < 14); ++p_1006->g_65)
        { /* block id: 372 */
            int32_t *l_834 = &p_1006->g_613;
            struct S0 l_840[10][5] = {{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}},{{1UL,4294967295UL,1L},{0x39D43FD5L,0x94572778L,-9L},{0x39D43FD5L,0x94572778L,-9L},{1UL,4294967295UL,1L},{0x5973F76DL,4294967286UL,0x33EC918E60431E9AL}}};
            union U1 **l_859 = &p_1006->g_162;
            int i, j;
            (*l_793) |= ((void*)0 != p_1006->g_458);
            for (l_820 = 0; (l_820 != 21); ++l_820)
            { /* block id: 376 */
                int32_t *l_828 = &p_1006->g_789;
                struct S0 **l_830 = &p_1006->g_673;
                struct S0 ***l_829 = &l_830;
                struct S0 **l_832 = &p_1006->g_673;
                struct S0 ***l_831 = &l_832;
                (*p_1006->g_148) = l_828;
                (*l_831) = ((*l_829) = &p_1006->g_673);
                (*p_1006->g_148) = func_36(((**l_832) = l_833), l_834, p_1006);
                for (p_1006->g_102 = 0; (p_1006->g_102 <= 1); p_1006->g_102 += 1)
                { /* block id: 384 */
                    int i;
                    return p_1006->g_112[(p_1006->g_102 + 1)];
                }
            }
            if (l_823)
            { /* block id: 388 */
                int32_t l_841 = 1L;
                uint16_t *l_849 = &p_1006->g_63;
                int32_t **l_858 = &l_834;
                if (p_1006->g_102)
                    goto lbl_835;
                if (((*p_1006->g_653) = (safe_div_func_uint8_t_u_u((((p_27.f0 != ((safe_mul_func_uint8_t_u_u(253UL, (((l_833.f1 == (((*l_849) = ((l_840[1][4] , 1L) ^ (((void*)0 != &p_1006->g_694[0][0][3]) == ((l_842[5][3] = l_841) < (safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_27.f0, l_833.f0)), p_27.f0)) != 0x41L), 7UL)))))) < l_823)) > (*l_793)) && (*p_1006->g_612)))) || (*l_834))) <= 0xA7ACL) >= p_1006->g_420), p_27.f0))))
                { /* block id: 393 */
                    int64_t *l_850 = &p_1006->g_46.f2;
                    uint32_t *l_854 = &l_820;
                    int8_t *l_860 = &p_1006->g_861;
                    int32_t l_862 = 0x5830EC39L;
                    uint64_t *l_863 = &p_1006->g_665;
                    union U1 l_864 = {4294967295UL};
                    (*p_1006->g_148) = func_47((((*l_863) &= ((l_850 != l_851) , ((*l_834) |= (safe_add_func_uint16_t_u_u(((p_27.f0 <= (0x6499CC64L < (((*l_854) = 0x9C60AB02L) || ((l_851 == l_855) >= p_27.f0)))) , (safe_sub_func_int8_t_s_s(((*l_860) = ((((l_858 = &p_1006->g_221[0][4][1]) != &l_834) , l_859) != (void*)0)), p_27.f0))), l_862))))) , l_864), p_1006->g_865[0][1][0], &l_841, p_27.f0, (*l_793), p_1006);
                }
                else
                { /* block id: 400 */
                    int32_t *l_868 = (void*)0;
                    int32_t *l_869 = &p_1006->g_420;
                    struct S0 *l_870 = &l_840[1][4];
                    (*l_870) = (((*l_869) &= (((*l_851) |= (safe_div_func_uint16_t_u_u(p_1006->g_271[8][4], (*p_1006->g_268)))) <= (p_1006->g_4 , p_1006->g_119))) , l_833);
                    (*l_793) = (!(**l_858));
                    for (l_823 = 14; (l_823 >= 2); l_823 = safe_sub_func_uint32_t_u_u(l_823, 8))
                    { /* block id: 407 */
                        (**l_858) &= 0L;
                    }
                }
                if (p_1006->g_65)
                    goto lbl_835;
                for (l_823 = 0; (l_823 <= 4); l_823 += 1)
                { /* block id: 414 */
                    int32_t l_873 = 0x4956FDF0L;
                    int32_t *l_874 = &l_873;
                    uint8_t *l_881[5][4][3] = {{{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0}},{{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0}},{{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0}},{{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0}},{{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0},{&p_1006->g_118,&p_1006->g_118,(void*)0}}};
                    int i, j, k;
                    (*p_1006->g_673) = ((0xFF87CF10B28DED35L ^ (!(l_873 , p_1006->g_271[7][1]))) , l_840[l_823][l_823]);
                    (*l_858) = func_47(p_27, l_833.f2, (l_874 = &l_823), p_27.f0, (p_27.f0 || (safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(p_27.f0, (((((safe_mul_func_uint8_t_u_u((p_1006->g_118 = 0x0FL), (l_840[l_823][l_823].f2 , (((p_27.f0 , &p_1006->g_673) != (void*)0) == 0xA84C0773L)))) & p_27.f0) & p_27.f0) != 253UL) , l_833.f0))) || (*p_1006->g_268)), 2))), p_1006);
                    if (p_27.f0)
                    { /* block id: 419 */
                        return p_27.f0;
                    }
                    else
                    { /* block id: 421 */
                        if ((*l_793))
                            break;
                        (*l_793) = (p_27.f0 , 0x4A55821FL);
                        if (p_27.f0)
                            break;
                    }
                }
            }
            else
            { /* block id: 427 */
                uint8_t l_884 = 0x93L;
                int32_t *l_935 = &l_823;
                l_882 = (p_1006->g_102 && 0x02L);
                l_840[1][3] = ((*p_1006->g_673) , l_883);
                l_884--;
                for (p_1006->g_815 = 9; (p_1006->g_815 == 29); p_1006->g_815 = safe_add_func_uint8_t_u_u(p_1006->g_815, 6))
                { /* block id: 433 */
                    int32_t *l_889 = &p_1006->g_8;
                    int32_t *l_891 = &l_823;
                    int32_t **l_892[3];
                    union U1 l_899 = {0x4129AB1EL};
                    union U1 **l_905 = &p_1006->g_162;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_892[i] = &p_1006->g_149[1][0];
                    if (((l_889 = ((*l_834) , &p_1006->g_8)) != (p_1006->g_890[0] , (p_1006->g_221[2][7][1] = l_891))))
                    { /* block id: 436 */
                        if (p_1006->g_46.f1)
                            goto lbl_835;
                        if (p_27.f0)
                            break;
                        if (p_27.f0)
                            break;
                        if ((*p_1006->g_612))
                            break;
                    }
                    else
                    { /* block id: 441 */
                        (*l_834) |= ((*l_793) = (-6L));
                        if (p_27.f0)
                            break;
                    }
                    (*p_1006->g_148) = &l_882;
                    (*l_793) &= p_27.f0;
                    if ((safe_mod_func_int8_t_s_s((*p_1006->g_438), (*l_834))))
                    { /* block id: 448 */
                        union U1 ***l_904 = &l_903;
                        int16_t *l_909 = &l_842[0][3];
                        l_910[0][2] ^= ((*l_889) = ((*p_1006->g_438) | (((((-1L) > (p_27.f0 > ((*l_909) = (safe_rshift_func_uint8_t_u_u(p_27.f0, (safe_rshift_func_int16_t_s_s((((*p_1006->g_268) = (((l_899 , (+6UL)) == ((l_823 = l_820) < ((((+((safe_mul_func_uint8_t_u_u((l_908 = ((l_907 = (p_1006->g_906[4] = ((l_902 ^= p_1006->g_235) , (l_905 = ((*l_904) = l_903))))) != (*p_1006->g_402))), 0x04L)) >= (*p_1006->g_268))) == 0x8793C55DCA425909L) , 0x294E415EL) && 0xFEB231DDL))) | (-10L))) >= l_833.f1), 11))))))) , l_833.f1) > 0x33F17121L) == p_27.f0)));
                    }
                    else
                    { /* block id: 460 */
                        int16_t l_917 = 0x7B99L;
                        uint8_t *l_933[1][8] = {{&l_884,&l_884,&l_884,&l_884,&l_884,&l_884,&l_884,&l_884}};
                        int i, j;
                        (*l_891) |= (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((p_1006->g_65 < (0UL | (safe_add_func_uint8_t_u_u(l_917, (*p_1006->g_438))))), (safe_mod_func_uint32_t_u_u(((p_1006->g_665 < (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((~(safe_div_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((l_902 != (safe_sub_func_int8_t_s_s(((+((!(p_1006->g_118 = p_27.f0)) > ((((l_882 = ((p_1006->g_934 = ((*l_793) = ((void*)0 == l_932))) , 0xDDL)) ^ (*l_834)) == l_833.f0) == 0x2BD73871L))) , 0x4FL), 0x4EL))), p_27.f0)) >= p_1006->g_665), 1L))), p_27.f0)) <= 0x17L), p_1006->g_4)), p_27.f0))) < l_902), p_27.f0)))), p_27.f0));
                        l_935 = &p_1006->g_613;
                        (*l_935) ^= 1L;
                    }
                }
            }
        }
    }
    for (p_1006->g_65 = 0; (p_1006->g_65 < 34); ++p_1006->g_65)
    { /* block id: 475 */
        int64_t l_942 = 0L;
        uint32_t ***l_946[2][9];
        int16_t **l_949 = &p_1006->g_268;
        int32_t *l_966 = &p_1006->g_8;
        int8_t **l_969 = &p_1006->g_438;
        uint16_t l_976[8][5][5] = {{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}},{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}},{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}},{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}},{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}},{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}},{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}},{{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL},{0x7AA1L,0x6FA3L,65531UL,0UL,65531UL}}};
        int32_t l_981 = 0x3C705A14L;
        int32_t l_985[9] = {0x7F09B793L,0x7F09B793L,0x7F09B793L,0x7F09B793L,0x7F09B793L,0x7F09B793L,0x7F09B793L,0x7F09B793L,0x7F09B793L};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 9; j++)
                l_946[i][j] = (void*)0;
        }
        (1 + 1);
    }
    return (*l_793);
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_162 p_1006->g_105
 * writes:
 */
union U1  func_28(int32_t * p_29, struct S2 * p_1006)
{ /* block id: 11 */
    uint16_t l_35 = 0x073EL;
    struct S0 l_39 = {0xF57A5575L,0x783DE769L,0x35A60C437FFEAC8EL};
    union U1 l_53 = {4294967292UL};
    union U1 *l_54 = &l_53;
    int32_t **l_181 = &p_1006->g_149[0][0];
    int32_t *l_788 = &p_1006->g_789;
    return (*p_1006->g_162);
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_221 p_1006->g_46 p_1006->g_148 p_1006->g_3 p_1006->g_112 p_1006->g_420 p_1006->g_149 p_1006->g_438 p_1006->g_272 p_1006->g_458 p_1006->g_271 p_1006->g_65 p_1006->g_118 p_1006->g_268 p_1006->g_119 p_1006->g_8 p_1006->g_612 p_1006->g_613 p_1006->g_63 p_1006->g_437 p_1006->g_653 p_1006->g_673 p_1006->g_162 p_1006->g_105 p_1006->g_734 p_1006->g_235
 * writes: p_1006->g_46 p_1006->g_149 p_1006->g_420 p_1006->g_123 p_1006->g_118 p_1006->g_65 p_1006->g_112 p_1006->g_272 p_1006->g_613 p_1006->g_162 p_1006->g_694 p_1006->g_734 p_1006->g_102 p_1006->g_63 p_1006->g_8
 */
int32_t  func_30(int32_t * p_31, int8_t  p_32, uint32_t  p_33, int32_t * p_34, struct S2 * p_1006)
{ /* block id: 89 */
    int32_t ***l_199 = (void*)0;
    int32_t l_219 = 0x3639F850L;
    uint16_t l_220[9] = {0x36AAL,0x36AAL,0x36AAL,0x36AAL,0x36AAL,0x36AAL,0x36AAL,0x36AAL,0x36AAL};
    struct S0 l_239 = {0x2AE61E18L,4294967295UL,-9L};
    int32_t l_252 = 0x0DF3ED75L;
    int16_t *l_267 = &p_1006->g_112[2];
    uint32_t *l_285 = &p_1006->g_102;
    uint32_t **l_284[3];
    int32_t l_336 = 0x7931C781L;
    int32_t l_338 = 8L;
    int32_t l_342 = 1L;
    int32_t l_344[9][3] = {{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L},{0x1ACBA701L,0x5DD93372L,0x1ACBA701L}};
    union U1 **l_366 = &p_1006->g_162;
    uint16_t l_380 = 65535UL;
    int32_t l_391 = 0x76B97F64L;
    int8_t *l_408[1];
    int32_t l_504[6][8] = {{0x0F197773L,1L,0x077F80CCL,9L,0x077F80CCL,1L,0x0F197773L,0x10DAB274L},{0x0F197773L,1L,0x077F80CCL,9L,0x077F80CCL,1L,0x0F197773L,0x10DAB274L},{0x0F197773L,1L,0x077F80CCL,9L,0x077F80CCL,1L,0x0F197773L,0x10DAB274L},{0x0F197773L,1L,0x077F80CCL,9L,0x077F80CCL,1L,0x0F197773L,0x10DAB274L},{0x0F197773L,1L,0x077F80CCL,9L,0x077F80CCL,1L,0x0F197773L,0x10DAB274L},{0x0F197773L,1L,0x077F80CCL,9L,0x077F80CCL,1L,0x0F197773L,0x10DAB274L}};
    uint8_t l_522 = 1UL;
    int8_t **l_563 = &p_1006->g_438;
    uint16_t l_634[4][5][5] = {{{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L}},{{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L}},{{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L}},{{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L},{0x5CA9L,0UL,65535UL,0xCEF4L,0xC826L}}};
    uint16_t *l_637 = &l_220[7];
    uint16_t *l_638 = &l_220[3];
    int64_t l_641 = (-1L);
    struct S0 *l_647 = &l_239;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_284[i] = &l_285;
    for (i = 0; i < 1; i++)
        l_408[i] = (void*)0;
    if (((void*)0 == l_199))
    { /* block id: 90 */
        int32_t l_201 = (-1L);
        uint8_t l_222 = 247UL;
        int32_t *l_232 = &p_1006->g_3;
        union U1 **l_308[2];
        int32_t l_331[5] = {9L,9L,9L,9L,9L};
        uint32_t l_392 = 0UL;
        uint32_t **l_425 = &l_285;
        int32_t ***l_428 = (void*)0;
        int32_t l_448[1];
        uint64_t l_537 = 9UL;
        uint16_t *l_636 = &l_634[1][2][2];
        uint16_t **l_635 = &l_636;
        int16_t l_639 = 0x2550L;
        int64_t *l_640[9][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int16_t l_642[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int8_t l_643 = 2L;
        struct S0 *l_646 = (void*)0;
        int32_t *l_648 = &l_331[1];
        int i, j;
        for (i = 0; i < 2; i++)
            l_308[i] = &p_1006->g_162;
        for (i = 0; i < 1; i++)
            l_448[i] = 1L;
        for (p_33 = 0; (p_33 <= 3); p_33 += 1)
        { /* block id: 93 */
            struct S0 l_200 = {4294967295UL,0x51B3B912L,0x55A0D50F805FC65DL};
            int32_t *l_218[1][7] = {{&p_1006->g_8,&p_1006->g_8,&p_1006->g_8,&p_1006->g_8,&p_1006->g_8,&p_1006->g_8,&p_1006->g_8}};
            uint16_t *l_231 = &p_1006->g_65;
            uint32_t *l_234 = &p_1006->g_108;
            uint32_t **l_233 = &l_234;
            int16_t l_253 = 0x0B2EL;
            union U1 ***l_350[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int64_t l_376 = 0L;
            int64_t l_386[8];
            uint32_t l_419 = 0x6F5BABD9L;
            int32_t ***l_427 = (void*)0;
            int32_t ***l_429 = &p_1006->g_148;
            int32_t l_479[6][1];
            uint8_t *l_492[5] = {&l_222,&l_222,&l_222,&l_222,&l_222};
            uint8_t **l_491 = &l_492[2];
            int i, j;
            for (i = 0; i < 8; i++)
                l_386[i] = (-2L);
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_479[i][j] = 1L;
            }
            (*p_1006->g_148) = func_36(l_200, p_1006->g_221[2][7][1], p_1006);
            l_222 ^= (*p_31);
        }
        for (l_239.f2 = 3; (l_239.f2 < 21); l_239.f2 = safe_add_func_int64_t_s_s(l_239.f2, 4))
        { /* block id: 233 */
            int32_t l_552[10][5][2] = {{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}},{{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL},{0x3162CB01L,0x397B95EAL}}};
            uint32_t l_559 = 0xBEA70517L;
            struct S0 l_560 = {0x8D8838C0L,7UL,0x402FD3F3F9A9F736L};
            int8_t **l_577 = &l_408[0];
            int i, j, k;
            for (l_239.f0 = 0; (l_239.f0 <= 3); l_239.f0 += 1)
            { /* block id: 236 */
                int i;
                return p_1006->g_112[l_239.f0];
            }
            for (p_1006->g_420 = 0; (p_1006->g_420 != 28); p_1006->g_420 = safe_add_func_uint16_t_u_u(p_1006->g_420, 2))
            { /* block id: 241 */
                int32_t **l_542 = &p_1006->g_149[1][0];
                union U1 l_543 = {0xDA045C80L};
                int32_t *l_561 = &l_331[1];
                (*p_1006->g_148) = (*p_1006->g_148);
                for (l_391 = 0; l_391 < 1; l_391 += 1)
                {
                    l_408[l_391] = (void*)0;
                }
                (*l_561) = 0x74513B79L;
            }
            if (((safe_unary_minus_func_int8_t_s((((void*)0 == l_563) , (*p_1006->g_438)))) , 0x3C382DC2L))
            { /* block id: 248 */
                int64_t l_576[1][1];
                int32_t *l_578 = &l_331[1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_576[i][j] = 0x6BE41AF88B749215L;
                }
                (*l_578) = ((((safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((*p_1006->g_438) , ((0x2B6B4E99L | (safe_sub_func_int64_t_s_s((p_32 == p_33), (((*p_1006->g_458) = (safe_div_func_uint32_t_u_u(4294967288UL, 0x46DDC2CBL))) == (~((p_1006->g_271[5][0] ^ p_33) ^ (((safe_rshift_func_int8_t_s_s(0x6EL, 4)) > l_576[0][0]) >= p_32))))))) , 0x4A49L)), 0x262AL)) < 0x5E010275A46B2132L), p_1006->g_65)), p_1006->g_46.f1)) , (void*)0) == l_577) || p_33);
                return (*p_31);
            }
            else
            { /* block id: 252 */
                uint64_t l_611[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_611[i] = 0xCCF53FAA38F4BA8EL;
                for (p_1006->g_118 = 0; (p_1006->g_118 >= 57); p_1006->g_118 = safe_add_func_int8_t_s_s(p_1006->g_118, 9))
                { /* block id: 255 */
                    uint64_t l_604 = 1UL;
                    for (p_1006->g_65 = 0; (p_1006->g_65 <= 4); p_1006->g_65 += 1)
                    { /* block id: 258 */
                        int32_t *l_585 = &l_344[2][0];
                        uint8_t *l_609 = &l_222;
                        uint16_t *l_610 = &l_380;
                        int i, j;
                        if (p_1006->g_271[p_1006->g_65][p_1006->g_65])
                            break;
                        if ((*p_31))
                            break;
                        (*p_1006->g_612) &= (safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s((*p_31), ((*l_585) |= (*p_31)))) & ((((!(safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_33, ((*p_1006->g_268) = p_33))) , ((safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((*l_610) = (safe_rshift_func_int16_t_s_u(0x32EDL, (safe_rshift_func_uint8_t_u_s(((*l_609) = (safe_rshift_func_uint8_t_u_u((*l_232), (p_1006->g_46.f0 == (safe_lshift_func_int8_t_s_u(((*p_1006->g_438) ^= l_604), (safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0x82L, p_1006->g_119)), (*l_232))))))))), 6))))), 0x978EL)), 0x95DDBF30CDF26798L)) || 0x604CL)), l_611[1])) ^ 1L) != p_33), p_1006->g_8))) < p_1006->g_118) | p_33) && 7L)), p_1006->g_118));
                    }
                }
            }
        }
        l_643 &= (safe_add_func_int32_t_s_s(((0x4BAFL ^ (safe_rshift_func_uint8_t_u_s((~((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((*l_232), ((*p_1006->g_438) > ((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((l_641 = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((*l_232), (l_252 |= 0x3FB6E455L))), (l_634[1][2][2] <= ((0x1DL || (((l_637 = ((*l_635) = &p_1006->g_65)) != (l_638 = &l_220[7])) <= p_33)) || 1L)))), l_639))), p_32)) >= (-1L)), p_32)), p_1006->g_63)) || (**p_1006->g_437))))), (*l_232))) , l_642[6])), p_32))) , (*p_31)), 0L));
        (*l_648) |= ((safe_sub_func_int64_t_s_s((l_646 != (l_647 = l_646)), p_32)) <= 0x85L);
    }
    else
    { /* block id: 279 */
        int32_t ****l_651 = &l_199;
        int32_t *l_652 = (void*)0;
        int32_t *l_654 = &p_1006->g_8;
        int32_t l_655 = 0x2BF1C450L;
        int32_t *l_656 = (void*)0;
        int32_t *l_657 = &p_1006->g_8;
        int32_t *l_658 = &l_252;
        int32_t *l_659 = &l_655;
        int32_t *l_660 = (void*)0;
        uint64_t l_661 = 18446744073709551610UL;
        uint64_t *l_664 = &p_1006->g_665;
        union U1 l_666 = {0UL};
        struct S0 *l_671[2];
        struct S0 **l_672[8] = {&l_647,&l_647,&l_647,&l_647,&l_647,&l_647,&l_647,&l_647};
        int i;
        for (i = 0; i < 2; i++)
            l_671[i] = &l_239;
        (*p_1006->g_653) = ((p_1006->g_272 | (l_651 != &l_199)) , (*p_1006->g_612));
        ++l_661;
        (*p_1006->g_148) = (p_32 , p_31);
    }
    (*p_1006->g_673) = (*p_1006->g_673);
    if (((((**l_366) , &l_641) != (void*)0) != 0UL))
    { /* block id: 289 */
        uint8_t l_681 = 8UL;
        union U1 *l_689 = (void*)0;
        int32_t l_737 = (-1L);
        uint8_t *l_744 = (void*)0;
        uint8_t **l_743 = &l_744;
        int32_t l_773 = 6L;
        int32_t l_776 = 1L;
        int32_t l_777 = 0x6A3BD537L;
        int32_t l_778 = (-1L);
        int32_t l_779 = 6L;
        uint8_t l_780 = 0UL;
        for (p_1006->g_420 = 0; (p_1006->g_420 == 17); ++p_1006->g_420)
        { /* block id: 292 */
            union U1 *l_686 = &p_1006->g_105[5][0];
            uint32_t **l_696[9][8] = {{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]},{(void*)0,&l_285,&p_1006->g_695[3][1][3],&p_1006->g_695[1][1][7],&p_1006->g_695[3][1][3],&l_285,(void*)0,&p_1006->g_695[3][1][3]}};
            int32_t l_703[1];
            int64_t *l_761 = &p_1006->g_271[8][3];
            int64_t **l_760 = &l_761;
            int32_t l_775 = (-1L);
            int i, j;
            for (i = 0; i < 1; i++)
                l_703[i] = 0x64D60197L;
            for (l_522 = 0; (l_522 == 43); ++l_522)
            { /* block id: 295 */
                int32_t *l_678 = (void*)0;
                int32_t *l_679 = (void*)0;
                int32_t l_680 = 7L;
                uint32_t **l_691 = &l_285;
                uint32_t l_704[1];
                int8_t *l_739 = &p_1006->g_272;
                union U1 l_757 = {4294967295UL};
                int64_t l_772 = 0x123271BCC58E7562L;
                int32_t l_774[4] = {(-1L),(-1L),(-1L),(-1L)};
                int i;
                for (i = 0; i < 1; i++)
                    l_704[i] = 4294967295UL;
                l_680 ^= 0x4660445CL;
                if ((l_681 ^ (safe_lshift_func_int8_t_s_u((**p_1006->g_437), 4))))
                { /* block id: 297 */
                    union U1 **l_688[3][5] = {{&l_686,&l_686,&l_686,&l_686,&l_686},{&l_686,&l_686,&l_686,&l_686,&l_686},{&l_686,&l_686,&l_686,&l_686,&l_686}};
                    int32_t l_690[4][7][4] = {{{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L}},{{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L}},{{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L}},{{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L},{1L,0x12C7F93DL,0x056D8F55L,2L}}};
                    uint32_t ***l_692 = (void*)0;
                    uint32_t ***l_693[8][8][4] = {{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}},{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}},{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}},{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}},{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}},{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}},{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}},{{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]},{&l_284[0],&l_284[0],&l_691,&l_284[0]}}};
                    uint8_t **l_745 = &l_744;
                    int32_t *l_783 = &l_773;
                    int i, j, k;
                    for (l_252 = 16; (l_252 != 7); l_252 = safe_sub_func_uint8_t_u_u(l_252, 9))
                    { /* block id: 300 */
                        return (*p_31);
                    }
                    l_689 = (p_1006->g_162 = l_686);
                    if ((((p_33 == ((*p_1006->g_653) >= p_32)) != ((l_690[1][1][3] , &l_285) != (l_696[6][1] = (p_1006->g_694[0][0][3] = l_691)))) || (((safe_sub_func_int8_t_s_s(((*p_31) || (((safe_mul_func_uint8_t_u_u(((*p_31) == (p_33 && l_703[0])), p_33)) && (**p_1006->g_437)) < l_704[0])), p_33)) , l_690[0][6][2]) && 0x63L)))
                    { /* block id: 307 */
                        uint64_t l_735 = 18446744073709551615UL;
                        uint16_t *l_736 = &p_1006->g_63;
                        int32_t l_738 = (-4L);
                        int32_t l_740[5];
                        uint64_t *l_746 = &p_1006->g_665;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_740[i] = (-9L);
                        l_740[0] ^= (((*p_1006->g_148) != (void*)0) <= (safe_mul_func_uint8_t_u_u(((((((safe_div_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((((((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((l_738 |= ((l_737 &= (((*l_736) = (((safe_add_func_int64_t_s_s((((**l_691) = ((safe_rshift_func_uint8_t_u_s(l_703[0], 3)) == ((safe_mul_func_int8_t_s_s(((*p_1006->g_438) = 0x68L), (safe_rshift_func_int8_t_s_u((0x192C9AA58A5D0FC8L ^ ((+((*l_267) = (safe_unary_minus_func_uint32_t_u((((*l_638) ^= p_32) ^ p_1006->g_112[0]))))) == (safe_mul_func_int16_t_s_s((p_1006->g_734 |= (safe_mul_func_int8_t_s_s((+(safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(p_32, l_690[1][1][3])), 0x6655L))), p_33))), p_33)))), 7)))) ^ l_735))) >= l_703[0]), l_703[0])) > p_33) ^ 0x4D921656L)) || l_690[1][1][3])) < 0x01L)) != 0x4B9AC599E50EFCE4L), 65535UL)) ^ (-6L)), 0x2E14L)) , l_739) == &p_32) || p_32) <= (*p_1006->g_612)) ^ (*p_31)), l_735)) , l_690[1][1][3]), l_681)) < 0x64BAL), (-5L))) < p_1006->g_46.f1) , 6L) > p_32) || (*p_31)) != p_1006->g_235), 0xD8L)));
                        if ((*p_31))
                            break;
                        (*p_1006->g_148) = p_34;
                        (*p_1006->g_148) = p_34;
                    }
                    else
                    { /* block id: 323 */
                        struct S0 l_764 = {6UL,0x13D7889DL,-1L};
                        int32_t *l_767 = (void*)0;
                        int32_t *l_768 = &l_690[1][1][3];
                        int32_t *l_769 = &l_344[4][1];
                        int32_t *l_770 = (void*)0;
                        int32_t *l_771[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_771[i] = &l_344[2][2];
                        (*p_1006->g_148) = &l_737;
                        (*p_1006->g_148) = func_47(((l_757 , (((safe_mul_func_int16_t_s_s((*p_1006->g_268), ((void*)0 == l_760))) > p_1006->g_8) , (safe_div_func_uint16_t_u_u((l_764 , p_1006->g_3), (safe_mod_func_uint16_t_u_u(((void*)0 == &p_1006->g_271[2][0]), (*p_1006->g_268))))))) , (*l_689)), l_764.f2, &l_690[2][3][2], l_764.f0, p_33, p_1006);
                        ++l_780;
                        (*p_1006->g_673) = (*p_1006->g_673);
                    }
                    (*l_783) |= 0x706368EFL;
                }
                else
                { /* block id: 330 */
                    (*p_1006->g_148) = (*p_1006->g_148);
                }
            }
            l_703[0] &= 0x37E4CE3CL;
        }
    }
    else
    { /* block id: 336 */
        (*p_1006->g_653) |= (p_33 | (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((p_32 != ((*p_31) <= 0x619126B1L)), (**p_1006->g_437))), 0x5D74L)));
    }
    return (*p_1006->g_653);
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_46
 * writes: p_1006->g_46
 */
int32_t * func_36(struct S0  p_37, int32_t * p_38, struct S2 * p_1006)
{ /* block id: 84 */
    struct S0 *l_182[2][3][2] = {{{(void*)0,&p_1006->g_46},{(void*)0,&p_1006->g_46},{(void*)0,&p_1006->g_46}},{{(void*)0,&p_1006->g_46},{(void*)0,&p_1006->g_46},{(void*)0,&p_1006->g_46}}};
    int32_t *l_183 = (void*)0;
    int32_t l_184 = 0x0FF4D6F5L;
    int32_t l_185 = 0x07783848L;
    int32_t l_186[6];
    int32_t *l_187 = &l_184;
    int32_t *l_188 = &l_186[0];
    int32_t *l_189 = &l_186[3];
    int32_t *l_190 = &l_186[0];
    int32_t *l_191 = (void*)0;
    int32_t *l_192 = &p_1006->g_8;
    int32_t *l_193 = &l_185;
    int32_t *l_194 = &l_186[0];
    int32_t *l_195[4] = {&l_185,&l_185,&l_185,&l_185};
    uint32_t l_196 = 0x8CE4A9CAL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_186[i] = (-1L);
    p_1006->g_46 = p_1006->g_46;
    p_37 = p_37;
    --l_196;
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_8 p_1006->g_102 p_1006->g_105 p_1006->g_3 p_1006->g_46.f1 p_1006->g_46.f0 p_1006->g_63 p_1006->g_112 p_1006->g_119 p_1006->g_105.f0 p_1006->g_123 p_1006->g_118 p_1006->g_148 p_1006->g_46
 * writes: p_1006->g_102 p_1006->g_105 p_1006->g_108 p_1006->g_8 p_1006->g_112 p_1006->g_65 p_1006->g_118 p_1006->g_119 p_1006->g_123 p_1006->g_46 p_1006->g_148 p_1006->g_162
 */
int32_t * func_40(uint64_t  p_41, int32_t * p_42, uint16_t  p_43, struct S0  p_44, int32_t * p_45, struct S2 * p_1006)
{ /* block id: 20 */
    int8_t l_78 = 0x38L;
    int32_t l_109 = 0x2D6F4160L;
    uint16_t *l_125[5][7][7] = {{{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65}},{{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65}},{{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65}},{{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65}},{{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65,&p_1006->g_63,&p_1006->g_65,&p_1006->g_65}}};
    union U1 *l_160 = &p_1006->g_105[2][0];
    union U1 **l_161[4][4];
    int16_t *l_167 = &p_1006->g_112[0];
    struct S0 l_170 = {0xCE32B38BL,0xE490638FL,0x2CE6A80779CC8352L};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_161[i][j] = &l_160;
    }
    if (l_78)
    { /* block id: 21 */
        int64_t l_95[2][7];
        uint32_t *l_100 = (void*)0;
        uint32_t *l_101 = &p_1006->g_102;
        union U1 *l_106 = &p_1006->g_105[5][0];
        uint32_t *l_107 = &p_1006->g_108;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_95[i][j] = (-8L);
        }
        (*p_42) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((l_109 = (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((((((1UL ^ (l_78 >= (l_95[0][5] == ((safe_lshift_func_int16_t_s_s((0xBA83E1A6L > ((safe_sub_func_int32_t_s_s(p_1006->g_8, ((*l_107) = ((((((*l_101) &= p_1006->g_8) , ((safe_lshift_func_uint8_t_u_s(0UL, 3)) <= (((*l_106) = p_1006->g_105[5][0]) , (1UL & (-1L))))) ^ p_1006->g_3) | l_78) != 0x7040L)))) > p_44.f0)), 6)) != p_43)))) != p_1006->g_8) ^ p_1006->g_46.f1) != 0L) == 4294967295UL) , l_95[0][5]), 5)), l_78)), l_95[1][3]))), p_1006->g_46.f0)) <= p_1006->g_63) != p_1006->g_46.f0), 0xA7L)), p_43)), 3)), 0x33E2L));
    }
    else
    { /* block id: 27 */
        int32_t *l_110[3][5] = {{&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3}};
        int32_t **l_111 = &l_110[0][3];
        int32_t *l_124 = (void*)0;
        int i, j;
        (*l_111) = l_110[0][3];
        for (p_1006->g_8 = 0; (p_1006->g_8 >= 0); p_1006->g_8 -= 1)
        { /* block id: 31 */
            uint64_t l_120 = 0x1ACCAB4487636F93L;
            uint16_t *l_126 = &p_1006->g_63;
            uint8_t *l_137 = (void*)0;
            uint8_t *l_140 = (void*)0;
            p_1006->g_112[0] ^= (&p_1006->g_108 != p_45);
            for (p_1006->g_65 = 0; (p_1006->g_65 <= 0); p_1006->g_65 += 1)
            { /* block id: 35 */
                int32_t **l_115 = (void*)0;
                uint8_t *l_116 = (void*)0;
                uint8_t *l_117 = &p_1006->g_118;
                uint64_t *l_121 = (void*)0;
                uint64_t *l_122 = &p_1006->g_123[0][1][3];
                if (((-1L) < ((p_1006->g_3 && ((safe_lshift_func_uint8_t_u_u(((*l_117) = (&p_42 == l_115)), p_44.f1)) != ((*l_122) &= ((p_1006->g_119 &= (p_1006->g_63 , p_1006->g_8)) && ((+((p_44.f2 , (((l_120 & 0x0E3A4418L) && p_1006->g_63) ^ p_1006->g_105[5][0].f0)) , 8UL)) >= p_1006->g_119))))) , p_1006->g_8)))
                { /* block id: 39 */
                    return l_124;
                }
                else
                { /* block id: 41 */
                    return &p_1006->g_3;
                }
            }
            (*l_111) = ((l_78 > ((l_125[1][1][3] == l_126) >= ((p_1006->g_46.f0 , (*p_45)) & p_1006->g_119))) , (*l_111));
            for (p_1006->g_119 = 0; (p_1006->g_119 <= 0); p_1006->g_119 += 1)
            { /* block id: 48 */
                uint64_t l_127 = 18446744073709551608UL;
                int32_t ***l_132 = &l_111;
                uint8_t *l_139 = &p_1006->g_118;
                uint8_t **l_138[1];
                int32_t l_141 = 0x29422283L;
                struct S0 l_145 = {0xB045E172L,0x07FB85FAL,1L};
                int i;
                for (i = 0; i < 1; i++)
                    l_138[i] = &l_139;
                if (((l_127 != (safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_41, (((*l_132) = &p_45) != (void*)0))), (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((4294967290UL & l_120), (l_137 == (l_140 = &p_1006->g_118)))), 7))))) ^ (p_1006->g_123[6][4][3] <= p_1006->g_46.f1)))
                { /* block id: 51 */
                    uint32_t l_142 = 4294967287UL;
                    ++l_142;
                }
                else
                { /* block id: 53 */
                    struct S0 *l_146 = &p_1006->g_46;
                    (*l_146) = l_145;
                    return &p_1006->g_8;
                }
                if (p_1006->g_112[3])
                    continue;
                if ((***l_132))
                    continue;
            }
        }
        for (p_1006->g_118 = 0; (p_1006->g_118 <= 0); p_1006->g_118 += 1)
        { /* block id: 63 */
            uint8_t *l_156[8][1][7] = {{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}},{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}},{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}},{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}},{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}},{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}},{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}},{{&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118,&p_1006->g_118}}};
            uint8_t **l_155[6][7][4] = {{{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]}},{{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]}},{{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]}},{{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]}},{{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]}},{{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]},{&l_156[2][0][0],&l_156[4][0][6],&l_156[0][0][1],&l_156[2][0][0]}}};
            int32_t l_159 = (-5L);
            int i, j, k;
            (*p_42) &= l_78;
            for (l_109 = 4; (l_109 >= 1); l_109 -= 1)
            { /* block id: 67 */
                int32_t ***l_150 = &p_1006->g_148;
                (*p_42) = (1UL > (safe_unary_minus_func_uint32_t_u((((p_43 , &l_124) == ((*l_150) = p_1006->g_148)) , ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_1006->g_119, (p_44.f0 , (((void*)0 != l_155[2][4][3]) < (p_1006->g_46 , l_109))))), p_41)) , 0x31EA8A68L)))));
                for (p_1006->g_46.f0 = 0; (p_1006->g_46.f0 <= 4); p_1006->g_46.f0 += 1)
                { /* block id: 72 */
                    int i, j, k;
                    (*p_42) = ((safe_add_func_uint16_t_u_u((p_1006->g_123[(p_1006->g_46.f0 + 2)][p_1006->g_46.f0][(p_1006->g_118 + 4)] , p_41), p_1006->g_3)) ^ l_159);
                }
            }
        }
    }
    p_1006->g_162 = l_160;
    (*p_42) = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u((l_109 &= (p_44.f1 && ((*l_167) = p_41))), (l_78 , ((((safe_add_func_uint64_t_u_u((((l_78 | l_78) , 0L) | (p_41 == (l_170 , (safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s(((((+((~(safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((0x221AC852239B40A8L ^ p_41) , l_170.f0), 0x78L)), 0x66L)), 0xC8L))) > p_43)) >= p_1006->g_119) , p_41) && p_44.f2), 4294967295UL)) , 0x5E5EL), 13))))), l_78)) == (-1L)) == p_1006->g_3) ^ p_1006->g_123[0][1][3])))) && 0x80DCL), 2));
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_1006->g_46.f1 p_1006->g_65 p_1006->g_8 p_1006->g_46.f0
 * writes: p_1006->g_63 p_1006->g_8
 */
int32_t * func_47(union U1  p_48, uint8_t  p_49, int32_t * p_50, uint32_t  p_51, int32_t  p_52, struct S2 * p_1006)
{ /* block id: 13 */
    uint32_t l_55 = 0x6E20B395L;
    uint16_t *l_62 = &p_1006->g_63;
    uint16_t *l_64[4][5] = {{&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65},{&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65,&p_1006->g_65}};
    int32_t l_66 = (-3L);
    uint16_t l_69 = 0xB003L;
    int32_t *l_72 = &p_1006->g_8;
    int32_t **l_73 = (void*)0;
    int32_t **l_74 = &l_72;
    int32_t *l_77 = &l_66;
    int i, j;
    (*l_72) &= (l_55 ^ (l_55 < ((safe_add_func_uint16_t_u_u(((*l_62) = (safe_add_func_int16_t_s_s(p_1006->g_46.f1, (&p_1006->g_3 != (void*)0)))), ((l_66 |= (p_52 & 0UL)) || ((safe_add_func_int16_t_s_s(l_69, ((safe_sub_func_uint8_t_u_u(p_1006->g_46.f1, p_1006->g_65)) >= l_66))) != p_52)))) < p_51)));
    (*l_74) = &p_1006->g_3;
    (*l_77) &= (0x115CC6C9DB4546B7L != (safe_rshift_func_int16_t_s_s(p_1006->g_46.f0, 3)));
    return &p_1006->g_3;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1007;
    struct S2* p_1006 = &c_1007;
    struct S2 c_1008 = {
        (-6L), // p_1006->g_3
        0x54E677B5L, // p_1006->g_4
        (-1L), // p_1006->g_8
        {0x770AACC7L,0x2B5BDDDDL,0x557D38C46158E9D2L}, // p_1006->g_46
        65527UL, // p_1006->g_63
        0x7AD2L, // p_1006->g_65
        4294967286UL, // p_1006->g_102
        {{{0x86BC1AF3L}},{{0x86BC1AF3L}},{{0x86BC1AF3L}},{{0x86BC1AF3L}},{{0x86BC1AF3L}},{{0x86BC1AF3L}},{{0x86BC1AF3L}},{{0x86BC1AF3L}}}, // p_1006->g_105
        0xD406D4EBL, // p_1006->g_108
        {1L,1L,1L,1L}, // p_1006->g_112
        254UL, // p_1006->g_118
        0x589B7A40L, // p_1006->g_119
        {{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}},{{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL},{0x029035E4B5282479L,4UL,18446744073709551614UL,0x80B3DF57287C4FD0L,18446744073709551612UL}}}, // p_1006->g_123
        {{&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3,&p_1006->g_3}}, // p_1006->g_149
        &p_1006->g_149[1][0], // p_1006->g_148
        &p_1006->g_105[5][0], // p_1006->g_162
        {{{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8}},{{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8}},{{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8}},{{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8}},{{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8}},{{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8},{&p_1006->g_3,&p_1006->g_3,&p_1006->g_8}}}, // p_1006->g_221
        2UL, // p_1006->g_235
        {&p_1006->g_46,&p_1006->g_46,&p_1006->g_46,&p_1006->g_46,&p_1006->g_46,&p_1006->g_46,&p_1006->g_46,&p_1006->g_46,&p_1006->g_46}, // p_1006->g_237
        &p_1006->g_112[0], // p_1006->g_268
        {{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)},{0x02759C4D771850E5L,(-1L),(-1L),0x02759C4D771850E5L,(-1L)}}, // p_1006->g_271
        0x42L, // p_1006->g_272
        &p_1006->g_162, // p_1006->g_403
        &p_1006->g_403, // p_1006->g_402
        0x0329BCB2L, // p_1006->g_420
        &p_1006->g_272, // p_1006->g_438
        &p_1006->g_438, // p_1006->g_437
        &p_1006->g_123[0][1][3], // p_1006->g_458
        &p_1006->g_46, // p_1006->g_459
        (void*)0, // p_1006->g_489
        (void*)0, // p_1006->g_493
        0x7FBA968BL, // p_1006->g_613
        &p_1006->g_613, // p_1006->g_612
        &p_1006->g_613, // p_1006->g_653
        7UL, // p_1006->g_665
        &p_1006->g_46, // p_1006->g_673
        (void*)0, // p_1006->g_687
        {{{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108},{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108}},{{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108},{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108}},{{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108},{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108}},{{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108},{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108}},{{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108},{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108}},{{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108},{&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_102,&p_1006->g_102,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108,&p_1006->g_108}}}, // p_1006->g_695
        {{{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]}},{{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]}},{{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]}},{{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]}},{{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]}},{{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]},{&p_1006->g_695[3][1][3],(void*)0,&p_1006->g_695[3][1][3],&p_1006->g_695[2][1][4]}}}, // p_1006->g_694
        0x28D48111L, // p_1006->g_734
        0x71FAEAF9L, // p_1006->g_789
        0UL, // p_1006->g_815
        0x65L, // p_1006->g_861
        {{{65535UL,0xE275L,65534UL,65526UL,0xE275L,65526UL,65534UL,0xE275L,65535UL},{65535UL,0xE275L,65534UL,65526UL,0xE275L,65526UL,65534UL,0xE275L,65535UL},{65535UL,0xE275L,65534UL,65526UL,0xE275L,65526UL,65534UL,0xE275L,65535UL}},{{65535UL,0xE275L,65534UL,65526UL,0xE275L,65526UL,65534UL,0xE275L,65535UL},{65535UL,0xE275L,65534UL,65526UL,0xE275L,65526UL,65534UL,0xE275L,65535UL},{65535UL,0xE275L,65534UL,65526UL,0xE275L,65526UL,65534UL,0xE275L,65535UL}}}, // p_1006->g_865
        {0x10L}, // p_1006->g_890
        {&p_1006->g_162,(void*)0,&p_1006->g_162,&p_1006->g_162,(void*)0,&p_1006->g_162,&p_1006->g_162,(void*)0,&p_1006->g_162}, // p_1006->g_906
        (-1L), // p_1006->g_934
        0x7FL, // p_1006->g_988
        0x39E2L, // p_1006->g_998
    };
    c_1007 = c_1008;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1006);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1006->g_3, "p_1006->g_3", print_hash_value);
    transparent_crc(p_1006->g_4, "p_1006->g_4", print_hash_value);
    transparent_crc(p_1006->g_8, "p_1006->g_8", print_hash_value);
    transparent_crc(p_1006->g_46.f0, "p_1006->g_46.f0", print_hash_value);
    transparent_crc(p_1006->g_46.f1, "p_1006->g_46.f1", print_hash_value);
    transparent_crc(p_1006->g_46.f2, "p_1006->g_46.f2", print_hash_value);
    transparent_crc(p_1006->g_63, "p_1006->g_63", print_hash_value);
    transparent_crc(p_1006->g_65, "p_1006->g_65", print_hash_value);
    transparent_crc(p_1006->g_102, "p_1006->g_102", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1006->g_105[i][j].f0, "p_1006->g_105[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1006->g_108, "p_1006->g_108", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1006->g_112[i], "p_1006->g_112[i]", print_hash_value);

    }
    transparent_crc(p_1006->g_118, "p_1006->g_118", print_hash_value);
    transparent_crc(p_1006->g_119, "p_1006->g_119", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1006->g_123[i][j][k], "p_1006->g_123[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1006->g_235, "p_1006->g_235", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1006->g_271[i][j], "p_1006->g_271[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1006->g_272, "p_1006->g_272", print_hash_value);
    transparent_crc(p_1006->g_420, "p_1006->g_420", print_hash_value);
    transparent_crc(p_1006->g_613, "p_1006->g_613", print_hash_value);
    transparent_crc(p_1006->g_665, "p_1006->g_665", print_hash_value);
    transparent_crc(p_1006->g_734, "p_1006->g_734", print_hash_value);
    transparent_crc(p_1006->g_789, "p_1006->g_789", print_hash_value);
    transparent_crc(p_1006->g_815, "p_1006->g_815", print_hash_value);
    transparent_crc(p_1006->g_861, "p_1006->g_861", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1006->g_865[i][j][k], "p_1006->g_865[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1006->g_890[i], "p_1006->g_890[i]", print_hash_value);

    }
    transparent_crc(p_1006->g_934, "p_1006->g_934", print_hash_value);
    transparent_crc(p_1006->g_988, "p_1006->g_988", print_hash_value);
    transparent_crc(p_1006->g_998, "p_1006->g_998", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
