// -g 24,1,57 -l 3,1,3
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


// Seed: 1779141703

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int16_t g_4;
    uint16_t g_6;
    int32_t g_8;
    int32_t * volatile g_7;
    int32_t g_96;
    int8_t g_104[2];
    uint64_t g_105;
    int32_t *g_136[6][5];
    int32_t **g_135;
    volatile int8_t *g_142;
    uint16_t *g_147[8][9];
    uint16_t **g_146;
    uint32_t g_153;
    uint16_t g_168[2];
    volatile uint64_t g_179;
    int8_t g_247;
    uint64_t *g_264;
    int32_t * volatile g_265;
    int32_t g_320;
    int32_t * volatile g_356;
    int16_t g_370[2];
    int16_t *g_395[4];
    uint64_t *g_438[10];
    uint32_t g_481;
    volatile uint64_t g_491;
    int32_t ***g_520[4];
    int32_t ****g_519;
    uint32_t g_522;
    uint8_t *** volatile g_527;
    int64_t g_543;
    uint16_t g_552;
    int32_t *g_554[9];
    uint64_t * volatile ** volatile g_600;
    int32_t g_607;
    int32_t * volatile * volatile * volatile **g_613;
    int32_t * volatile * volatile * volatile ***g_612;
    uint16_t g_618;
    uint32_t g_636[10];
    int8_t g_647;
    int32_t g_657;
    int32_t g_697;
    uint8_t g_700[1];
    uint32_t g_708;
    int8_t g_754;
    int32_t ** volatile g_779;
    uint8_t *g_799;
    uint8_t **g_798;
    uint8_t *** volatile g_797;
    uint64_t g_844[4];
    int64_t g_848;
    int32_t g_958;
    int64_t g_1108;
    volatile uint16_t g_1109;
    int8_t *g_1132[5][3];
    int8_t **g_1131;
    uint64_t g_1160;
    int32_t * volatile g_1223;
    volatile uint64_t g_1231[10];
    int16_t g_1271[3][1][3];
    int16_t g_1292;
    uint32_t g_1371;
    int64_t *** volatile g_1378;
    int64_t g_1384[4][7][4];
    uint8_t g_1396;
    volatile int64_t *g_1404;
    volatile int64_t **g_1403[6][2];
    volatile uint64_t g_1405[5];
    volatile int32_t g_1466;
    uint64_t **g_1511;
    uint64_t ***g_1510;
    uint32_t g_1613;
    uint8_t g_1694[8];
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_1741);
uint8_t  func_9(int16_t * p_10, int32_t * p_11, int16_t  p_12, struct S0 * p_1741);
int32_t * func_14(uint32_t  p_15, struct S0 * p_1741);
uint16_t  func_20(uint16_t * p_21, uint8_t  p_22, uint8_t  p_23, struct S0 * p_1741);
uint32_t  func_27(uint16_t * p_28, struct S0 * p_1741);
uint16_t * func_29(int32_t  p_30, int64_t  p_31, uint16_t  p_32, uint16_t  p_33, struct S0 * p_1741);
uint16_t  func_43(int32_t * p_44, int32_t * p_45, int8_t  p_46, struct S0 * p_1741);
int32_t * func_47(int16_t * p_48, struct S0 * p_1741);
int16_t  func_52(int32_t * p_53, int32_t  p_54, uint64_t  p_55, struct S0 * p_1741);
int32_t * func_56(int64_t  p_57, uint16_t  p_58, int16_t * p_59, uint32_t  p_60, int32_t  p_61, struct S0 * p_1741);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1741->g_7 p_1741->g_8 p_1741->g_6 p_1741->g_4 p_1741->g_105 p_1741->g_519 p_1741->g_520 p_1741->g_135 p_1741->g_136 p_1741->g_168 p_1741->g_320 p_1741->g_554 p_1741->g_552 p_1741->g_481 p_1741->g_247 p_1741->g_600 p_1741->g_607 p_1741->g_264 p_1741->g_612 p_1741->g_636 p_1741->g_657 p_1741->g_697 p_1741->g_708 p_1741->g_146 p_1741->g_147 p_1741->g_754 p_1741->g_779 p_1741->g_96 p_1741->g_543 p_1741->g_797 p_1741->g_799 p_1741->g_700 p_1741->g_848 p_1741->g_958 p_1741->g_104 p_1741->g_522 p_1741->g_370 p_1741->g_844 p_1741->g_798 p_1741->g_618 p_1741->g_1109 p_1741->g_1131 p_1741->g_613 p_1741->g_1223 p_1741->g_1231 p_1741->g_1292 p_1741->g_1160 p_1741->g_1108 p_1741->g_1371 p_1741->g_1384 p_1741->g_1132 p_1741->g_395 p_1741->g_1396 p_1741->g_1403 p_1741->g_1405 p_1741->g_1511 p_1741->g_1510 p_1741->g_1694
 * writes: p_1741->g_4 p_1741->g_6 p_1741->g_8 p_1741->g_105 p_1741->g_96 p_1741->g_481 p_1741->g_607 p_1741->g_618 p_1741->g_370 p_1741->g_636 p_1741->g_647 p_1741->g_136 p_1741->g_657 p_1741->g_697 p_1741->g_708 p_1741->g_147 p_1741->g_522 p_1741->g_543 p_1741->g_554 p_1741->g_798 p_1741->g_844 p_1741->g_848 p_1741->g_104 p_1741->g_700 p_1741->g_552 p_1741->g_135 p_1741->g_320 p_1741->g_247 p_1741->g_754 p_1741->g_1109 p_1741->g_1131 p_1741->g_179 p_1741->g_1231 p_1741->g_1160 p_1741->g_1292 p_1741->g_958 p_1741->g_1108 p_1741->g_1371 p_1741->g_1384 p_1741->g_1396 p_1741->g_1405 p_1741->g_146 p_1741->g_1510 p_1741->g_520 p_1741->g_168
 */
int64_t  func_1(struct S0 * p_1741)
{ /* block id: 4 */
    uint32_t l_2 = 0xE6E83846L;
    int16_t *l_3 = &p_1741->g_4;
    uint16_t *l_5 = &p_1741->g_6;
    int16_t *l_13[3][10][6] = {{{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0}},{{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0}},{{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0},{(void*)0,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,(void*)0,(void*)0}}};
    uint32_t l_1739 = 1UL;
    int32_t l_1740 = 0x554DEADFL;
    int i, j, k;
    (*p_1741->g_7) |= (((*l_3) = l_2) && ((*l_5) = l_2));
    l_1740 = (func_9(l_13[1][0][0], func_14((l_2 >= l_2), p_1741), l_2, p_1741) != (((l_2 , l_1739) != (((((l_2 > l_1739) == l_1739) & l_1739) , l_1740) , l_1740)) , p_1741->g_1694[3]));
    return l_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_612 p_1741->g_613 p_1741->g_264 p_1741->g_105 p_1741->g_958 p_1741->g_1108 p_1741->g_1160 p_1741->g_519 p_1741->g_520 p_1741->g_135 p_1741->g_1109 p_1741->g_543 p_1741->g_552 p_1741->g_754 p_1741->g_4 p_1741->g_636 p_1741->g_618 p_1741->g_1371 p_1741->g_1384 p_1741->g_1132 p_1741->g_799 p_1741->g_395 p_1741->g_1396 p_1741->g_1403 p_1741->g_700 p_1741->g_1405 p_1741->g_370 p_1741->g_1223 p_1741->g_697 p_1741->g_7 p_1741->g_8 p_1741->g_657 p_1741->g_104 p_1741->g_1511 p_1741->g_1510 p_1741->g_844 p_1741->g_708 p_1741->g_1694
 * writes: p_1741->g_105 p_1741->g_844 p_1741->g_958 p_1741->g_1108 p_1741->g_1160 p_1741->g_136 p_1741->g_543 p_1741->g_552 p_1741->g_636 p_1741->g_4 p_1741->g_708 p_1741->g_1371 p_1741->g_1384 p_1741->g_247 p_1741->g_104 p_1741->g_647 p_1741->g_700 p_1741->g_370 p_1741->g_1396 p_1741->g_1405 p_1741->g_697 p_1741->g_146 p_1741->g_1510 p_1741->g_657 p_1741->g_8 p_1741->g_520 p_1741->g_168
 */
uint8_t  func_9(int16_t * p_10, int32_t * p_11, int16_t  p_12, struct S0 * p_1741)
{ /* block id: 639 */
    int32_t l_1302 = 0x4975E300L;
    int32_t *****l_1303 = &p_1741->g_519;
    uint64_t *l_1304 = &p_1741->g_844[1];
    int32_t l_1307 = 0L;
    int32_t l_1317 = 1L;
    uint8_t l_1319 = 248UL;
    uint32_t *l_1332[10][7] = {{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0},{&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,&p_1741->g_153,(void*)0,(void*)0}};
    int8_t *l_1346 = &p_1741->g_104[0];
    uint64_t **l_1394 = &l_1304;
    uint64_t ***l_1393 = &l_1394;
    int32_t l_1420 = 0L;
    uint16_t **l_1451 = &p_1741->g_147[1][1];
    int32_t l_1478 = 0x456678D2L;
    int32_t l_1479 = 0x692B2DDFL;
    uint64_t l_1480[9][10][2] = {{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}},{{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL},{0xD8816CE7EDBF7D93L,0xA8EE02952DBBCF4EL}}};
    int16_t l_1483 = 3L;
    int8_t l_1486 = 0x74L;
    uint64_t l_1502[6][4] = {{18446744073709551609UL,0xB466C499DAE78C59L,18446744073709551611UL,0xB466C499DAE78C59L},{18446744073709551609UL,0xB466C499DAE78C59L,18446744073709551611UL,0xB466C499DAE78C59L},{18446744073709551609UL,0xB466C499DAE78C59L,18446744073709551611UL,0xB466C499DAE78C59L},{18446744073709551609UL,0xB466C499DAE78C59L,18446744073709551611UL,0xB466C499DAE78C59L},{18446744073709551609UL,0xB466C499DAE78C59L,18446744073709551611UL,0xB466C499DAE78C59L},{18446744073709551609UL,0xB466C499DAE78C59L,18446744073709551611UL,0xB466C499DAE78C59L}};
    int64_t l_1532 = 0x2A22258DD1B6B98FL;
    int32_t l_1534 = (-1L);
    int32_t l_1539 = 0x55095769L;
    int32_t l_1542 = 0L;
    uint64_t *l_1564 = &p_1741->g_1160;
    int32_t l_1578 = 0x1D9E969AL;
    uint8_t **l_1610 = &p_1741->g_799;
    int32_t ***l_1611 = &p_1741->g_135;
    int32_t *l_1697 = &p_1741->g_958;
    uint32_t l_1698[2][10][3] = {{{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL}},{{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL},{0x57ADC34FL,0x57ADC34FL,0UL}}};
    int16_t l_1724[10][10][1] = {{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}},{{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL},{0x64FEL}}};
    uint8_t l_1735 = 254UL;
    int i, j, k;
    if ((((*p_1741->g_264) ^= (safe_mod_func_uint16_t_u_u(((&p_1741->g_1132[1][0] == (void*)0) || (safe_rshift_func_int16_t_s_u(l_1302, ((*p_1741->g_612) == l_1303)))), p_12))) & (l_1302 || (((*l_1304) = p_12) > ((safe_mod_func_uint16_t_u_u(((l_1307 != p_12) != (-1L)), p_12)) | 18446744073709551611UL)))))
    { /* block id: 642 */
        int32_t *l_1308 = (void*)0;
        int32_t l_1315 = 0x0A402DDBL;
        int32_t l_1318 = 0x3EBBF533L;
        p_11 = l_1308;
        for (p_1741->g_958 = 29; (p_1741->g_958 > (-9)); --p_1741->g_958)
        { /* block id: 646 */
            int32_t *l_1314 = (void*)0;
            int32_t *l_1316[7][3] = {{&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315}};
            int i, j;
            for (p_1741->g_1108 = 0; (p_1741->g_1108 >= 7); p_1741->g_1108 = safe_add_func_int16_t_s_s(p_1741->g_1108, 6))
            { /* block id: 649 */
                int8_t l_1313 = 0x5DL;
                l_1307 = l_1313;
            }
            --l_1319;
        }
        for (p_1741->g_1160 = 0; (p_1741->g_1160 < 39); p_1741->g_1160++)
        { /* block id: 656 */
            (****l_1303) = (void*)0;
        }
    }
    else
    { /* block id: 659 */
        int32_t *****l_1330 = &p_1741->g_519;
        int32_t l_1331 = 0x409522D9L;
        int32_t l_1333[6] = {2L,2L,2L,2L,2L,2L};
        int16_t l_1344 = 0x74ABL;
        int32_t *l_1348 = (void*)0;
        int64_t l_1375 = 0L;
        int64_t l_1460 = (-1L);
        int8_t l_1565 = 0x3EL;
        uint32_t *l_1605 = &p_1741->g_1371;
        uint32_t *l_1612 = &p_1741->g_636[3];
        int32_t l_1619 = 0L;
        uint8_t l_1690 = 1UL;
        uint64_t ***l_1696[7] = {&p_1741->g_1511,(void*)0,&p_1741->g_1511,&p_1741->g_1511,(void*)0,&p_1741->g_1511,&p_1741->g_1511};
        int i;
        if (((p_1741->g_543 &= (((~((void*)0 == &p_1741->g_797)) >= (((safe_mul_func_int16_t_s_s((-3L), p_12)) , &p_1741->g_153) == l_1332[7][4])) , p_1741->g_1109)) ^ l_1333[3]))
        { /* block id: 662 */
            int32_t *l_1336 = &l_1333[3];
            uint16_t *l_1337[1][6] = {{&p_1741->g_168[1],(void*)0,&p_1741->g_168[1],&p_1741->g_168[1],(void*)0,&p_1741->g_168[1]}};
            uint32_t *l_1345 = &p_1741->g_636[3];
            int32_t l_1347 = 0x0973A342L;
            uint64_t ***l_1395 = &l_1394;
            int16_t l_1400 = 0L;
            int64_t *l_1412 = &p_1741->g_1108;
            int64_t **l_1411 = &l_1412;
            uint16_t l_1432 = 0xBA6DL;
            int i, j;
            for (p_1741->g_552 = 19; (p_1741->g_552 > 48); p_1741->g_552 = safe_add_func_int8_t_s_s(p_1741->g_552, 7))
            { /* block id: 665 */
                (****l_1303) = (void*)0;
                (***p_1741->g_519) = l_1336;
            }
            if (((*l_1336) , (+(((*l_1336) = (3UL < ((***l_1303) != (***l_1330)))) < ((((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((p_12 = (safe_lshift_func_uint8_t_u_u(0x08L, l_1344))) || (((*l_1345) = p_12) != (l_1347 ^= ((((void*)0 == p_11) , l_1346) != (void*)0)))), l_1319)), (-1L))) == l_1302) | p_1741->g_754) || p_1741->g_1108)))))
            { /* block id: 673 */
                uint8_t l_1357 = 0x5FL;
                uint64_t **l_1359 = &p_1741->g_438[3];
                uint64_t ***l_1358 = &l_1359;
                int8_t **l_1388 = &p_1741->g_1132[1][0];
                int32_t **l_1397 = &p_1741->g_554[5];
                int64_t *l_1409 = (void*)0;
                int64_t **l_1408 = &l_1409;
                int32_t l_1421 = 0x3FCFA49DL;
                uint32_t l_1422 = 0xA41C0DA5L;
                (****l_1303) = l_1348;
                (****l_1330) = p_11;
                (*l_1336) = 0x56579FA6L;
                for (p_1741->g_4 = 28; (p_1741->g_4 >= 12); p_1741->g_4 = safe_sub_func_uint64_t_u_u(p_1741->g_4, 6))
                { /* block id: 679 */
                    int16_t **l_1351 = (void*)0;
                    int16_t **l_1352 = &p_1741->g_395[1];
                    uint32_t *l_1367 = &p_1741->g_708;
                    uint32_t *l_1370 = &p_1741->g_1371;
                    int32_t l_1374 = 0x51020319L;
                    int64_t *l_1402[2][4];
                    int64_t **l_1401[6][2] = {{&l_1402[0][2],&l_1402[0][2]},{&l_1402[0][2],&l_1402[0][2]},{&l_1402[0][2],&l_1402[0][2]},{&l_1402[0][2],&l_1402[0][2]},{&l_1402[0][2],&l_1402[0][2]},{&l_1402[0][2],&l_1402[0][2]}};
                    int16_t l_1427 = 0x14BCL;
                    uint32_t l_1433[5];
                    uint64_t l_1445 = 18446744073709551607UL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1402[i][j] = &l_1375;
                    }
                    for (i = 0; i < 5; i++)
                        l_1433[i] = 0xB72C5EA5L;
                    (*l_1336) |= 5L;
                    (****l_1330) = p_11;
                    if ((l_1375 &= (safe_rshift_func_int8_t_s_s(p_12, (safe_sub_func_int16_t_s_s((l_1357 != (((void*)0 == l_1358) , ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u((((*l_1345)--) == (l_1374 = (((safe_sub_func_uint16_t_u_u((((((((*l_1367) = ((void*)0 == l_1303)) == ((*l_1370) |= ((safe_lshift_func_int16_t_s_u(l_1357, 1)) , p_1741->g_618))) || (safe_add_func_uint64_t_u_u(p_12, (*l_1336)))) > 65526UL) != l_1357) == 0x0AA3L), p_12)) | 0x34L) == (-1L)))), 8)))) < 1L))), 0x2A08L))))))
                    { /* block id: 688 */
                        int64_t *l_1377 = &p_1741->g_848;
                        int64_t **l_1376 = &l_1377;
                        int64_t ***l_1379 = &l_1376;
                        int32_t l_1382 = 3L;
                        int64_t *l_1383 = &p_1741->g_1384[1][4][1];
                        uint32_t **l_1385 = &l_1332[4][6];
                        uint64_t **l_1386 = &p_1741->g_438[3];
                        int8_t **l_1387 = &p_1741->g_1132[1][0];
                        (*l_1379) = l_1376;
                        p_1741->g_1396 &= (((((((safe_lshift_func_int16_t_s_s(((**l_1352) = (((**l_1387) = (((*l_1383) &= (1UL && l_1382)) , (((*l_1385) = &p_1741->g_153) == (((l_1386 == (void*)0) == (l_1387 == l_1388)) , (void*)0)))) != ((*l_1336) = ((safe_lshift_func_uint8_t_u_s(((*p_1741->g_799) = ((safe_div_func_uint8_t_u_u(l_1357, 1UL)) , 3UL)), l_1374)) , 0x04L)))), p_12)) > l_1374) && 0x4813L) , (-7L)) && 0x5AL) , l_1393) != l_1395);
                        (*l_1336) = ((((((l_1397 == (((safe_sub_func_int8_t_s_s(p_12, (((**l_1352) = l_1400) > (l_1401[5][1] == p_1741->g_1403[0][0])))) >= p_1741->g_1384[1][3][2]) , l_1397)) > p_12) > ((((*l_1367) = ((void*)0 != &p_1741->g_1271[2][0][1])) < l_1374) > p_1741->g_700[0])) && p_12) || 4294967292UL) < 0x68L);
                        p_1741->g_1405[4]++;
                    }
                    else
                    { /* block id: 701 */
                        int64_t ***l_1410 = (void*)0;
                        int32_t *l_1413 = &l_1347;
                        int32_t *l_1414 = &l_1331;
                        int32_t *l_1415 = &p_1741->g_958;
                        int32_t *l_1416 = &l_1333[3];
                        int32_t *l_1417 = &p_1741->g_697;
                        int32_t *l_1418 = &l_1317;
                        int32_t *l_1419[6][9] = {{&l_1347,(void*)0,&l_1307,&l_1307,&p_1741->g_958,&l_1347,&l_1307,&l_1333[3],&l_1307},{&l_1347,(void*)0,&l_1307,&l_1307,&p_1741->g_958,&l_1347,&l_1307,&l_1333[3],&l_1307},{&l_1347,(void*)0,&l_1307,&l_1307,&p_1741->g_958,&l_1347,&l_1307,&l_1333[3],&l_1307},{&l_1347,(void*)0,&l_1307,&l_1307,&p_1741->g_958,&l_1347,&l_1307,&l_1333[3],&l_1307},{&l_1347,(void*)0,&l_1307,&l_1307,&p_1741->g_958,&l_1347,&l_1307,&l_1333[3],&l_1307},{&l_1347,(void*)0,&l_1307,&l_1307,&p_1741->g_958,&l_1347,&l_1307,&l_1333[3],&l_1307}};
                        uint8_t *l_1444 = &l_1319;
                        int i, j;
                        l_1411 = (l_1408 = (void*)0);
                        --l_1422;
                        (*l_1336) = ((safe_add_func_int64_t_s_s(l_1427, ((((((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((l_1433[3] = ((*l_1417) = l_1432)), p_12)), ((*p_1741->g_264) || (*p_1741->g_264)))) , ((p_12 < ((*l_1444) = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((((((p_12 & (0UL | ((*p_1741->g_799) = (!(*p_1741->g_799))))) , p_12) , p_12) ^ 0x9754A7424A162BC8L) > p_12) <= l_1433[4]), 7)), (-9L))), 0x5F9362B70719402CL)) >= 7L) && 0x33L) & p_12), l_1427)), (*l_1336))))) > 0x54B2L)) == 0L) , 8UL) , (-1L)) , l_1445))) == p_12);
                    }
                }
            }
            else
            { /* block id: 712 */
                int64_t l_1446[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                l_1446[3] = 0x52417A92L;
            }
            for (l_1375 = 0; l_1375 < 4; l_1375 += 1)
            {
                for (p_12 = 0; p_12 < 7; p_12 += 1)
                {
                    for (p_1741->g_105 = 0; p_1741->g_105 < 4; p_1741->g_105 += 1)
                    {
                        p_1741->g_1384[l_1375][p_12][p_1741->g_105] = 0x2743A19A81FBB25EL;
                    }
                }
            }
            for (l_1420 = 1; (l_1420 >= 0); l_1420 -= 1)
            { /* block id: 718 */
                int32_t l_1448 = 0x74CA7FE5L;
                uint16_t ***l_1449 = (void*)0;
                uint16_t ***l_1450 = &p_1741->g_146;
                int i;
                l_1448 &= (safe_unary_minus_func_uint64_t_u((4294967286UL <= p_1741->g_370[l_1420])));
                (*l_1336) = (((*l_1450) = (void*)0) == (l_1451 = (((void*)0 == &p_1741->g_370[l_1420]) , l_1451)));
            }
        }
        else
        { /* block id: 724 */
            uint32_t l_1459 = 7UL;
            int32_t l_1467 = 0x137580F4L;
            int32_t l_1471 = (-10L);
            int32_t l_1476 = 0x61748419L;
            int32_t l_1477 = 0L;
            uint64_t ***l_1508 = &l_1394;
            uint8_t l_1512 = 249UL;
            uint16_t l_1533 = 65529UL;
            int32_t l_1540 = 0x6386C78FL;
            int32_t l_1541[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1541[i] = 0L;
            if ((((p_12 , p_12) ^ (safe_mul_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((p_1741->g_958 & (safe_unary_minus_func_int64_t_s(((*p_1741->g_264) | ((p_12 >= (((safe_lshift_func_uint16_t_u_u(l_1459, 13)) ^ p_12) ^ 0x3FD8939D0B3D89E4L)) || (p_12 > l_1460)))))) , p_12), 0xFF9DL)) < p_12) | 0xBD48A88EL), 0x3FL))) ^ 0L))
            { /* block id: 725 */
                int32_t l_1470 = 0x2738C8FBL;
                uint64_t l_1473 = 0x2CE497245F68451DL;
                for (l_1420 = 0; (l_1420 != (-12)); l_1420 = safe_sub_func_int8_t_s_s(l_1420, 5))
                { /* block id: 728 */
                    int16_t l_1468 = 0x609DL;
                    int32_t l_1469 = (-8L);
                    int32_t l_1472 = 0x418F450EL;
                    for (p_1741->g_1108 = 0; (p_1741->g_1108 != 17); p_1741->g_1108 = safe_add_func_uint32_t_u_u(p_1741->g_1108, 4))
                    { /* block id: 731 */
                        int32_t *l_1465[4][5] = {{&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3]},{&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3]},{&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3]},{&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3],&l_1333[3]}};
                        int i, j;
                        l_1473--;
                        (****l_1303) = p_11;
                        l_1480[7][9][1]++;
                        (****l_1330) = &l_1471;
                    }
                    return p_12;
                }
            }
            else
            { /* block id: 739 */
                uint32_t *l_1487 = (void*)0;
                uint32_t *l_1488 = &l_1459;
                int32_t l_1493[3][5] = {{0x680E51D5L,0L,0x680E51D5L,0x680E51D5L,0L},{0x680E51D5L,0L,0x680E51D5L,0x680E51D5L,0L},{0x680E51D5L,0L,0x680E51D5L,0x680E51D5L,0L}};
                int32_t l_1501 = 0x3C649F50L;
                int32_t l_1505 = 1L;
                int32_t l_1538[7][1][6] = {{{(-1L),(-1L),0x478F3478L,0L,1L,1L}},{{(-1L),(-1L),0x478F3478L,0L,1L,1L}},{{(-1L),(-1L),0x478F3478L,0L,1L,1L}},{{(-1L),(-1L),0x478F3478L,0L,1L,1L}},{{(-1L),(-1L),0x478F3478L,0L,1L,1L}},{{(-1L),(-1L),0x478F3478L,0L,1L,1L}},{{(-1L),(-1L),0x478F3478L,0L,1L,1L}}};
                int8_t l_1567 = 0x4AL;
                uint8_t **l_1593 = (void*)0;
                int32_t *l_1600[9][10] = {{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501},{(void*)0,&l_1331,&l_1478,&l_1493[0][4],(void*)0,&l_1501,&l_1331,&l_1542,&l_1493[0][4],&l_1501}};
                int i, j, k;
                if ((l_1483 & ((safe_rshift_func_uint8_t_u_u(0x82L, 2)) | (((((*l_1488) ^= (p_12 & ((&p_12 != &p_1741->g_1271[2][0][0]) | ((0x464AL > (l_1486 |= p_12)) | l_1467)))) , ((safe_lshift_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(p_12, l_1493[2][0])) , l_1467) | 1UL), 0)) , l_1493[0][4])) && 0xECL) <= l_1467))))
                { /* block id: 742 */
                    int16_t *l_1494[10][7] = {{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4},{&p_1741->g_4,&p_1741->g_1271[1][0][2],&l_1344,&p_1741->g_370[1],&l_1344,&p_1741->g_1271[1][0][2],&p_1741->g_4}};
                    uint16_t *l_1499[9][2];
                    int32_t l_1500[3][8][9] = {{{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL}},{{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL}},{{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL},{1L,0x127FDB37L,(-1L),(-1L),0x65FC76D7L,0x44A2AB3FL,7L,0x76E60A12L,0x448C8F2BL}}};
                    uint64_t ****l_1509[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    int32_t *l_1513 = &p_1741->g_657;
                    int32_t *****l_1520 = &p_1741->g_519;
                    int32_t ******l_1521 = &l_1330;
                    int8_t l_1535 = 0x18L;
                    int16_t l_1537 = 0x570EL;
                    uint64_t l_1543 = 7UL;
                    uint64_t *l_1562 = &p_1741->g_1160;
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1499[i][j] = &p_1741->g_168[1];
                    }
                    (*l_1513) = (((l_1476 = (p_12 = (-9L))) , (safe_div_func_int64_t_s_s(((l_1493[1][0] >= (((p_1741->g_1510 = (((l_1501 ^= (0L && (((((safe_mod_func_uint64_t_u_u((((!((-9L) > p_12)) || (p_12 | (((l_1502[2][3]++) >= l_1505) <= ((l_1493[0][3] == (((safe_add_func_uint64_t_u_u((((((l_1493[0][3] , &l_1483) != &l_1344) != p_12) == 0xB448L) != l_1500[0][6][7]), l_1493[2][0])) > 0L) , 0x23D0D64CL)) && 0x4AL)))) , 0x5F56E11E244E778CL), 0x26169A92A38FB622L)) != p_12) , l_1471) == l_1500[2][2][0]) <= l_1493[1][1]))) || 0x783BL) , l_1508)) != &l_1394) >= l_1477)) != l_1512), p_12))) , (*p_1741->g_1223));
                    if ((safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_12, ((((*l_1521) = l_1520) != l_1303) , ((safe_mul_func_int8_t_s_s(p_12, ((((safe_add_func_int8_t_s_s(((*l_1346) |= (((((-1L) != (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((((65535UL == ((!((safe_mod_func_uint32_t_u_u(l_1467, p_12)) <= ((*l_1513) ^= (*p_1741->g_7)))) ^ p_12)) <= l_1532) < l_1512) && l_1533), l_1501)), p_12))) > 4294967289UL) == 0x3846L) ^ l_1459)), l_1534)) == p_12) & (**p_1741->g_1511)) != p_12))) == p_12)))), p_12)) != p_12) & 0x40L), p_12)))
                    { /* block id: 752 */
                        int32_t *l_1536[9][7][4] = {{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}},{{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657},{&l_1534,&l_1317,&l_1333[3],&p_1741->g_657}}};
                        int i, j, k;
                        l_1543--;
                        return (*p_1741->g_799);
                    }
                    else
                    { /* block id: 755 */
                        uint64_t l_1550 = 0UL;
                        uint64_t *l_1561 = &p_1741->g_1160;
                        uint64_t **l_1563 = &l_1562;
                        uint32_t *l_1566 = &p_1741->g_636[2];
                        (*l_1513) &= (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((--l_1550), ((p_12 = ((1L >= ((~(safe_lshift_func_uint16_t_u_u(((p_12 && ((0xD5D63287L > ((*l_1566) ^= (!(safe_add_func_uint16_t_u_u(0xEAA4L, (safe_sub_func_uint32_t_u_u(((l_1493[1][4] | 65535UL) , ((*l_1488) = (safe_sub_func_uint8_t_u_u(((l_1561 != (p_12 , (l_1564 = ((*l_1563) = l_1562)))) & l_1565), 0x15L)))), p_1741->g_370[0]))))))) != 0x2982L)) == l_1493[2][4]), 2))) == l_1567)) , p_12)) && 4UL))), 7L));
                    }
                    l_1317 = (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(l_1578, (((&p_1741->g_395[1] == (void*)0) > (safe_rshift_func_int16_t_s_s(((p_12 < p_12) || l_1477), (p_11 != p_11)))) ^ (((safe_sub_func_uint32_t_u_u(1UL, 0x7C23D122L)) < 0x38L) > p_12)))), 7UL)), (***p_1741->g_1510))) , l_1538[2][0][1]) && p_12), p_12)), l_1471));
                }
                else
                { /* block id: 765 */
                    int32_t *l_1592 = &l_1501;
lbl_1591:
                    l_1467 = ((4294967287UL | (l_1501 > (l_1493[2][0] & (safe_mod_func_uint64_t_u_u((***p_1741->g_1510), 0x7DC5A33F69C729E1L))))) > (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(0UL, ((p_12 & ((safe_mul_func_int16_t_s_s((p_12 , (l_1538[5][0][3] , 7L)), l_1493[2][0])) || p_12)) | p_12))), 10)));
                    for (l_1567 = 0; (l_1567 <= 3); l_1567 += 1)
                    { /* block id: 769 */
                        l_1505 = ((*p_1741->g_7) = 7L);
                        if (p_12)
                            continue;
                        if (p_1741->g_618)
                            goto lbl_1591;
                    }
                    (****l_1330) = l_1592;
                }
                l_1307 = (0x323463A0L != ((((*l_1488) ^= (0x8B6B7C9EBC214BDEL != (((void*)0 == l_1593) , (safe_mod_func_uint8_t_u_u(p_12, (~(safe_add_func_uint64_t_u_u(0x5FC5E8F9E2751FBFL, 0L)))))))) < (safe_sub_func_uint8_t_u_u(((*p_1741->g_799) = 0x33L), ((l_1476 &= p_12) == p_12)))) && p_12));
                l_1333[3] = (*p_1741->g_7);
                return p_12;
            }
            l_1471 = l_1541[0];
        }
        p_11 = p_11;
        for (l_1539 = 0; (l_1539 <= 3); l_1539 += 1)
        { /* block id: 793 */
            int32_t l_1616 = 0x5687EE7AL;
            int32_t ***l_1624 = &p_1741->g_135;
            int32_t ****l_1625 = &l_1611;
            uint16_t *l_1632 = (void*)0;
            uint16_t *l_1633 = &p_1741->g_168[1];
            int32_t ******l_1634 = &l_1303;
            int32_t *l_1635[1][5];
            int64_t l_1640 = 1L;
            uint64_t ***l_1653 = &p_1741->g_1511;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1635[i][j] = (void*)0;
            }
            if ((l_1420 |= (((((*l_1304) ^= ((*p_1741->g_264) = ((*p_1741->g_799) == (safe_mul_func_int16_t_s_s(l_1616, ((*l_1633) = (((~(!(safe_mul_func_int16_t_s_s(p_12, (l_1619 , (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((((**l_1330) = l_1624) != ((*l_1625) = l_1624)) <= 0x5FL) | ((((safe_sub_func_uint8_t_u_u(0x8EL, (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((p_1741->g_618 ^ 4294967295UL) && p_12) < p_12), 0x5121L)), (*p_1741->g_799))))) , p_12) > p_12) , l_1483)), p_12)), 1))))))) | 0xC0BEL) , 0x5A54L))))))) < 1UL) , &p_1741->g_613) != l_1634)))
            { /* block id: 800 */
                (*p_1741->g_135) = p_11;
                (****l_1330) = p_11;
            }
            else
            { /* block id: 803 */
                return p_12;
            }
            (*p_1741->g_7) = p_12;
            (*p_1741->g_7) = ((safe_div_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((-10L), (l_1640 , ((p_12 > ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((p_12 & 3L) , p_12), (p_12 , (((*p_1741->g_612) != l_1303) && 0x132E0B657A75C0CEL)))) >= p_12) , p_12), p_12)) || p_12), p_12)) > p_12)) ^ p_12)))) == p_12), l_1460)) && 0x62D1L);
            l_1420 ^= (+((safe_sub_func_int8_t_s_s((~(((*p_1741->g_264) , (p_12 ^ ((+(safe_rshift_func_int8_t_s_s(((void*)0 == &l_1460), ((*l_1346) |= (-3L))))) < ((*l_1633) = (l_1653 == l_1653))))) ^ (safe_div_func_int32_t_s_s(((~((!(safe_add_func_uint16_t_u_u((((((safe_rshift_func_uint16_t_u_u(p_12, 3)) , p_12) && p_12) , p_12) >= 0x62L), p_12))) <= p_12)) == 0UL), p_12)))), p_12)) >= p_12));
            for (l_1532 = 0; (l_1532 <= 1); l_1532 += 1)
            { /* block id: 813 */
                int32_t l_1660 = 9L;
                int32_t l_1671 = (-3L);
                int i;
                l_1660 = p_1741->g_370[l_1532];
                for (p_1741->g_647 = 0; (p_1741->g_647 <= 3); p_1741->g_647 += 1)
                { /* block id: 817 */
                    int32_t l_1676 = (-9L);
                    int i, j, k;
                    l_1676 ^= (safe_rshift_func_uint8_t_u_s((p_1741->g_1384[(l_1532 + 2)][(l_1539 + 3)][l_1532] , ((**l_1610) = p_1741->g_104[l_1532])), (safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((!((*l_1605)--)), (-3L))), 12)), ((***l_1393) = (--(***l_1653))))), 0UL))));
                }
                for (p_1741->g_4 = 3; (p_1741->g_4 >= 0); p_1741->g_4 -= 1)
                { /* block id: 826 */
                    uint16_t ***l_1687 = &p_1741->g_146;
                    uint16_t ****l_1686 = &l_1687;
                    uint8_t **l_1693 = &p_1741->g_799;
                    uint32_t *l_1695 = &p_1741->g_708;
                    int i, j, k;
                    for (l_1344 = 0; (l_1344 <= 1); l_1344 += 1)
                    { /* block id: 829 */
                        int i, j, k;
                        return p_1741->g_1384[(l_1344 + 2)][(l_1539 + 2)][p_1741->g_4];
                    }
                    (*p_1741->g_7) = (l_1671 |= p_1741->g_1384[l_1532][p_1741->g_4][(l_1532 + 1)]);
                    l_1671 = (p_1741->g_708 , (safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((p_1741->g_1510 = &l_1394) == (((*l_1695) = ((*l_1612) &= ((*l_1605) = ((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u((((safe_add_func_int32_t_s_s((((*l_1686) = &p_1741->g_146) != (void*)0), ((*p_1741->g_264) ^ (safe_sub_func_int32_t_s_s(l_1690, (safe_sub_func_int8_t_s_s((p_1741->g_1384[l_1532][p_1741->g_4][(l_1532 + 1)] | (((l_1693 != l_1610) ^ p_1741->g_1694[3]) || l_1671)), p_12))))))) , 1L) , (*p_1741->g_799)))) != 0x47L), 0xF4L)) != (-2L))))) , l_1696[4])) > p_12), 1)) & p_12), l_1660)));
                    if ((*p_1741->g_1223))
                        break;
                }
            }
        }
    }
    (*l_1697) &= (*p_1741->g_7);
    for (l_1578 = 1; (l_1578 <= 4); l_1578 += 1)
    { /* block id: 848 */
        int32_t l_1723 = 0x7BE23913L;
        int32_t l_1726 = 0x5FDCC96CL;
        uint32_t l_1728 = 5UL;
        int32_t l_1734 = 0L;
        int i;
        if (p_1741->g_1405[l_1578])
            break;
        for (l_1302 = 0; (l_1302 <= 1); l_1302 += 1)
        { /* block id: 852 */
            int i;
            return p_1741->g_370[l_1302];
        }
        for (l_1420 = 0; (l_1420 <= 1); l_1420 += 1)
        { /* block id: 857 */
            uint32_t l_1701 = 1UL;
            int32_t l_1722 = 0x13CDF3C1L;
            int32_t l_1725 = (-4L);
            int32_t l_1727 = 0x2A4FEEFBL;
            int32_t *l_1731 = &l_1725;
            int32_t *l_1732 = &l_1317;
            int32_t *l_1733[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1733[i] = (void*)0;
            l_1698[1][5][1]--;
            for (l_1479 = 0; (l_1479 >= 0); l_1479 -= 1)
            { /* block id: 861 */
                int32_t *l_1702 = &l_1317;
                int32_t *l_1703 = &p_1741->g_8;
                int32_t *l_1704 = &p_1741->g_8;
                int32_t *l_1705 = (void*)0;
                int32_t *l_1706 = &p_1741->g_657;
                int32_t *l_1707 = &l_1317;
                int32_t *l_1708 = &l_1539;
                int32_t *l_1709 = &p_1741->g_657;
                int32_t l_1710[5];
                int32_t *l_1711 = &l_1317;
                int32_t *l_1712 = &l_1710[1];
                int32_t *l_1713 = &l_1317;
                int32_t *l_1714 = &p_1741->g_958;
                int32_t *l_1715 = &p_1741->g_958;
                int32_t *l_1716 = &l_1542;
                int32_t *l_1717 = (void*)0;
                int32_t *l_1718 = (void*)0;
                int32_t *l_1719 = (void*)0;
                int32_t *l_1720 = &p_1741->g_958;
                int32_t *l_1721[9][10][2] = {{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}},{{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0},{&l_1307,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1710[i] = (-3L);
                l_1701 = p_1741->g_370[l_1420];
                --l_1728;
            }
            ++l_1735;
        }
        for (p_1741->g_552 = 0; (p_1741->g_552 <= 1); p_1741->g_552 += 1)
        { /* block id: 869 */
            int32_t *l_1738 = &l_1420;
            (*p_1741->g_135) = l_1738;
        }
    }
    return (*l_1697);
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_6 p_1741->g_8 p_1741->g_4 p_1741->g_7 p_1741->g_105 p_1741->g_519 p_1741->g_520 p_1741->g_135 p_1741->g_136 p_1741->g_168 p_1741->g_320 p_1741->g_554 p_1741->g_552 p_1741->g_481 p_1741->g_247 p_1741->g_600 p_1741->g_607 p_1741->g_264 p_1741->g_612 p_1741->g_636 p_1741->g_657 p_1741->g_697 p_1741->g_708 p_1741->g_146 p_1741->g_147 p_1741->g_754 p_1741->g_779 p_1741->g_96 p_1741->g_543 p_1741->g_797 p_1741->g_799 p_1741->g_700 p_1741->g_848 p_1741->g_958 p_1741->g_104 p_1741->g_522 p_1741->g_370 p_1741->g_844 p_1741->g_798 p_1741->g_618 p_1741->g_1109 p_1741->g_1131 p_1741->g_613 p_1741->g_1223 p_1741->g_1231 p_1741->g_1292 p_1741->g_1160
 * writes: p_1741->g_8 p_1741->g_105 p_1741->g_96 p_1741->g_481 p_1741->g_607 p_1741->g_618 p_1741->g_370 p_1741->g_636 p_1741->g_647 p_1741->g_136 p_1741->g_657 p_1741->g_697 p_1741->g_708 p_1741->g_147 p_1741->g_522 p_1741->g_543 p_1741->g_554 p_1741->g_798 p_1741->g_844 p_1741->g_848 p_1741->g_104 p_1741->g_700 p_1741->g_552 p_1741->g_135 p_1741->g_320 p_1741->g_247 p_1741->g_6 p_1741->g_4 p_1741->g_754 p_1741->g_1109 p_1741->g_1131 p_1741->g_179 p_1741->g_1231 p_1741->g_1160 p_1741->g_1292
 */
int32_t * func_14(uint32_t  p_15, struct S0 * p_1741)
{ /* block id: 8 */
    uint16_t *l_24 = &p_1741->g_6;
    int32_t l_34 = 0x22C92085L;
    uint32_t l_1240 = 0UL;
    int32_t *l_1243 = &p_1741->g_657;
    uint8_t l_1258 = 0x6DL;
    int8_t **l_1272[7];
    int8_t ***l_1273 = (void*)0;
    int8_t ***l_1274 = (void*)0;
    int8_t ***l_1275[3][1][4] = {{{(void*)0,&l_1272[0],(void*)0,(void*)0}},{{(void*)0,&l_1272[0],(void*)0,(void*)0}},{{(void*)0,&l_1272[0],(void*)0,(void*)0}}};
    int32_t l_1280 = 0x683C8479L;
    int32_t **l_1285[9] = {&p_1741->g_554[5],&p_1741->g_554[5],&p_1741->g_554[5],&p_1741->g_554[5],&p_1741->g_554[5],&p_1741->g_554[5],&p_1741->g_554[5],&p_1741->g_554[5],&p_1741->g_554[5]};
    int32_t l_1288 = 0x784F0AE7L;
    uint32_t *l_1289 = &p_1741->g_636[3];
    uint64_t *l_1290 = (void*)0;
    uint64_t *l_1291 = &p_1741->g_1160;
    int32_t *l_1296 = (void*)0;
    int32_t *l_1297 = (void*)0;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1272[i] = (void*)0;
    if (((safe_sub_func_int8_t_s_s(p_15, (safe_mod_func_uint16_t_u_u(func_20(l_24, ((*p_1741->g_799) = (safe_add_func_uint32_t_u_u(func_27(func_29((l_34 >= (safe_rshift_func_int16_t_s_s(((void*)0 != &l_34), ((void*)0 != &l_34)))), p_15, (safe_add_func_uint64_t_u_u(p_15, p_15)), p_1741->g_6, p_1741), p_1741), l_34))), p_15, p_1741), 0x40EBL)))) || p_1741->g_636[2]))
    { /* block id: 599 */
        int16_t l_1241 = 0x6C03L;
        int32_t *l_1242 = &l_34;
        l_1241 = l_1240;
        return l_1243;
    }
    else
    { /* block id: 602 */
        uint64_t l_1244[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int32_t *l_1245[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1245[i] = &p_1741->g_657;
lbl_1254:
        (*p_1741->g_135) = (l_1244[4] , l_1245[0]);
        for (p_1741->g_105 = 3; (p_1741->g_105 <= 8); p_1741->g_105 += 1)
        { /* block id: 606 */
            uint32_t l_1255 = 8UL;
            for (p_15 = 0; (p_15 <= 8); p_15 += 1)
            { /* block id: 609 */
                uint8_t l_1248 = 1UL;
                int i;
                (*p_1741->g_1223) = (safe_lshift_func_uint16_t_u_s(l_1248, (p_15 < (safe_rshift_func_int8_t_s_s(p_15, (0x376549C5L || (safe_unary_minus_func_uint64_t_u((safe_add_func_int32_t_s_s(p_15, (p_15 , ((*l_1243) = l_1248))))))))))));
                if (p_1741->g_543)
                    goto lbl_1254;
            }
            for (p_1741->g_522 = 0; (p_1741->g_522 <= 3); p_1741->g_522 += 1)
            { /* block id: 616 */
                l_1255--;
            }
        }
        l_1258++;
        l_34 ^= (((*l_1243) = (safe_lshift_func_uint8_t_u_u((((-1L) && 0x2122B2200EB852A5L) && ((safe_mod_func_int8_t_s_s(0x6CL, (((safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((p_15 , l_1245[2]) == l_1245[2]), (*l_1243))) ^ p_15), p_15)) , p_1741->g_370[1]) ^ 1L))) <= (*l_1243))), p_15))) >= p_15);
    }
    (*l_1243) = (((p_1741->g_1131 = l_1272[0]) != (((p_1741->g_1292 |= ((*l_1291) = ((((*l_1289) = (safe_div_func_int16_t_s_s(((((*l_1243) == ((*l_24) = (safe_lshift_func_uint16_t_u_u(l_1280, (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((l_1285[0] = &l_1243) != (void*)0), (*l_1243))), (((((((safe_mul_func_int16_t_s_s(((void*)0 == &p_1741->g_491), ((1L > p_15) <= p_15))) == (*l_1243)) ^ p_15) >= p_15) != (*l_1243)) ^ l_1288) > (-3L)))))))) , 0x27BCCE54L) || p_15), p_15))) || (*l_1243)) > p_15))) , 0x5E50L) , (void*)0)) > (*l_1243));
    for (p_1741->g_1160 = 29; (p_1741->g_1160 < 57); p_1741->g_1160 = safe_add_func_int32_t_s_s(p_1741->g_1160, 3))
    { /* block id: 635 */
        int32_t *l_1295[1][7] = {{&l_34,&p_1741->g_657,&l_34,&l_34,&p_1741->g_657,&l_34,&l_34}};
        int i, j;
        return l_1296;
    }
    return l_1297;
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_135 p_1741->g_6
 * writes: p_1741->g_136
 */
uint16_t  func_20(uint16_t * p_21, uint8_t  p_22, uint8_t  p_23, struct S0 * p_1741)
{ /* block id: 596 */
    int32_t *l_1239 = &p_1741->g_958;
    (*p_1741->g_135) = l_1239;
    return (*p_21);
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_543 p_1741->g_1223 p_1741->g_697 p_1741->g_481 p_1741->g_754 p_1741->g_1231 p_1741->g_958 p_1741->g_799 p_1741->g_657 p_1741->g_522
 * writes: p_1741->g_543 p_1741->g_697 p_1741->g_179 p_1741->g_636 p_1741->g_481 p_1741->g_1231 p_1741->g_700
 */
uint32_t  func_27(uint16_t * p_28, struct S0 * p_1741)
{ /* block id: 574 */
    uint64_t l_1222 = 0xEBCF797A0D5CA09CL;
    int32_t l_1224 = 0x07F7DC85L;
    int32_t *l_1226 = &p_1741->g_657;
    int32_t *l_1227 = &l_1224;
    int32_t *l_1228 = (void*)0;
    int32_t *l_1229 = &p_1741->g_958;
    int32_t *l_1230[3][5][4] = {{{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958}},{{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958}},{{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958},{&p_1741->g_958,&p_1741->g_657,(void*)0,&p_1741->g_958}}};
    uint64_t l_1238[2][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_1238[i][j] = 1UL;
    }
    for (p_1741->g_543 = 20; (p_1741->g_543 != (-5)); --p_1741->g_543)
    { /* block id: 577 */
        uint32_t l_1221 = 0xAE932F89L;
        l_1222 &= l_1221;
        (*p_1741->g_1223) &= l_1222;
        if (l_1224)
        { /* block id: 580 */
            for (p_1741->g_179 = 0; p_1741->g_179 < 10; p_1741->g_179 += 1)
            {
                p_1741->g_636[p_1741->g_179] = 0xE9C61E85L;
            }
        }
        else
        { /* block id: 582 */
            uint16_t l_1225[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1225[i] = 65535UL;
            for (p_1741->g_481 = 1; (p_1741->g_481 <= 4); p_1741->g_481 += 1)
            { /* block id: 585 */
                return p_1741->g_754;
            }
            if (l_1225[2])
                continue;
        }
    }
    ++p_1741->g_1231[5];
    l_1238[0][1] |= (safe_lshift_func_int16_t_s_s((((*p_1741->g_799) = (*l_1229)) ^ (safe_rshift_func_int16_t_s_u((*l_1226), (*l_1226)))), 8));
    return p_1741->g_522;
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_6 p_1741->g_8 p_1741->g_4 p_1741->g_7 p_1741->g_105 p_1741->g_519 p_1741->g_520 p_1741->g_135 p_1741->g_136 p_1741->g_168 p_1741->g_320 p_1741->g_554 p_1741->g_552 p_1741->g_481 p_1741->g_247 p_1741->g_600 p_1741->g_607 p_1741->g_264 p_1741->g_612 p_1741->g_636 p_1741->g_657 p_1741->g_697 p_1741->g_708 p_1741->g_146 p_1741->g_147 p_1741->g_754 p_1741->g_779 p_1741->g_96 p_1741->g_543 p_1741->g_797 p_1741->g_799 p_1741->g_700 p_1741->g_848 p_1741->g_958 p_1741->g_104 p_1741->g_522 p_1741->g_370 p_1741->g_844 p_1741->g_798 p_1741->g_618 p_1741->g_1109 p_1741->g_1131 p_1741->g_613
 * writes: p_1741->g_8 p_1741->g_105 p_1741->g_96 p_1741->g_481 p_1741->g_607 p_1741->g_618 p_1741->g_370 p_1741->g_636 p_1741->g_647 p_1741->g_136 p_1741->g_657 p_1741->g_697 p_1741->g_708 p_1741->g_147 p_1741->g_522 p_1741->g_543 p_1741->g_554 p_1741->g_798 p_1741->g_844 p_1741->g_848 p_1741->g_104 p_1741->g_700 p_1741->g_552 p_1741->g_135 p_1741->g_320 p_1741->g_247 p_1741->g_6 p_1741->g_4 p_1741->g_754 p_1741->g_1109 p_1741->g_1131
 */
uint16_t * func_29(int32_t  p_30, int64_t  p_31, uint16_t  p_32, uint16_t  p_33, struct S0 * p_1741)
{ /* block id: 9 */
    int16_t *l_49 = (void*)0;
    int32_t *l_696 = &p_1741->g_697;
    uint8_t *l_699[8][7] = {{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]},{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]},{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]},{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]},{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]},{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]},{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]},{&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],&p_1741->g_700[0],(void*)0,&p_1741->g_700[0],&p_1741->g_700[0]}};
    uint32_t *l_707 = &p_1741->g_708;
    uint16_t **l_727 = (void*)0;
    int32_t ***l_827 = &p_1741->g_135;
    int32_t l_832 = 0L;
    uint8_t l_880[6] = {247UL,0x71L,247UL,247UL,0x71L,247UL};
    uint64_t l_883 = 1UL;
    uint32_t l_930 = 0UL;
    int8_t l_982[6];
    uint64_t l_993 = 3UL;
    int16_t l_1016[3];
    int32_t l_1021 = 0x5A448700L;
    int32_t l_1022 = 0x321B3252L;
    int32_t l_1024 = 4L;
    int32_t l_1061 = 0x476985C8L;
    int16_t l_1085[4][10] = {{0x4944L,0x58DDL,(-9L),0x66BDL,(-9L),0x58DDL,0x4944L,(-1L),0x3F06L,0x2E70L},{0x4944L,0x58DDL,(-9L),0x66BDL,(-9L),0x58DDL,0x4944L,(-1L),0x3F06L,0x2E70L},{0x4944L,0x58DDL,(-9L),0x66BDL,(-9L),0x58DDL,0x4944L,(-1L),0x3F06L,0x2E70L},{0x4944L,0x58DDL,(-9L),0x66BDL,(-9L),0x58DDL,0x4944L,(-1L),0x3F06L,0x2E70L}};
    int64_t l_1086[8] = {0x6BF6B3F09CB4CACEL,0x6BF6B3F09CB4CACEL,0x6BF6B3F09CB4CACEL,0x6BF6B3F09CB4CACEL,0x6BF6B3F09CB4CACEL,0x6BF6B3F09CB4CACEL,0x6BF6B3F09CB4CACEL,0x6BF6B3F09CB4CACEL};
    int32_t l_1087[6] = {0x56AEBA0BL,0x56AEBA0BL,0x56AEBA0BL,0x56AEBA0BL,0x56AEBA0BL,0x56AEBA0BL};
    uint64_t **l_1093[4][3] = {{(void*)0,&p_1741->g_438[3],&p_1741->g_438[3]},{(void*)0,&p_1741->g_438[3],&p_1741->g_438[3]},{(void*)0,&p_1741->g_438[3],&p_1741->g_438[3]},{(void*)0,&p_1741->g_438[3],&p_1741->g_438[3]}};
    int32_t *l_1094 = &l_1022;
    int32_t *l_1095 = &l_832;
    int32_t *l_1096 = (void*)0;
    int32_t *l_1097 = &l_1061;
    int32_t *l_1098 = &l_1087[3];
    int32_t *l_1099 = &p_1741->g_657;
    int32_t *l_1100 = &l_1087[2];
    int32_t *l_1101 = &l_1061;
    int32_t *l_1102 = &p_1741->g_657;
    int32_t *l_1103 = &l_1024;
    int32_t *l_1104 = &l_1087[4];
    int32_t *l_1105[10] = {&l_832,(void*)0,&l_832,&l_832,(void*)0,&l_832,&l_832,(void*)0,&l_832,&l_832};
    int16_t l_1106[8][1][8] = {{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}},{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}},{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}},{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}},{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}},{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}},{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}},{{0L,0x2F85L,0x2F85L,0L,0x5B49L,0L,0L,0x5B49L}}};
    int8_t l_1107 = 0x39L;
    int32_t ****l_1118 = &p_1741->g_520[1];
    uint8_t ***l_1122[1];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_982[i] = 0x0CL;
    for (i = 0; i < 3; i++)
        l_1016[i] = 1L;
    for (i = 0; i < 1; i++)
        l_1122[i] = &p_1741->g_798;
    if ((((safe_rshift_func_int8_t_s_u(p_1741->g_6, ((*l_696) = (safe_sub_func_uint16_t_u_u(func_43(func_47(l_49, p_1741), (p_1741->g_6 , l_696), (*l_696), p_1741), p_32))))) | ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((++(*l_707)), ((((p_33 || 0x1206L) , (-7L)) <= p_33) && p_30))), 0L)), p_33)) >= 0x7D6FL)) & p_1741->g_320))
    { /* block id: 287 */
        uint16_t *l_718 = &p_1741->g_6;
        uint16_t **l_717 = &l_718;
        uint32_t l_730 = 4294967291UL;
        int32_t l_737[10] = {0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL,0x6CEC52AEL};
        int32_t l_776 = 0x66B94A33L;
        uint32_t l_795[2][5][7] = {{{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL}},{{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL},{0x43FA188AL,6UL,5UL,0UL,0x16DF1678L,0x194DE8FCL,0x194DE8FCL}}};
        int32_t ***l_826[6][4] = {{&p_1741->g_135,&p_1741->g_135,&p_1741->g_135,&p_1741->g_135},{&p_1741->g_135,&p_1741->g_135,&p_1741->g_135,&p_1741->g_135},{&p_1741->g_135,&p_1741->g_135,&p_1741->g_135,&p_1741->g_135},{&p_1741->g_135,&p_1741->g_135,&p_1741->g_135,&p_1741->g_135},{&p_1741->g_135,&p_1741->g_135,&p_1741->g_135,&p_1741->g_135},{&p_1741->g_135,&p_1741->g_135,&p_1741->g_135,&p_1741->g_135}};
        int64_t *l_864 = &p_1741->g_848;
        uint64_t *l_868[3];
        uint32_t l_873[9][5][2] = {{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}},{{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL},{6UL,4294967295UL}}};
        int8_t *l_878 = (void*)0;
        int8_t *l_879 = &p_1741->g_104[0];
        uint32_t l_897[10][5] = {{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL},{0UL,0UL,0xBFE36988L,0xC0ECB60DL,1UL}};
        uint32_t l_898 = 0x3914A528L;
        int16_t l_899 = 1L;
        int16_t *l_909 = (void*)0;
        int16_t *l_910 = &l_899;
        uint32_t l_932 = 4294967288UL;
        int32_t l_1017 = 0x65AC0BF2L;
        uint8_t l_1088 = 0xADL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_868[i] = (void*)0;
lbl_994:
        if (((safe_mul_func_int16_t_s_s((1L == (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((*l_696), (((((*p_1741->g_146) = (*p_1741->g_146)) == ((*l_717) = &p_33)) >= 0x2297AB53L) == ((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_33, (!((safe_sub_func_int8_t_s_s(0x4CL, ((safe_div_func_uint32_t_u_u(((*l_707) = (l_727 != ((((safe_lshift_func_int8_t_s_s(((((void*)0 != &p_1741->g_491) || (*l_696)) && p_30), (*l_696))) , l_696) != l_707) , (void*)0))), p_33)) <= (*l_696)))) > p_33)))) <= l_730), 0x8FA399D9L)) ^ p_30)))), p_33))), p_1741->g_636[5])) != (*l_696)))
        { /* block id: 291 */
            int32_t *l_759 = &p_1741->g_8;
            int16_t *l_778 = &p_1741->g_370[1];
            uint8_t **l_804[5];
            int i;
            for (i = 0; i < 5; i++)
                l_804[i] = &l_699[4][2];
            for (p_1741->g_522 = 0; (p_1741->g_522 >= 52); p_1741->g_522 = safe_add_func_uint32_t_u_u(p_1741->g_522, 4))
            { /* block id: 294 */
                int8_t *l_741 = &p_1741->g_647;
                int8_t **l_740 = &l_741;
                int32_t l_752 = (-1L);
                int64_t *l_753 = &p_1741->g_543;
                int32_t l_773 = 0x5F227EEDL;
                uint8_t l_775[5];
                int32_t *l_777 = (void*)0;
                int i;
                for (i = 0; i < 5; i++)
                    l_775[i] = 255UL;
                p_30 = (((-2L) ^ ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(p_32, (l_752 = (((**l_717) = ((l_737[8] , ((safe_mul_func_uint8_t_u_u((((l_699[4][2] != ((*l_740) = l_699[5][0])) , p_33) >= (p_32 == ((safe_div_func_int64_t_s_s(((*l_753) = ((0x805EEC0FL | (safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u((*l_696), l_752)) ^ (*l_696)) != (-1L)) , l_752), l_752)), 0xACL)), 3))) , p_1741->g_636[1])), p_1741->g_4)) <= 0x5F192665E2764FD9L))), 0x71L)) ^ (-1L))) | p_33)) || p_31)))), l_737[8])) , 0x5B09L)) , p_1741->g_754);
                (*l_696) |= (((void*)0 != l_718) , l_752);
                for (p_33 = (-18); (p_33 == 40); p_33 = safe_add_func_uint16_t_u_u(p_33, 1))
                { /* block id: 303 */
                    int64_t l_762 = 0x764CC34FBC5A000BL;
                    for (p_1741->g_481 = (-15); (p_1741->g_481 >= 13); p_1741->g_481 = safe_add_func_uint32_t_u_u(p_1741->g_481, 8))
                    { /* block id: 306 */
                        uint16_t l_774 = 0x8056L;
                        (*p_1741->g_135) = l_759;
                        l_776 |= ((safe_mod_func_uint8_t_u_u((l_762 >= ((l_752 || ((void*)0 == &p_1741->g_395[1])) & (p_32 != ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((0UL < ((*l_707) &= (((((((safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u((p_31 > 0x733F2C99L), ((l_773 = ((((*p_1741->g_264) > (-2L)) , 65532UL) < l_737[3])) | l_774))) , &p_1741->g_613) == (void*)0), l_752)) && p_33) & (*l_759)), l_774)) , l_752) > (*l_696)) == l_774) , p_31) >= p_30) | 0x1D3659A5L))) && 0x4A87E096L), (*l_696))), 0x1BF3L)) , p_31)))), l_737[1])) , l_775[3]);
                        l_777 = &p_30;
                        (*l_696) = 0x6162326FL;
                    }
                    (*p_1741->g_779) = ((***p_1741->g_519) = &p_30);
                    return (*p_1741->g_146);
                }
            }
            l_776 |= p_31;
            for (p_1741->g_8 = 0; (p_1741->g_8 >= (-9)); --p_1741->g_8)
            { /* block id: 322 */
                (*l_696) |= 0x0907A011L;
                (*p_1741->g_135) = &p_30;
                if (p_31)
                    continue;
            }
            if (((void*)0 == &p_1741->g_146))
            { /* block id: 327 */
                uint8_t l_788 = 247UL;
                uint32_t *l_791 = &p_1741->g_153;
                int64_t *l_794 = &p_1741->g_543;
                int32_t *l_796 = &l_776;
                uint8_t ***l_803[4][4][7] = {{{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0}},{{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0}},{{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0}},{{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0},{(void*)0,&p_1741->g_798,(void*)0,(void*)0,&p_1741->g_798,(void*)0,(void*)0}}};
                int32_t l_845 = 0x58678E31L;
                int64_t *l_846 = (void*)0;
                int64_t *l_847 = &p_1741->g_848;
                int8_t *l_849[8][7][4] = {{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}},{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}},{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}},{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}},{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}},{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}},{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}},{{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754},{(void*)0,&p_1741->g_247,&p_1741->g_647,&p_1741->g_754}}};
                int32_t l_850 = 5L;
                int i, j, k;
                (*l_796) |= ((safe_sub_func_uint64_t_u_u((((safe_add_func_uint32_t_u_u(p_1741->g_96, (**p_1741->g_779))) , (safe_sub_func_int8_t_s_s((l_788 ^ (((safe_sub_func_int16_t_s_s(((l_791 != (((**p_1741->g_779) == (((((p_1741->g_168[1] == ((safe_sub_func_uint64_t_u_u(((*p_1741->g_264) = (((*l_794) &= ((!p_30) < ((l_788 ^ (p_33 != 0x7086L)) ^ 0xC2L))) <= p_33)), (*l_696))) >= p_33)) || (*p_1741->g_264)) ^ l_795[0][2][4]) == 0x2DL) != p_1741->g_697)) , (void*)0)) | 1UL), p_32)) , (*l_696)) || p_31)), p_31))) , 18446744073709551615UL), 0x376AB42E6AE33729L)) | 0x1518E903L);
                for (l_788 = 0; (l_788 <= 1); l_788 += 1)
                { /* block id: 333 */
                    int16_t *l_800[5] = {&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4,&p_1741->g_4};
                    int i;
                    (*l_759) = l_737[(l_788 + 6)];
                    if (p_30)
                        continue;
                    (*p_1741->g_797) = &l_699[4][2];
                    p_30 &= (l_718 == l_800[2]);
                }
                (*l_696) = (safe_sub_func_uint64_t_u_u(0UL, (((l_804[2] = &l_699[3][3]) != (void*)0) & (safe_unary_minus_func_uint16_t_u(((*l_718)++))))));
                l_850 = ((safe_unary_minus_func_uint64_t_u((safe_sub_func_int64_t_s_s((p_32 , p_31), (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((((*l_696) ^= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_int64_t_s_s(((*l_847) = ((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u((l_795[0][2][4] , (*p_1741->g_799)), (l_826[5][3] == l_827))), ((l_845 = (((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(l_832, 2)) , p_30), (safe_unary_minus_func_uint32_t_u(((safe_sub_func_int64_t_s_s(((*l_759) = (p_1741->g_844[0] = ((*l_794) = (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((*l_796) = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((*l_759) | p_32), p_31)), 1))), 0L)), (*p_1741->g_799)))))), p_32)) || 246UL))))) | p_32) > 0x628F746698E2A120L)) ^ p_1741->g_552))) >= p_30)), 0x664F45FA209D3A90L)))), 1)) , 0x0BL), p_33))) >= p_33) >= p_31) , 4294967286UL) != 0x7BEB3705L), p_32)) , p_33), p_32)))))) & 0UL);
            }
            else
            { /* block id: 350 */
                uint16_t l_851 = 0xB485L;
                (*l_759) = ((0x8A1E6D019FE60FECL || p_30) , (+l_851));
            }
        }
        else
        { /* block id: 353 */
            int64_t *l_865[8][3][4] = {{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}},{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}},{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}},{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}},{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}},{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}},{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}},{{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848},{(void*)0,&p_1741->g_848,&p_1741->g_543,&p_1741->g_848}}};
            int32_t l_869 = (-1L);
            int32_t *l_870 = (void*)0;
            int i, j, k;
            l_870 = &p_30;
        }
        if ((((*l_864) |= p_31) && ((-4L) & (((*p_1741->g_799) &= ((safe_mod_func_uint64_t_u_u(((p_33 == p_31) < (((p_32 >= (((--l_873[3][4][0]) == ((p_31 != (safe_sub_func_int8_t_s_s(((*l_879) = (*l_696)), l_880[0]))) == (((((((safe_mod_func_int8_t_s_s(7L, 1L)) || p_32) && (-1L)) <= (-10L)) & 3L) ^ (*l_696)) , p_31))) , 0x144DFF78CDBAF12AL)) == p_1741->g_4) || p_1741->g_657)), p_30)) > (*l_696))) > (*l_696)))))
        { /* block id: 362 */
            uint32_t l_884 = 0xA4EC9AB1L;
            uint16_t l_900[4];
            int16_t *l_906 = &l_899;
            uint64_t l_923 = 0x2742219DFC8B7846L;
            int32_t l_931 = 0x153C77C0L;
            int i;
            for (i = 0; i < 4; i++)
                l_900[i] = 0UL;
            (*l_696) &= l_883;
            if (((&p_1741->g_104[0] == &p_1741->g_104[0]) | ((((0UL <= (++l_884)) , (safe_add_func_int32_t_s_s(((*l_696) = ((safe_div_func_uint8_t_u_u(9UL, ((*l_879) = (0xA2L || ((((*l_707) |= (safe_add_func_int16_t_s_s((((((safe_add_func_uint8_t_u_u(((0L < (safe_div_func_uint64_t_u_u(((void*)0 != l_699[0][5]), (*p_1741->g_264)))) != p_1741->g_4), p_31)) ^ p_30) , l_897[6][3]) , p_1741->g_636[1]) , l_898), 65535UL))) > p_33) <= p_31))))) != l_899)), p_1741->g_247))) , 65528UL) < l_900[1])))
            { /* block id: 368 */
                int8_t l_903 = 0x65L;
                int16_t **l_907 = (void*)0;
                int16_t **l_908[4][4] = {{&l_49,&p_1741->g_395[0],&l_49,&l_49},{&l_49,&p_1741->g_395[0],&l_49,&l_49},{&l_49,&p_1741->g_395[0],&l_49,&l_49},{&l_49,&p_1741->g_395[0],&l_49,&l_49}};
                int32_t l_937 = (-1L);
                int32_t l_938 = (-1L);
                int32_t l_939[9][3] = {{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)},{(-2L),0x0F61600CL,(-2L)}};
                int8_t l_940[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j;
                (*l_696) &= (safe_mul_func_uint16_t_u_u(l_903, 0xEFD3L));
                (*l_696) ^= ((safe_add_func_uint32_t_u_u((&p_1741->g_4 != (l_910 = (l_909 = l_906))), (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((+((safe_sub_func_int64_t_s_s(((p_32 & (p_1741->g_168[0] <= (0x609CEA0AL & p_1741->g_754))) & ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_923, ((safe_mul_func_uint16_t_u_u(((**l_717)--), p_32)) && (safe_div_func_int64_t_s_s(p_33, p_30))))), 4)) & l_930)), 0x3DC4FCE25163DBAEL)) ^ p_31)), 0x01D4L)), p_30)))) , (-1L));
                l_932--;
                for (p_30 = 0; (p_30 == (-20)); --p_30)
                { /* block id: 377 */
                    int32_t l_941 = 0L;
                    int32_t l_942 = (-9L);
                    uint64_t l_943 = 0xC9E57368E3E37EA7L;
                    l_943--;
                    for (p_1741->g_552 = 0; (p_1741->g_552 < 56); p_1741->g_552++)
                    { /* block id: 381 */
                        uint16_t *l_948 = (void*)0;
                        (**l_827) = (*p_1741->g_779);
                        return l_948;
                    }
                    if (l_943)
                        break;
                }
            }
            else
            { /* block id: 387 */
                int16_t l_955 = 0x1B26L;
                for (p_1741->g_481 = 0; (p_1741->g_481 <= 9); p_1741->g_481 += 1)
                { /* block id: 390 */
                    int64_t l_961 = 0x1D7EE1BA0CAF03E7L;
                    for (l_930 = 2; (l_930 <= 9); l_930 += 1)
                    { /* block id: 393 */
                        p_30 ^= ((*l_696) = (**p_1741->g_779));
                        p_30 = (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((p_31 | ((safe_rshift_func_uint16_t_u_s(l_955, 12)) ^ p_1741->g_607)) , ((((p_33 > p_32) || p_1741->g_958) == (((*p_1741->g_799) = ((safe_add_func_int16_t_s_s(8L, (((*l_707) = ((((*l_827) = (*l_827)) != (void*)0) != 18446744073709551615UL)) < 1UL))) == 0x49L)) > (-1L))) > p_30)), 4)), p_33)) >= 0UL) , l_961);
                    }
                    for (l_884 = 0; (l_884 <= 1); l_884 += 1)
                    { /* block id: 403 */
                        int i;
                        if (p_1741->g_104[l_884])
                            break;
                        return (*p_1741->g_146);
                    }
                }
                (*p_1741->g_135) = (void*)0;
            }
        }
        else
        { /* block id: 410 */
            int64_t l_992 = 0x7C4020113B36301FL;
            int32_t **l_1001 = (void*)0;
            int16_t l_1018 = 0x7A9AL;
            int32_t l_1020 = 0L;
            int32_t l_1023 = 0x307D2F2AL;
lbl_1034:
            if ((*p_1741->g_7))
            { /* block id: 411 */
                uint32_t l_968 = 0xF830810EL;
                uint64_t *l_969 = (void*)0;
                uint16_t l_988 = 0xAA4BL;
                int32_t l_991 = 1L;
                int32_t **l_1000 = &p_1741->g_554[8];
                if (((((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(l_968, (((p_32 && ((l_969 != &l_883) < ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((*p_1741->g_264) = (((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((*l_910) = ((0x9303L && ((((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((p_1741->g_320 = l_982[2]) , (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u(l_988, (((safe_rshift_func_uint8_t_u_u(1UL, (l_991 &= (*p_1741->g_799)))) , p_1741->g_636[8]) , l_991))))) || 0x5D7FL), 255UL))), l_992)) , 0L), p_31)) > 2L) > p_30) < l_992)) == l_988)), l_993)) > l_968), 0x3960L)) == 65532UL) || p_31)), 0x7B2949B4DAC16EE1L)), 4)) <= p_32))) , 255UL) ^ (*l_696)))) && p_33) & (-1L)), (-6L))), 0xB233L)) ^ p_1741->g_6) , p_32) <= p_30))
                { /* block id: 416 */
lbl_1019:
                    if (p_33)
                        goto lbl_994;
                }
                else
                { /* block id: 418 */
                    return (*p_1741->g_146);
                }
                for (p_1741->g_247 = 0; (p_1741->g_247 <= 1); p_1741->g_247 += 1)
                { /* block id: 423 */
                    for (p_1741->g_607 = 0; (p_1741->g_607 <= 1); p_1741->g_607 += 1)
                    { /* block id: 426 */
                        (**l_827) = &p_30;
                    }
                    for (p_1741->g_6 = 0; (p_1741->g_6 <= 1); p_1741->g_6 += 1)
                    { /* block id: 431 */
                        int i;
                        (**l_1000) &= (((safe_add_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((*l_879) = (safe_mul_func_int8_t_s_s((l_1000 == l_1001), p_1741->g_168[p_1741->g_247]))) <= (((safe_mul_func_uint16_t_u_u(3UL, (((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s(((safe_add_func_int32_t_s_s((p_1741->g_168[p_1741->g_247] , 1L), (safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s((&l_910 == &p_1741->g_395[1]), (safe_sub_func_int32_t_s_s((-1L), p_1741->g_168[p_1741->g_247])))) >= (*l_696)), 0x68L)))) <= p_1741->g_168[p_1741->g_247]), l_1016[1])), l_1017)) && 0UL) > p_1741->g_168[p_1741->g_247]))) && p_1741->g_754) != p_33)))), p_33)) || 0x4578A0F5L) | p_32);
                    }
                    l_1018 = (**l_1000);
                }
                if (p_1741->g_96)
                    goto lbl_1019;
                (*l_696) = p_30;
            }
            else
            { /* block id: 439 */
                uint32_t l_1025 = 0x7575CA6DL;
                (*l_696) &= (p_1741->g_6 && (!(-5L)));
                ++l_1025;
            }
            for (l_1021 = 0; (l_1021 >= 12); l_1021 = safe_add_func_uint64_t_u_u(l_1021, 4))
            { /* block id: 445 */
                (*l_696) &= (((p_32 && p_31) , &p_1741->g_104[1]) == (void*)0);
            }
            for (p_1741->g_708 = 29; (p_1741->g_708 != 11); --p_1741->g_708)
            { /* block id: 450 */
                uint64_t **l_1037[5];
                uint32_t *l_1049 = &p_1741->g_153;
                int32_t l_1051[10][7] = {{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L},{0x71F7C665L,0x71F7C665L,6L,0x72CFBE13L,(-10L),0x72CFBE13L,6L}};
                int32_t l_1063[1];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1037[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_1063[i] = 1L;
                if (l_1023)
                    break;
                for (l_930 = 0; (l_930 >= 57); l_930 = safe_add_func_uint64_t_u_u(l_930, 4))
                { /* block id: 454 */
                    uint64_t **l_1038 = &l_868[1];
                    int32_t l_1043 = 0x34F46602L;
                    if (p_1741->g_607)
                        goto lbl_1034;
                    for (p_1741->g_4 = 28; (p_1741->g_4 > 20); p_1741->g_4 = safe_sub_func_int64_t_s_s(p_1741->g_4, 8))
                    { /* block id: 458 */
                        uint64_t ***l_1039 = &l_1038;
                        int32_t l_1042 = 0L;
                        l_1043 &= ((((l_1037[4] != ((*l_1039) = l_1038)) == p_32) , ((safe_div_func_uint8_t_u_u(((p_31 | p_33) == (((l_1042 > p_1741->g_522) , ((p_1741->g_370[0] < (((0x5812L < l_1042) >= p_30) && 4294967293UL)) && 65535UL)) & (*p_1741->g_264))), p_33)) == p_1741->g_754)) & p_30);
                        if ((*l_696))
                            break;
                        return (*p_1741->g_146);
                    }
                }
                (**l_827) = &p_30;
                for (p_32 = 0; (p_32 <= 16); ++p_32)
                { /* block id: 468 */
                    uint32_t *l_1048 = &p_1741->g_153;
                    uint16_t *l_1050 = &p_1741->g_618;
                    int16_t l_1056[10] = {(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L)};
                    int32_t l_1062 = (-1L);
                    uint8_t *l_1072 = &l_880[0];
                    int32_t *l_1073 = &l_776;
                    int8_t *l_1079 = (void*)0;
                    int8_t l_1084 = 3L;
                    int i;
                    if ((((((((l_1023 ^ (-1L)) & (safe_sub_func_uint16_t_u_u((l_1051[7][6] = ((*l_1050) = ((**l_717) |= ((!0x7CL) != (l_1048 != l_1049))))), (+(0xC958L < (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_1056[7] = 0xCF61L), 4)), (safe_sub_func_int8_t_s_s(((*l_879) = (((+(safe_sub_func_int8_t_s_s(((l_1061 < (p_1741->g_481 > p_1741->g_6)) ^ l_1062), 253UL))) & 0x7AD0775FL) > l_1063[0])), 0UL))))))))) <= 251UL) == (-1L)) , 0x5399L) >= 1UL) , (**p_1741->g_779)))
                    { /* block id: 474 */
                        uint64_t **l_1068[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1068[i] = &p_1741->g_438[3];
                        (*l_696) = (0x15C3L & ((p_30 > p_33) <= ((safe_mul_func_uint16_t_u_u((((*l_910) = (safe_rshift_func_int16_t_s_u(((((void*)0 != l_1068[0]) > (p_32 != (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((l_1072 == l_879) > (-1L)))), 1UL)))) != l_1051[7][6]), l_1056[7]))) ^ p_30), 0L)) >= p_1741->g_844[2])));
                    }
                    else
                    { /* block id: 477 */
                        l_1073 = &p_30;
                    }
                    l_1062 ^= (*l_1073);
                    for (p_1741->g_754 = 0; (p_1741->g_754 <= 4); p_1741->g_754 += 1)
                    { /* block id: 483 */
                        int16_t *l_1074 = (void*)0;
                        int32_t l_1080 = 0x7C6BB1E6L;
                        uint32_t *l_1081 = &p_1741->g_636[3];
                        (*p_1741->g_135) = &p_30;
                        (*l_696) = ((((0x5DL != ((*l_879) |= (safe_mul_func_int16_t_s_s(((void*)0 != (**p_1741->g_797)), 9L)))) == p_1741->g_168[1]) > (p_30 ^ ((*l_1072) |= ((*p_1741->g_799) ^= (p_33 <= ((*l_864) |= (*l_1073))))))) && (safe_div_func_int32_t_s_s((l_1079 != &p_1741->g_754), 0x48EF61C6L)));
                        if (l_1080)
                            continue;
                        l_1062 ^= ((((*l_1081) = 4294967291UL) & p_30) || ((((l_1080 && p_32) | ((-10L) ^ (safe_mul_func_uint16_t_u_u(0x8292L, ((*l_1050) |= l_1084))))) <= ((&l_993 == &l_883) && p_1741->g_105)) || (*p_1741->g_264)));
                    }
                }
            }
        }
        l_1088--;
    }
    else
    { /* block id: 499 */
        int32_t l_1091 = 6L;
        uint32_t l_1092 = 0x6775F8C1L;
        (**l_827) = ((**p_1741->g_798) , &p_30);
    }
    p_1741->g_1109++;
    if (p_32)
    { /* block id: 504 */
        uint64_t **l_1121 = &p_1741->g_438[4];
        uint8_t ***l_1123 = (void*)0;
        int32_t l_1124[10] = {0x67201CA8L,(-4L),0L,(-4L),0x67201CA8L,0x67201CA8L,(-4L),0L,(-4L),0x67201CA8L};
        int32_t l_1150 = 0L;
        int32_t **l_1151 = (void*)0;
        int32_t l_1153 = 0x6D4C726FL;
        int i;
        (*l_1103) ^= ((safe_sub_func_uint32_t_u_u(((*l_707) &= ((safe_mod_func_int32_t_s_s(((((253UL > ((!(&l_982[2] != (void*)0)) > (((void*)0 != l_1118) == ((((safe_lshift_func_uint16_t_u_u(((((l_1121 != ((+(l_1122[0] != l_1123)) , l_1093[1][0])) | l_1124[8]) , p_32) > (*l_1104)), l_1124[8])) , (void*)0) != (void*)0) , p_30)))) & p_1741->g_6) >= 0x6CAAL) ^ 3UL), p_30)) == p_32)), p_30)) ^ 0x9052A9D7D3458651L);
        for (p_1741->g_481 = 0; (p_1741->g_481 >= 55); p_1741->g_481 = safe_add_func_int32_t_s_s(p_1741->g_481, 6))
        { /* block id: 509 */
            int32_t *****l_1147 = &p_1741->g_519;
            uint64_t *l_1178 = (void*)0;
            int32_t l_1181[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint8_t ***l_1211 = &p_1741->g_798;
            int i;
            for (l_1021 = 0; (l_1021 == (-6)); --l_1021)
            { /* block id: 512 */
                int16_t l_1152[3][6][6] = {{{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L}},{{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L}},{{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L},{0x3158L,0L,0x3AF4L,0L,(-9L),9L}}};
                int i, j, k;
                for (p_1741->g_320 = 0; (p_1741->g_320 >= 6); p_1741->g_320 = safe_add_func_int32_t_s_s(p_1741->g_320, 1))
                { /* block id: 515 */
                    int8_t **l_1134 = &p_1741->g_1132[1][0];
                    int8_t ***l_1133 = &l_1134;
                    int8_t **l_1135[7][6][5] = {{{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]}},{{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]}},{{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]}},{{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]}},{{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]}},{{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]}},{{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]},{&p_1741->g_1132[0][2],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0],&p_1741->g_1132[1][0]}}};
                    int32_t l_1142 = (-1L);
                    int i, j, k;
                    (*l_1098) = 0x3E94C5B7L;
                    l_1152[1][1][0] |= ((((*l_1133) = (p_1741->g_1131 = p_1741->g_1131)) != l_1135[0][4][1]) && (((safe_lshift_func_int16_t_s_s(((((*p_1741->g_799) || (safe_lshift_func_uint8_t_u_u((l_1150 |= (l_1124[8] > ((safe_div_func_uint64_t_u_u(l_1142, (safe_sub_func_uint64_t_u_u(p_30, ((safe_add_func_int8_t_s_s((((*p_1741->g_612) == l_1147) != (safe_sub_func_uint32_t_u_u((p_30 || 0xE6L), (-1L)))), p_33)) || l_1124[8]))))) == p_30))), (*p_1741->g_799)))) , l_1151) == (**l_1118)), p_33)) < 0UL) , 251UL));
                }
            }
            if (l_1153)
                continue;
            for (p_1741->g_247 = 0; (p_1741->g_247 <= 5); p_1741->g_247 += 1)
            { /* block id: 526 */
                uint16_t l_1158[2][6] = {{0xD403L,0xF484L,0xD403L,0xD403L,0xF484L,0xD403L},{0xD403L,0xF484L,0xD403L,0xD403L,0xF484L,0xD403L}};
                uint64_t *l_1159[4][9][1] = {{{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160}},{{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160}},{{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160}},{{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160},{&p_1741->g_1160}}};
                int8_t l_1196[8];
                int32_t *l_1208 = &l_1087[p_1741->g_247];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_1196[i] = 0x14L;
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 570 */
        uint32_t l_1216 = 0xED6F3135L;
        l_1216++;
    }
    return l_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_135
 * writes: p_1741->g_136
 */
uint16_t  func_43(int32_t * p_44, int32_t * p_45, int8_t  p_46, struct S0 * p_1741)
{ /* block id: 282 */
    int8_t l_698[4];
    int i;
    for (i = 0; i < 4; i++)
        l_698[i] = 1L;
    (*p_1741->g_135) = p_44;
    return l_698[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_8 p_1741->g_4 p_1741->g_6 p_1741->g_7 p_1741->g_105 p_1741->g_519 p_1741->g_520 p_1741->g_135 p_1741->g_136 p_1741->g_168 p_1741->g_320 p_1741->g_554 p_1741->g_552 p_1741->g_481 p_1741->g_247 p_1741->g_600 p_1741->g_607 p_1741->g_264 p_1741->g_612 p_1741->g_636 p_1741->g_657
 * writes: p_1741->g_8 p_1741->g_105 p_1741->g_96 p_1741->g_481 p_1741->g_607 p_1741->g_618 p_1741->g_370 p_1741->g_636 p_1741->g_647 p_1741->g_136 p_1741->g_657
 */
int32_t * func_47(int16_t * p_48, struct S0 * p_1741)
{ /* block id: 10 */
    int32_t l_62[8][8] = {{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L},{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L},{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L},{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L},{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L},{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L},{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L},{0x1FD29CC0L,0L,0x02BC92CEL,0x1FD29CC0L,1L,0x02BC92CEL,0x02BC92CEL,1L}};
    int16_t *l_572 = (void*)0;
    int16_t *l_573 = &p_1741->g_370[1];
    int32_t *l_656 = &p_1741->g_657;
    int32_t l_658[6];
    int32_t *l_659 = &l_658[2];
    int32_t *l_660 = (void*)0;
    int32_t *l_661 = &p_1741->g_657;
    int32_t *l_662 = &p_1741->g_657;
    int32_t *l_663 = &l_658[2];
    int32_t *l_664 = (void*)0;
    int32_t *l_665 = &l_658[5];
    int32_t *l_666 = &l_658[5];
    int32_t *l_667 = &l_658[4];
    int32_t *l_668 = &p_1741->g_8;
    int32_t *l_669 = &p_1741->g_657;
    int32_t *l_670 = &l_658[2];
    int32_t *l_671 = &p_1741->g_657;
    int32_t *l_672 = &l_658[2];
    int32_t *l_673 = &l_658[1];
    int32_t *l_674 = &l_658[4];
    int32_t *l_675 = &l_658[2];
    int32_t *l_676 = &l_658[5];
    int32_t *l_677 = (void*)0;
    int32_t *l_678 = &l_658[2];
    int32_t *l_679 = &l_658[4];
    int32_t *l_680 = &p_1741->g_657;
    int32_t *l_681 = &p_1741->g_8;
    int32_t *l_682 = &p_1741->g_8;
    int32_t *l_683 = &p_1741->g_657;
    int32_t *l_684 = &p_1741->g_8;
    int32_t *l_685 = &l_658[2];
    int32_t *l_686 = &l_658[2];
    int32_t *l_687 = &p_1741->g_8;
    int32_t *l_688[3];
    int32_t l_689 = (-9L);
    int32_t l_690 = 0x0C006C09L;
    int8_t l_691 = (-1L);
    uint16_t l_692 = 65532UL;
    int32_t *l_695 = &p_1741->g_8;
    int i, j;
    for (i = 0; i < 6; i++)
        l_658[i] = (-6L);
    for (i = 0; i < 3; i++)
        l_688[i] = &p_1741->g_8;
    (*l_656) |= (safe_sub_func_int16_t_s_s(func_52(func_56(l_62[3][7], (p_1741->g_8 , p_1741->g_4), p_48, p_1741->g_8, l_62[3][7], p_1741), (l_572 == (l_573 = (void*)0)), l_62[2][7], p_1741), l_62[2][2]));
    --l_692;
    return l_695;
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_168 p_1741->g_320 p_1741->g_554 p_1741->g_552 p_1741->g_481 p_1741->g_247 p_1741->g_600 p_1741->g_607 p_1741->g_264 p_1741->g_105 p_1741->g_612 p_1741->g_519 p_1741->g_636
 * writes: p_1741->g_96 p_1741->g_481 p_1741->g_607 p_1741->g_618 p_1741->g_370 p_1741->g_636 p_1741->g_647 p_1741->g_136
 */
int16_t  func_52(int32_t * p_53, int32_t  p_54, uint64_t  p_55, struct S0 * p_1741)
{ /* block id: 247 */
    int32_t l_576 = 0x1235F4F8L;
    int32_t l_577 = (-4L);
    int64_t l_578 = 0x51253AE0011B7223L;
    int32_t l_594 = 0x1CF306CBL;
    int32_t *****l_615 = &p_1741->g_519;
    int32_t ******l_614 = &l_615;
    int8_t l_648[3][1];
    int32_t l_651 = 1L;
    int32_t l_652 = 0L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_648[i][j] = 2L;
    }
    l_577 = ((safe_mul_func_uint16_t_u_u((0x0CL & (l_576 = (-1L))), 65535UL)) ^ l_577);
    for (l_577 = 0; (l_577 <= 1); l_577 += 1)
    { /* block id: 252 */
        int32_t *l_593[2][3][8] = {{{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&l_576,&l_577,&l_577,&l_576},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&l_576,&l_577,&l_577,&l_576},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&l_576,&l_577,&l_577,&l_576}},{{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&l_576,&l_577,&l_577,&l_576},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&l_576,&l_577,&l_577,&l_576},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&l_576,&l_577,&l_577,&l_576}}};
        uint64_t **l_602 = (void*)0;
        uint64_t ***l_601 = &l_602;
        int32_t ****l_633 = &p_1741->g_520[3];
        int16_t *l_634 = &p_1741->g_370[0];
        uint32_t *l_635[5] = {&p_1741->g_636[3],&p_1741->g_636[3],&p_1741->g_636[3],&p_1741->g_636[3],&p_1741->g_636[3]};
        uint16_t l_645[6][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
        int64_t l_646 = 0x373FDC1C92382205L;
        int32_t l_649[6][6][4] = {{{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L}},{{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L}},{{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L}},{{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L}},{{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L}},{{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L},{7L,(-9L),0L,0L}}};
        int16_t l_650 = (-5L);
        uint32_t l_653 = 0xC41C638CL;
        int i, j, k;
        l_576 = (&p_1741->g_168[l_577] != (void*)0);
        for (p_1741->g_96 = 0; (p_1741->g_96 <= 8); p_1741->g_96 += 1)
        { /* block id: 256 */
            int8_t l_597[10];
            int i;
            for (i = 0; i < 10; i++)
                l_597[i] = 4L;
            if (p_1741->g_168[l_577])
                break;
            l_594 &= ((l_577 && (l_578 , ((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((p_54 > p_54) , (p_1741->g_320 < (((p_54 &= (safe_unary_minus_func_uint8_t_u((safe_div_func_int8_t_s_s((p_1741->g_554[(l_577 + 7)] == l_593[0][1][7]), 0x23L))))) & p_1741->g_552) & p_55))), p_1741->g_481)), l_576)), 3)), p_1741->g_168[l_577])) && p_55) , p_1741->g_247), 3UL)))) & p_55))) != p_55);
            p_54 = (((safe_div_func_uint64_t_u_u((l_597[0] | (((safe_add_func_int8_t_s_s(0x19L, ((p_1741->g_600 == l_601) , (4294967295UL < 0x31895E67L)))) == (p_1741->g_607 ^= (safe_sub_func_uint8_t_u_u((0x11752C6FBD3B9832L || (p_55 , ((++p_1741->g_481) , p_55))), 0xFFL)))) == l_594)), (*p_1741->g_264))) | p_1741->g_168[0]) , p_55);
            p_54 = (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((p_1741->g_612 == l_614), p_55)), (safe_rshift_func_int16_t_s_s(p_54, (p_1741->g_618 = 0x7969L)))));
        }
        l_649[4][5][0] = ((((safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_1741->g_320, (p_1741->g_105 ^ (p_1741->g_647 = (safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u(p_55, (safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_54, (((**l_614) == l_633) > (((p_55 > ((*l_634) = p_55)) | (p_1741->g_636[7]--)) < (~((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_54, 15)), 10)), l_645[1][1])) == 0x38L) == p_55) & 0L)))))), l_646)))), 4294967288UL)))))), 1UL)) != p_55) || 0x0FL), l_594)) , l_648[0][0]) && p_55) && p_55);
        ++l_653;
        for (p_54 = 4; (p_54 >= 0); p_54 -= 1)
        { /* block id: 273 */
            int i, j;
            p_1741->g_136[(p_54 + 1)][p_54] = &p_54;
        }
    }
    l_577 &= p_54;
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_1741->g_8 p_1741->g_6 p_1741->g_7 p_1741->g_105 p_1741->g_519 p_1741->g_520 p_1741->g_135 p_1741->g_136
 * writes: p_1741->g_8 p_1741->g_105
 */
int32_t * func_56(int64_t  p_57, uint16_t  p_58, int16_t * p_59, uint32_t  p_60, int32_t  p_61, struct S0 * p_1741)
{ /* block id: 11 */
    int32_t *l_64 = &p_1741->g_8;
    int32_t **l_63 = &l_64;
    uint16_t *l_71 = &p_1741->g_6;
    int64_t l_79 = 0L;
    int16_t l_80 = 1L;
    uint8_t l_158 = 254UL;
    uint8_t l_206 = 0x4AL;
    int32_t l_219 = 0x68B5D42EL;
    uint32_t l_283 = 0x171682B1L;
    uint32_t l_288[8] = {4294967286UL,0x1C7DB9B2L,4294967286UL,4294967286UL,0x1C7DB9B2L,4294967286UL,4294967286UL,0x1C7DB9B2L};
    int32_t l_291[3];
    int16_t l_354 = (-3L);
    uint64_t *l_403 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_291[i] = 7L;
    (*l_63) = &p_1741->g_8;
    if ((((safe_div_func_uint64_t_u_u((p_60 && ((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((p_60 && (l_71 == &p_58)) != (safe_mod_func_int64_t_s_s((!p_57), (safe_unary_minus_func_int32_t_s(((((**l_63) | ((&l_64 != (void*)0) != (safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(((void*)0 == &p_1741->g_8), l_79)) , (**l_63)), p_1741->g_6)))) != p_1741->g_6) > p_1741->g_8)))))), 0x9673L)), (*l_64))) & (*p_1741->g_7))), 0x26E61A645CCAEA4CL)) | l_80) && 9UL))
    { /* block id: 13 */
        uint64_t l_87[4][8][8] = {{{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL}},{{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL}},{{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL}},{{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL},{18446744073709551615UL,0x54A15197363D2F63L,0UL,0UL,0x54A15197363D2F63L,18446744073709551615UL,0xC2A5DE23EDE1F3C6L,1UL}}};
        int32_t l_103 = (-9L);
        int32_t l_144 = 0x32EA050EL;
        int8_t *l_237 = &p_1741->g_104[0];
        int32_t l_286 = 0x2669B678L;
        int32_t l_287[3];
        int32_t l_294 = (-1L);
        uint16_t *l_304 = &p_1741->g_168[1];
        uint16_t ***l_325 = &p_1741->g_146;
        uint64_t l_396 = 18446744073709551615UL;
        uint32_t l_431 = 4294967295UL;
        uint8_t l_445 = 0x94L;
        int32_t *l_494 = &l_103;
        int32_t ****l_523 = (void*)0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_287[i] = 0x35144CBCL;
        for (l_79 = (-10); (l_79 > 10); ++l_79)
        { /* block id: 16 */
            (*p_1741->g_7) = (*p_1741->g_7);
            for (p_60 = 0; (p_60 < 35); ++p_60)
            { /* block id: 20 */
                uint32_t l_97 = 0xC3613B7DL;
                for (l_80 = 0; (l_80 == 17); l_80++)
                { /* block id: 23 */
                    for (p_58 = 0; (p_58 <= 3); p_58 += 1)
                    { /* block id: 26 */
                        int32_t *l_88 = &p_1741->g_8;
                        int32_t *l_89 = &p_1741->g_8;
                        int32_t *l_90 = &p_1741->g_8;
                        int32_t *l_91 = &p_1741->g_8;
                        int32_t *l_92 = &p_1741->g_8;
                        int32_t *l_93 = &p_1741->g_8;
                        int32_t *l_94 = &p_1741->g_8;
                        int32_t *l_95[5][5][4] = {{{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,(void*)0,&p_1741->g_8,&p_1741->g_8}}};
                        int i, j, k;
                        --l_97;
                    }
                }
            }
        }
        for (l_79 = 0; (l_79 != (-14)); l_79 = safe_sub_func_int8_t_s_s(l_79, 9))
        { /* block id: 34 */
            int32_t *l_102[9][10][2] = {{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}},{{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8}}};
            int i, j, k;
            p_1741->g_105--;
        }
    }
    else
    { /* block id: 241 */
        (**l_63) &= 0x766265B6L;
        return (***p_1741->g_519);
    }
    return (***p_1741->g_519);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1742;
    struct S0* p_1741 = &c_1742;
    struct S0 c_1743 = {
        0x76D7L, // p_1741->g_4
        0x588EL, // p_1741->g_6
        0x134215E1L, // p_1741->g_8
        &p_1741->g_8, // p_1741->g_7
        0x052FF1F9L, // p_1741->g_96
        {1L,1L}, // p_1741->g_104
        0x19C124D0950DC5A6L, // p_1741->g_105
        {{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8},{&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8}}, // p_1741->g_136
        &p_1741->g_136[0][1], // p_1741->g_135
        (void*)0, // p_1741->g_142
        {{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6},{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6},{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6},{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6},{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6},{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6},{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6},{&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6,&p_1741->g_6,(void*)0,&p_1741->g_6}}, // p_1741->g_147
        &p_1741->g_147[7][3], // p_1741->g_146
        2UL, // p_1741->g_153
        {0x8CF9L,0x8CF9L}, // p_1741->g_168
        18446744073709551615UL, // p_1741->g_179
        0L, // p_1741->g_247
        &p_1741->g_105, // p_1741->g_264
        (void*)0, // p_1741->g_265
        0L, // p_1741->g_320
        (void*)0, // p_1741->g_356
        {(-4L),(-4L)}, // p_1741->g_370
        {&p_1741->g_370[1],&p_1741->g_370[1],&p_1741->g_370[1],&p_1741->g_370[1]}, // p_1741->g_395
        {&p_1741->g_105,&p_1741->g_105,&p_1741->g_105,&p_1741->g_105,&p_1741->g_105,&p_1741->g_105,&p_1741->g_105,&p_1741->g_105,&p_1741->g_105,&p_1741->g_105}, // p_1741->g_438
        0x1E3B734FL, // p_1741->g_481
        0xCBECCB2E47D2F654L, // p_1741->g_491
        {&p_1741->g_135,&p_1741->g_135,&p_1741->g_135,&p_1741->g_135}, // p_1741->g_520
        &p_1741->g_520[3], // p_1741->g_519
        0x2D957EADL, // p_1741->g_522
        (void*)0, // p_1741->g_527
        0x16ECEE04306BCA2BL, // p_1741->g_543
        0x2D05L, // p_1741->g_552
        {&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8,&p_1741->g_8}, // p_1741->g_554
        (void*)0, // p_1741->g_600
        0x0E0FCBE4L, // p_1741->g_607
        (void*)0, // p_1741->g_613
        &p_1741->g_613, // p_1741->g_612
        0UL, // p_1741->g_618
        {0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L,0x4CFEFA60L}, // p_1741->g_636
        0L, // p_1741->g_647
        (-5L), // p_1741->g_657
        0x1796C6EFL, // p_1741->g_697
        {0xC1L}, // p_1741->g_700
        0x4CC87385L, // p_1741->g_708
        0x46L, // p_1741->g_754
        &p_1741->g_554[1], // p_1741->g_779
        &p_1741->g_700[0], // p_1741->g_799
        &p_1741->g_799, // p_1741->g_798
        &p_1741->g_798, // p_1741->g_797
        {0xF84F7F11AAB65C04L,0xF84F7F11AAB65C04L,0xF84F7F11AAB65C04L,0xF84F7F11AAB65C04L}, // p_1741->g_844
        0x556DAA12AC168119L, // p_1741->g_848
        (-3L), // p_1741->g_958
        0x7B914731A70DBB2AL, // p_1741->g_1108
        0x5A1FL, // p_1741->g_1109
        {{&p_1741->g_247,&p_1741->g_647,&p_1741->g_247},{&p_1741->g_247,&p_1741->g_647,&p_1741->g_247},{&p_1741->g_247,&p_1741->g_647,&p_1741->g_247},{&p_1741->g_247,&p_1741->g_647,&p_1741->g_247},{&p_1741->g_247,&p_1741->g_647,&p_1741->g_247}}, // p_1741->g_1132
        &p_1741->g_1132[1][0], // p_1741->g_1131
        3UL, // p_1741->g_1160
        &p_1741->g_697, // p_1741->g_1223
        {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL}, // p_1741->g_1231
        {{{0x59C6L,0x59C6L,0x59C6L}},{{0x59C6L,0x59C6L,0x59C6L}},{{0x59C6L,0x59C6L,0x59C6L}}}, // p_1741->g_1271
        0x5187L, // p_1741->g_1292
        4294967295UL, // p_1741->g_1371
        (void*)0, // p_1741->g_1378
        {{{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL}},{{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL}},{{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL}},{{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL},{1L,(-1L),0x14A812602610EA6FL,0x06733728A87EBFDDL}}}, // p_1741->g_1384
        0xDBL, // p_1741->g_1396
        (void*)0, // p_1741->g_1404
        {{&p_1741->g_1404,&p_1741->g_1404},{&p_1741->g_1404,&p_1741->g_1404},{&p_1741->g_1404,&p_1741->g_1404},{&p_1741->g_1404,&p_1741->g_1404},{&p_1741->g_1404,&p_1741->g_1404},{&p_1741->g_1404,&p_1741->g_1404}}, // p_1741->g_1403
        {0x3DC7B7EEEC089A30L,0x3DC7B7EEEC089A30L,0x3DC7B7EEEC089A30L,0x3DC7B7EEEC089A30L,0x3DC7B7EEEC089A30L}, // p_1741->g_1405
        0x3A1B6CE2L, // p_1741->g_1466
        &p_1741->g_264, // p_1741->g_1511
        &p_1741->g_1511, // p_1741->g_1510
        0x7D96F9B0L, // p_1741->g_1613
        {0x0CL,0x9FL,0x0CL,0x0CL,0x9FL,0x0CL,0x0CL,0x9FL}, // p_1741->g_1694
    };
    c_1742 = c_1743;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1741);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1741->g_4, "p_1741->g_4", print_hash_value);
    transparent_crc(p_1741->g_6, "p_1741->g_6", print_hash_value);
    transparent_crc(p_1741->g_8, "p_1741->g_8", print_hash_value);
    transparent_crc(p_1741->g_96, "p_1741->g_96", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1741->g_104[i], "p_1741->g_104[i]", print_hash_value);

    }
    transparent_crc(p_1741->g_105, "p_1741->g_105", print_hash_value);
    transparent_crc(p_1741->g_153, "p_1741->g_153", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1741->g_168[i], "p_1741->g_168[i]", print_hash_value);

    }
    transparent_crc(p_1741->g_179, "p_1741->g_179", print_hash_value);
    transparent_crc(p_1741->g_247, "p_1741->g_247", print_hash_value);
    transparent_crc(p_1741->g_320, "p_1741->g_320", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1741->g_370[i], "p_1741->g_370[i]", print_hash_value);

    }
    transparent_crc(p_1741->g_481, "p_1741->g_481", print_hash_value);
    transparent_crc(p_1741->g_491, "p_1741->g_491", print_hash_value);
    transparent_crc(p_1741->g_522, "p_1741->g_522", print_hash_value);
    transparent_crc(p_1741->g_543, "p_1741->g_543", print_hash_value);
    transparent_crc(p_1741->g_552, "p_1741->g_552", print_hash_value);
    transparent_crc(p_1741->g_607, "p_1741->g_607", print_hash_value);
    transparent_crc(p_1741->g_618, "p_1741->g_618", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1741->g_636[i], "p_1741->g_636[i]", print_hash_value);

    }
    transparent_crc(p_1741->g_647, "p_1741->g_647", print_hash_value);
    transparent_crc(p_1741->g_657, "p_1741->g_657", print_hash_value);
    transparent_crc(p_1741->g_697, "p_1741->g_697", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1741->g_700[i], "p_1741->g_700[i]", print_hash_value);

    }
    transparent_crc(p_1741->g_708, "p_1741->g_708", print_hash_value);
    transparent_crc(p_1741->g_754, "p_1741->g_754", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1741->g_844[i], "p_1741->g_844[i]", print_hash_value);

    }
    transparent_crc(p_1741->g_848, "p_1741->g_848", print_hash_value);
    transparent_crc(p_1741->g_958, "p_1741->g_958", print_hash_value);
    transparent_crc(p_1741->g_1108, "p_1741->g_1108", print_hash_value);
    transparent_crc(p_1741->g_1109, "p_1741->g_1109", print_hash_value);
    transparent_crc(p_1741->g_1160, "p_1741->g_1160", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1741->g_1231[i], "p_1741->g_1231[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1741->g_1271[i][j][k], "p_1741->g_1271[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1741->g_1292, "p_1741->g_1292", print_hash_value);
    transparent_crc(p_1741->g_1371, "p_1741->g_1371", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1741->g_1384[i][j][k], "p_1741->g_1384[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1741->g_1396, "p_1741->g_1396", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1741->g_1405[i], "p_1741->g_1405[i]", print_hash_value);

    }
    transparent_crc(p_1741->g_1466, "p_1741->g_1466", print_hash_value);
    transparent_crc(p_1741->g_1613, "p_1741->g_1613", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1741->g_1694[i], "p_1741->g_1694[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
