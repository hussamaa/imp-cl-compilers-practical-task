// -g 49,75,1 -l 49,5,1
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


// Seed: 1345619132

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2[2][7];
    uint32_t g_20[10][10];
    int64_t g_29[5];
    int64_t g_37;
    int32_t ** volatile g_54;
    int32_t g_60;
    int32_t g_62[7][4];
    int32_t * volatile g_61;
    int32_t * volatile g_67;
    int32_t *g_81[9];
    int32_t **g_80;
    uint64_t g_83;
    int64_t g_91;
    int64_t * volatile g_104;
    int32_t *** volatile g_106;
    int8_t g_119;
    int64_t g_129;
    int32_t * volatile g_133;
    uint32_t g_144[4];
    uint64_t g_146[4];
    uint16_t g_148;
    uint64_t g_151;
    uint16_t g_163;
    int32_t g_173;
    uint8_t g_194;
    uint16_t g_290[2][9][2];
    uint16_t g_292;
    int16_t g_321;
    int16_t * volatile g_320;
    int32_t **g_346[1][7];
    uint8_t *g_355;
    int32_t ** volatile g_457;
    int32_t ** volatile g_460;
    int32_t * volatile g_492;
    int32_t g_494;
    volatile int32_t g_506;
    volatile uint32_t g_510;
    uint64_t g_581;
    volatile int8_t g_595;
    volatile int8_t *g_594;
    volatile int8_t **g_593;
    int8_t **g_596;
    int32_t g_602;
    uint8_t g_651;
    uint64_t g_667[2];
    int32_t g_668[3];
    volatile int32_t g_677;
    volatile uint32_t g_679;
    int8_t g_686;
    int16_t g_753;
    int32_t * volatile g_765;
    volatile int32_t g_769;
    volatile uint64_t **g_779;
    uint8_t g_784;
    uint8_t * volatile *g_818[5][5];
    uint8_t * volatile **g_817;
    int32_t ***g_822[4];
    int32_t ****g_821;
    int32_t ****g_823;
    int8_t g_825[10];
    volatile int64_t g_849[10][7];
    int64_t *g_869;
    int64_t g_894[8];
    int32_t g_895;
    volatile uint8_t g_1017;
    int8_t *g_1043;
    int8_t * volatile *g_1042[8][5];
    int8_t * volatile * volatile *g_1041;
    int8_t * volatile * volatile * volatile *g_1040;
    uint64_t g_1088;
    int32_t g_1101;
    uint16_t * volatile g_1121;
    uint16_t * volatile *g_1120[1][2][10];
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_1203);
int64_t  func_7(int64_t  p_8, uint64_t  p_9, uint32_t  p_10, int32_t  p_11, int32_t  p_12, struct S0 * p_1203);
int64_t  func_15(int32_t  p_16, struct S0 * p_1203);
int8_t  func_32(int64_t * p_33, int64_t * p_34, uint32_t  p_35, struct S0 * p_1203);
int64_t * func_38(int64_t * p_39, uint64_t  p_40, int64_t  p_41, int64_t * p_42, struct S0 * p_1203);
int64_t * func_43(int64_t  p_44, int64_t  p_45, int64_t * p_46, struct S0 * p_1203);
int64_t * func_49(uint8_t  p_50, uint32_t  p_51, struct S0 * p_1203);
int32_t  func_70(int32_t  p_71, struct S0 * p_1203);
int32_t  func_73(uint64_t  p_74, int32_t * p_75, struct S0 * p_1203);
int32_t * func_76(int32_t ** p_77, uint8_t  p_78, uint64_t  p_79, struct S0 * p_1203);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1203->g_2 p_1203->g_346 p_1203->g_81 p_1203->g_80 p_1203->g_60 p_1203->g_62 p_1203->g_104 p_1203->g_20 p_1203->g_823 p_1203->g_822 p_1203->g_321 p_1203->g_765 p_1203->g_37 p_1203->g_320 p_1203->g_29 p_1203->g_194 p_1203->g_869 p_1203->g_784 p_1203->g_581 p_1203->g_1043 p_1203->g_119 p_1203->g_753 p_1203->g_133 p_1203->g_821 p_1203->g_593 p_1203->g_594 p_1203->g_595 p_1203->g_1088 p_1203->g_1101 p_1203->g_106 p_1203->g_494 p_1203->g_292 p_1203->g_67 p_1203->g_1120 p_1203->g_355 p_1203->g_129 p_1203->g_651 p_1203->g_163 p_1203->g_895
 * writes: p_1203->g_2 p_1203->g_91 p_1203->g_81 p_1203->g_163 p_1203->g_60 p_1203->g_37 p_1203->g_29 p_1203->g_753 p_1203->g_869 p_1203->g_62 p_1203->g_686 p_1203->g_494 p_1203->g_292 p_1203->g_194 p_1203->g_321 p_1203->g_290
 */
int32_t  func_1(struct S0 * p_1203)
{ /* block id: 4 */
    uint64_t l_684 = 0x38A27C8F3F67168FL;
    uint32_t l_697[2][7];
    uint32_t l_786 = 4294967286UL;
    int8_t ***l_787 = (void*)0;
    int32_t ***l_820 = &p_1203->g_346[0][4];
    int32_t ****l_819[1];
    int8_t *l_904 = &p_1203->g_686;
    int8_t **l_903 = &l_904;
    uint16_t l_929 = 0x22BBL;
    int8_t l_955 = 0L;
    int16_t l_986 = 1L;
    uint16_t l_989 = 0x8822L;
    uint16_t *l_1053 = &p_1203->g_163;
    int64_t l_1110 = 1L;
    int16_t l_1111 = (-8L);
    uint64_t l_1112 = 0xC6F3AD4749EDBF29L;
    int64_t l_1135 = 0L;
    int64_t l_1193[2];
    int32_t l_1194 = 0L;
    int64_t l_1199[9][10][2] = {{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}},{{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L},{0x317C3AB3CED459A3L,0x7C7FD49091458FA2L}}};
    uint32_t l_1200 = 0xBE755AE5L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_697[i][j] = 0xAC4DF08EL;
    }
    for (i = 0; i < 1; i++)
        l_819[i] = &l_820;
    for (i = 0; i < 2; i++)
        l_1193[i] = 0x688CBEF5DE843146L;
    for (p_1203->g_2[0][2] = (-24); (p_1203->g_2[0][2] <= 16); p_1203->g_2[0][2]++)
    { /* block id: 7 */
        int8_t *l_685 = &p_1203->g_686;
        uint16_t *l_689 = &p_1203->g_292;
        int32_t l_694 = 1L;
        uint16_t *l_695 = &p_1203->g_290[1][6][1];
        int8_t l_696 = 0L;
        int32_t l_848[8];
        int32_t l_852 = 0x1E1508CAL;
        int32_t *l_930[10] = {(void*)0,&p_1203->g_173,(void*)0,(void*)0,&p_1203->g_173,(void*)0,(void*)0,&p_1203->g_173,(void*)0,(void*)0};
        int8_t l_988 = 0L;
        uint32_t l_1005[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
        int i;
        for (i = 0; i < 8; i++)
            l_848[i] = 7L;
        if (p_1203->g_2[0][2])
            break;
    }
lbl_1192:
    (***p_1203->g_823) = func_76((*l_820), (***l_820), (***l_820), p_1203);
    (*p_1203->g_765) |= (((*l_1053) = (***l_820)) | p_1203->g_321);
    for (p_1203->g_60 = 0; (p_1203->g_60 >= 27); p_1203->g_60 = safe_add_func_int8_t_s_s(p_1203->g_60, 3))
    { /* block id: 474 */
        int32_t l_1077 = 1L;
        int64_t l_1108 = 0L;
        uint32_t l_1109 = 0xE967E4D8L;
        int32_t *l_1114 = &p_1203->g_494;
        uint32_t l_1132 = 4294967291UL;
        uint16_t **l_1134 = &l_1053;
        int8_t **l_1136 = &l_904;
        int64_t l_1174[1][4] = {{0x02093A80C55BB385L,0x02093A80C55BB385L,0x02093A80C55BB385L,0x02093A80C55BB385L}};
        int32_t l_1195 = 0x0835DD6DL;
        int64_t l_1196 = 0x2911E49E6A0C06D3L;
        int32_t l_1197 = 0x0EDFC986L;
        int32_t l_1198[6] = {0x540CAEE3L,0x44FBC699L,0x540CAEE3L,0x540CAEE3L,0x44FBC699L,0x540CAEE3L};
        int i, j;
        for (p_1203->g_37 = 0; (p_1203->g_37 != 19); p_1203->g_37++)
        { /* block id: 477 */
            uint16_t l_1069 = 0x7698L;
            int64_t **l_1078 = (void*)0;
            int64_t **l_1079 = &p_1203->g_869;
            int64_t *l_1081 = &p_1203->g_37;
            int64_t **l_1080 = &l_1081;
            for (l_684 = (-14); (l_684 > 14); l_684 = safe_add_func_uint32_t_u_u(l_684, 7))
            { /* block id: 480 */
                uint64_t l_1066[3][5][10] = {{{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L}},{{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L}},{{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L},{0x9D0832685A5B0A26L,18446744073709551607UL,0x6130F126EFF8A3FEL,18446744073709551613UL,0x174B72AAE6D91F34L,18446744073709551607UL,0x126CDDFFFE4C1377L,0x7C7ED0748C82B1A3L,0x7C7ED0748C82B1A3L,0x126CDDFFFE4C1377L}}};
                uint32_t *l_1076[3][8] = {{&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0]},{&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0]},{&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0],&p_1203->g_144[0]}};
                int i, j, k;
                (***l_820) = (((*p_1203->g_320) != (safe_add_func_uint64_t_u_u((((((safe_lshift_func_uint16_t_u_s(0x8A19L, (safe_add_func_int16_t_s_s((((*p_1203->g_869) = (l_1066[0][4][9] == (safe_mul_func_uint8_t_u_u(((((void*)0 == &p_1203->g_321) , l_1066[0][4][9]) , ((0x4375L | p_1203->g_29[4]) > p_1203->g_194)), 0x80L)))) == p_1203->g_784), p_1203->g_581)))) & (*p_1203->g_1043)) >= 0x76572906372C9109L) == p_1203->g_60) == 5UL), l_1069))) == 0x107C3BF3713AF152L);
                for (p_1203->g_753 = 0; (p_1203->g_753 > 7); p_1203->g_753 = safe_add_func_uint64_t_u_u(p_1203->g_753, 1))
                { /* block id: 485 */
                    return (*p_1203->g_133);
                }
                (****p_1203->g_821) = (-5L);
                (****p_1203->g_823) = (safe_rshift_func_int16_t_s_u((*p_1203->g_320), (safe_rshift_func_int16_t_s_u(((l_1077 = (***l_820)) && (****p_1203->g_821)), 12))));
            }
            (*p_1203->g_133) = (((*l_1079) = &p_1203->g_29[1]) != ((*l_1080) = (void*)0));
        }
        if (((safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((((safe_add_func_int8_t_s_s((**p_1203->g_593), ((((*l_1053) = (~p_1203->g_1088)) != (safe_mod_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((!(safe_add_func_uint32_t_u_u((((((safe_mul_func_int16_t_s_s(l_1077, 9L)) && p_1203->g_1101) <= l_1077) != (safe_rshift_func_uint16_t_u_u(p_1203->g_29[0], 14))) <= (safe_rshift_func_int8_t_s_u(((**l_903) = (safe_mod_func_uint16_t_u_u(((****p_1203->g_821) | l_1108), p_1203->g_2[0][0]))), l_1077))), 1L))) , l_1109), 0x5FFCL)), l_1110)) , (***l_820)) > (-1L)), 18446744073709551607UL)) == 0x2A6202A5218638B4L) & 7L), l_1109))) && l_1077))) >= 0x595AL) >= l_1111) , 8L), l_1077)) || 4294967295UL), (**p_1203->g_80))) , l_1112))
        { /* block id: 498 */
            int32_t *l_1113 = &p_1203->g_2[0][2];
            (*p_1203->g_80) = l_1113;
        }
        else
        { /* block id: 500 */
            int8_t l_1133 = (-9L);
            uint64_t l_1164[6][2][6] = {{{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L},{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L}},{{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L},{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L}},{{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L},{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L}},{{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L},{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L}},{{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L},{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L}},{{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L},{0x30AD332554E8F234L,0x54A9507D55ECDF34L,0xCFAB8CB0927C7DC0L,0x20983497F898EC0AL,0xCFAB8CB0927C7DC0L,0x54A9507D55ECDF34L}}};
            int16_t l_1175 = 0x67AEL;
            int32_t l_1176[1][7][1] = {{{0x6E10A2E9L},{0x6E10A2E9L},{0x6E10A2E9L},{0x6E10A2E9L},{0x6E10A2E9L},{0x6E10A2E9L},{0x6E10A2E9L}}};
            int i, j, k;
            l_1114 = ((**l_820) = (**p_1203->g_106));
            if ((***l_820))
                break;
            for (p_1203->g_494 = 10; (p_1203->g_494 != 15); ++p_1203->g_494)
            { /* block id: 506 */
                int32_t l_1126 = 1L;
                int64_t *l_1131[4];
                int32_t l_1172 = 0x51730B51L;
                uint16_t l_1173[6][10][4] = {{{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL}},{{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL}},{{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL}},{{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL}},{{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL}},{{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL},{0x41FAL,0xC959L,0x77E8L,0xDBFCL}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1131[i] = &p_1203->g_894[5];
                for (p_1203->g_292 = 26; (p_1203->g_292 > 44); p_1203->g_292 = safe_add_func_uint8_t_u_u(p_1203->g_292, 6))
                { /* block id: 509 */
                    int8_t l_1119[6] = {0x5AL,1L,0x5AL,0x5AL,1L,0x5AL};
                    int32_t l_1137 = (-1L);
                    int64_t **l_1183[7][10] = {{&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,(void*)0},{&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,(void*)0},{&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,(void*)0},{&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,(void*)0},{&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,(void*)0},{&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,(void*)0},{&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,&p_1203->g_869,&p_1203->g_869,&p_1203->g_869,(void*)0,(void*)0}};
                    int32_t ****l_1191 = &l_820;
                    int i, j;
                    l_1119[4] ^= (*p_1203->g_67);
                    l_1137 ^= (((((((p_1203->g_1120[0][1][4] != (((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_1126 , ((((+(((*l_1114) && ((*p_1203->g_869) < 0x18C7AA6FCC03E9C9L)) ^ l_1126)) && (safe_add_func_int64_t_s_s((*p_1203->g_869), l_1126))) , &p_1203->g_894[3]) != l_1131[0])), l_1132)), l_1133)) | l_1126) , l_1134)) , (*p_1203->g_106)) != (void*)0) , l_1133) || l_1135) , l_1136) == (void*)0);
                    for (l_1109 = 0; (l_1109 <= 1); l_1109 += 1)
                    { /* block id: 514 */
                        int8_t *l_1169 = &l_1119[4];
                        int16_t *l_1170[1][8] = {{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321}};
                        uint8_t l_1171 = 8UL;
                        uint16_t *l_1184 = &p_1203->g_290[1][1][1];
                        int i, j;
                        l_1077 = ((**p_1203->g_80) = (0xB6L >= (safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((l_1176[0][1][0] ^= (safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((!((l_697[l_1109][(l_1109 + 3)] & (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(0x4E70L, (((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_s((0x9F3EA939L | (~l_697[l_1109][(l_1109 + 2)])), 7)) ^ ((((((*p_1203->g_320) |= (((+(safe_div_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(l_1164[5][1][3], (***l_820))) <= (l_1171 = (((safe_sub_func_uint64_t_u_u((l_1164[1][1][5] , ((--(*p_1203->g_355)) , l_1164[5][0][0])), p_1203->g_1088)) , l_1169) == &l_1133))) >= 0xE5BFL), l_1172))) , (void*)0) == (void*)0)) < (-1L)) || l_1173[4][0][0]) , (void*)0) != &p_1203->g_594)) , 0UL), 2)) | 0UL), l_1174[0][3])) | l_1119[3]) , (*p_1203->g_320)))) || l_1171), l_1175)), l_1175))) ^ p_1203->g_129)), 0x412A7B3BL)) , 3UL), 7))) , 6UL), p_1203->g_651)), 0x789FL)), l_1137))));
                        (****p_1203->g_823) = ((((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((**l_1134) &= 0xCED2L), (0x21A92C49L >= (safe_sub_func_uint16_t_u_u(0xCA04L, ((*l_1184) = (l_1172 == ((void*)0 != l_1183[3][9])))))))) != (*l_1114)), (((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(1UL, (safe_rshift_func_int16_t_s_s(((l_1176[0][1][0] || l_1119[1]) , (*p_1203->g_320)), p_1203->g_895)))), (****p_1203->g_823))) , l_1191) == &p_1203->g_822[2]) ^ l_697[l_1109][(l_1109 + 2)]) , 7L))) , (*p_1203->g_355)) & l_1173[4][0][0]) >= l_1173[1][0][1]);
                    }
                }
            }
            if ((*l_1114))
                break;
        }
        if (p_1203->g_194)
            goto lbl_1192;
        l_1200--;
    }
    return (*p_1203->g_67);
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_80 p_1203->g_81 p_1203->g_2 p_1203->g_581 p_1203->g_144 p_1203->g_104 p_1203->g_37 p_1203->g_148 p_1203->g_62 p_1203->g_355 p_1203->g_194 p_1203->g_61 p_1203->g_593 p_1203->g_594 p_1203->g_595 p_1203->g_67 p_1203->g_83 p_1203->g_60 p_1203->g_20 p_1203->g_460 p_1203->g_290 p_1203->g_510 p_1203->g_686 p_1203->g_320 p_1203->g_321 p_1203->g_29 p_1203->g_667 p_1203->g_106 p_1203->g_668
 * writes: p_1203->g_37 p_1203->g_29 p_1203->g_91 p_1203->g_62 p_1203->g_144 p_1203->g_81 p_1203->g_163 p_1203->g_292 p_1203->g_686 p_1203->g_753 p_1203->g_194
 */
int64_t  func_7(int64_t  p_8, uint64_t  p_9, uint32_t  p_10, int32_t  p_11, int32_t  p_12, struct S0 * p_1203)
{ /* block id: 284 */
    int32_t l_714 = (-8L);
    int32_t ***l_729[8];
    int16_t *l_751[7][5] = {{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321},{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321},{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321},{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321},{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321},{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321},{&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321,&p_1203->g_321}};
    uint8_t l_754 = 0x7AL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_729[i] = &p_1203->g_346[0][1];
    if ((**p_1203->g_80))
    { /* block id: 285 */
        int8_t l_708 = 0x42L;
        int32_t l_711 = 1L;
        int64_t *l_712 = &p_1203->g_29[4];
        int64_t *l_713 = &p_1203->g_91;
        uint32_t *l_722 = &p_1203->g_144[1];
        int8_t ***l_727 = &p_1203->g_596;
        if ((p_1203->g_581 <= (((18446744073709551615UL || 1L) & ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((p_12 & ((p_1203->g_144[0] | ((((safe_mod_func_int8_t_s_s(p_11, ((safe_div_func_int64_t_s_s(((*l_713) = (((*l_712) = (((l_708 = (4UL != p_9)) | (safe_div_func_int32_t_s_s(((((*p_1203->g_104) = (-1L)) && (*p_1203->g_104)) , 0x4B79A599L), l_711))) != (-1L))) < 0x641E779E1624811DL)), p_1203->g_148)) & p_8))) && 0x9DB2L) | 1L) > 0xD357681312DFD9DBL)) != l_714)) , p_1203->g_62[6][1]) , (*p_1203->g_355)), p_8)), p_8)) , 0x8017L)) , p_9)))
        { /* block id: 290 */
            int32_t *l_715 = &p_1203->g_62[6][1];
            if ((p_11 = ((*l_715) |= 0L)))
            { /* block id: 293 */
                return (*p_1203->g_104);
            }
            else
            { /* block id: 295 */
                uint64_t l_728 = 7UL;
                int32_t **l_730 = &p_1203->g_81[7];
                uint16_t *l_738[9] = {&p_1203->g_163,&p_1203->g_290[1][1][1],&p_1203->g_163,&p_1203->g_163,&p_1203->g_290[1][1][1],&p_1203->g_163,&p_1203->g_163,&p_1203->g_290[1][1][1],&p_1203->g_163};
                int i;
                p_11 = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((*p_1203->g_61) && (((&p_1203->g_510 == l_722) & ((safe_sub_func_uint32_t_u_u((~p_12), ((*l_722) |= (&p_1203->g_346[0][4] != ((l_728 ^= (((void*)0 != l_727) && (l_711 != 0x1F8D89485ED836EEL))) , l_729[4]))))) , p_1203->g_194)) < (*l_715))), (*l_715))) != p_10), l_708)) < p_9), 0xBFF8L));
                (*p_1203->g_460) = func_76(l_730, ((((*l_715) = (safe_lshift_func_int8_t_s_s(((((&p_1203->g_651 == &p_1203->g_651) , (safe_unary_minus_func_int16_t_s(((p_11 | ((((safe_mod_func_int64_t_s_s(((void*)0 == &p_12), ((safe_add_func_int8_t_s_s((**p_1203->g_593), p_10)) ^ 0x4DD5L))) , 0UL) , (void*)0) != (void*)0)) && (*p_1203->g_61))))) , (*p_1203->g_67)) > p_9), (*l_715)))) & p_9) , p_9), p_1203->g_83, p_1203);
            }
            (*l_715) ^= p_8;
        }
        else
        { /* block id: 303 */
            uint16_t *l_741 = &p_1203->g_163;
            uint16_t *l_745 = (void*)0;
            int32_t l_746 = (-8L);
            l_746 = (((((*l_741) = (&p_1203->g_594 == (void*)0)) <= (p_1203->g_290[0][0][0] , (0x6F5655CBAF629745L <= ((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_u(((**p_1203->g_80) && 0xAC720B46L), 14)))) <= (l_711 ^ (p_1203->g_292 = p_1203->g_510)))))) ^ 0x01CFC5F4L) && (*p_1203->g_104));
        }
    }
    else
    { /* block id: 308 */
        int8_t *l_747 = &p_1203->g_686;
        int32_t l_748 = (-8L);
        uint16_t *l_752 = (void*)0;
        l_754 ^= (l_748 = (p_11 = ((((((0x7767L <= ((void*)0 != &p_9)) , (!((0x30L && (((*l_747) &= 0x72L) > l_748)) | ((safe_mod_func_uint64_t_u_u((((((((*p_1203->g_320) <= p_1203->g_60) < (p_1203->g_753 = (((l_751[3][4] == &p_1203->g_321) | p_11) , 0UL))) , 0x463316D4L) , p_1203->g_2[0][2]) ^ p_10) >= p_1203->g_29[2]), 0xA04BEB36C9597AE6L)) ^ p_1203->g_667[0])))) < l_748) >= 4L) & p_1203->g_62[6][1]) || p_8)));
    }
    (*p_1203->g_80) = func_76((*p_1203->g_106), ((*p_1203->g_355) = (p_8 >= p_1203->g_668[0])), (p_8 , p_1203->g_83), p_1203);
    return (*p_1203->g_104);
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_61 p_1203->g_62 p_1203->g_2 p_1203->g_67 p_1203->g_60 p_1203->g_510 p_1203->g_320 p_1203->g_321 p_1203->g_355 p_1203->g_194 p_1203->g_144 p_1203->g_163 p_1203->g_83 p_1203->g_173 p_1203->g_146 p_1203->g_20 p_1203->g_129 p_1203->g_29 p_1203->g_91 p_1203->g_80 p_1203->g_81 p_1203->g_492 p_1203->g_148 p_1203->g_346 p_1203->g_119 p_1203->g_667 p_1203->g_104 p_1203->g_37 p_1203->g_679
 * writes: p_1203->g_29 p_1203->g_60 p_1203->g_62 p_1203->g_510 p_1203->g_194 p_1203->g_581 p_1203->g_144 p_1203->g_163 p_1203->g_651 p_1203->g_37 p_1203->g_20 p_1203->g_119 p_1203->g_667 p_1203->g_668 p_1203->g_151 p_1203->g_679
 */
int64_t  func_15(int32_t  p_16, struct S0 * p_1203)
{ /* block id: 9 */
    uint64_t l_30 = 0UL;
    int64_t *l_36 = &p_1203->g_37;
    int32_t l_52 = 0x22A42895L;
    int64_t *l_64 = &p_1203->g_37;
    int32_t l_65 = 1L;
    uint64_t *l_545 = &p_1203->g_151;
    uint64_t **l_544 = &l_545;
    int32_t l_579 = 0x6DA31A77L;
    int32_t l_592 = (-10L);
    int32_t l_622 = 1L;
    int32_t ***l_641 = &p_1203->g_346[0][2];
    int32_t ****l_640 = &l_641;
    for (p_16 = (-28); (p_16 <= (-18)); p_16 = safe_add_func_int16_t_s_s(p_16, 9))
    { /* block id: 12 */
        int64_t l_19[9] = {0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L,0x4EDF6B3E713E19F2L};
        int i;
        if (l_19[8])
            break;
    }
    for (p_16 = 3; (p_16 <= 9); p_16 += 1)
    { /* block id: 17 */
        int32_t l_27[9][5][5] = {{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}},{{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL},{0x17FB6F8AL,0x35C02AC6L,0x0453D47EL,0x609E13A3L,0x0453D47EL}}};
        int64_t *l_28 = &p_1203->g_29[1];
        int8_t l_514[8] = {0x59L,0x59L,0x59L,0x59L,0x59L,0x59L,0x59L,0x59L};
        int8_t *l_598 = &p_1203->g_119;
        int8_t **l_597 = &l_598;
        int32_t l_648[8][8][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
        int32_t l_649 = 0L;
        int64_t l_653 = 0L;
        uint64_t l_675 = 1UL;
        int32_t *l_676[8][9][3] = {{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}},{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}},{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}},{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}},{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}},{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}},{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}},{{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]},{&p_1203->g_62[6][1],&l_649,&p_1203->g_62[6][1]}}};
        int8_t l_678 = 0x4EL;
        int i, j, k;
        if (((*p_1203->g_61) = ((safe_div_func_int8_t_s_s(0x3FL, (safe_div_func_uint8_t_u_u(0x37L, (~(safe_rshift_func_uint16_t_u_s(((p_16 >= p_16) > ((0x5C9A81FFDE63B691L != (l_30 = ((*l_28) = l_27[2][2][0]))) < (safe_unary_minus_func_int8_t_s(func_32(l_36, func_38(func_43(((safe_sub_func_uint8_t_u_u((l_52 = ((l_64 = func_49(l_52, l_27[2][2][0], p_1203)) == &p_1203->g_37)), 255UL)) , l_52), l_27[2][2][0], l_36, p_1203), l_65, p_1203->g_2[0][2], l_28, p_1203), l_514[1], p_1203))))), 1))))))) && p_1203->g_62[6][1])))
        { /* block id: 214 */
            uint8_t l_539 = 0x1AL;
            int32_t l_546 = (-9L);
            int32_t l_547 = 0x68F79FB6L;
            l_547 |= (l_27[6][2][0] < (safe_lshift_func_int16_t_s_s((*p_1203->g_320), ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0x7B846127L, ((p_16 , (l_539 & (safe_div_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((+(l_544 != (void*)0)), l_539)), (l_546 &= l_539))))) ^ 0x60C7L))) == p_1203->g_146[0]), 8)), 0x4534L)), p_16)) , 0x6515L))));
            for (l_52 = 9; (l_52 >= 0); l_52 -= 1)
            { /* block id: 219 */
                int32_t *l_578 = &l_65;
                uint64_t *l_580 = &p_1203->g_581;
                int32_t l_582 = 5L;
                uint32_t *l_583 = &p_1203->g_144[0];
                int i, j;
                l_582 ^= (((safe_mod_func_int64_t_s_s((!(safe_add_func_uint8_t_u_u(p_1203->g_20[l_52][l_52], ((*p_1203->g_355) = (((safe_sub_func_uint16_t_u_u(((((p_1203->g_83 & (((((*l_580) = ((safe_mul_func_uint16_t_u_u(((l_579 &= (safe_sub_func_int64_t_s_s((!(safe_mod_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((*l_578) |= (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(5L, (*p_1203->g_320))), ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(0UL, (safe_lshift_func_int16_t_s_s((-4L), 0)))) < p_1203->g_163), (safe_add_func_uint16_t_u_u(p_16, l_30)))) , p_1203->g_129), 0)), p_16)) < 0x65L)))), 1UL)) == l_514[1]), 1L))), l_27[6][4][0]))) < p_1203->g_29[1]), p_1203->g_60)) , p_1203->g_321)) , p_16) ^ 1UL) != p_16)) <= l_27[2][2][2]) == 0x634258871DE7B417L) & p_1203->g_91), 0x9D72L)) || p_16) && 0x30B25219L))))), p_16)) ^ 0L) <= 0x01AEAC6BL);
                l_582 |= (l_65 = (5L != ((*l_583) = l_27[7][2][4])));
            }
        }
        else
        { /* block id: 229 */
            int8_t l_591 = 0x74L;
            int32_t ***l_600 = &p_1203->g_80;
            int32_t ****l_599 = &l_600;
            int32_t *l_642 = (void*)0;
            int32_t *l_647 = &l_592;
            uint8_t *l_650 = &p_1203->g_651;
            uint32_t *l_652[3];
            int32_t l_654 = 0x7BA4245BL;
            int i;
            for (i = 0; i < 3; i++)
                l_652[i] = &p_1203->g_20[6][2];
            for (p_1203->g_163 = 0; (p_1203->g_163 <= 9); p_1203->g_163 += 1)
            { /* block id: 232 */
                int32_t *l_584 = &l_579;
                int32_t *l_601 = &p_1203->g_602;
                int i, j;
                (1 + 1);
            }
            l_654 = (safe_mod_func_int8_t_s_s((l_27[2][2][0] , (safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(l_30, (safe_mul_func_int16_t_s_s(((((****l_599) && (p_1203->g_20[8][1] = (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((0L == (((((5L & (safe_mul_func_uint8_t_u_u((((*p_1203->g_492) ^= (l_640 == &p_1203->g_106)) == (((*l_28) = ((*l_36) = ((safe_rshift_func_uint8_t_u_u(((*l_650) = ((((((l_649 = (l_648[1][5][0] &= ((*l_647) = (p_1203->g_148 , (safe_mul_func_uint8_t_u_u(((*p_1203->g_355) = (((p_1203->g_144[0] >= (-1L)) , (***l_641)) < p_1203->g_29[1])), 0x1BL)))))) , p_16) == p_1203->g_148) , p_16) != l_27[2][2][0]) >= p_16)), l_27[2][2][0])) != p_16))) , 4294967288UL)), (****l_599)))) ^ p_1203->g_83) , 0x27L) , (void*)0) != (void*)0)), 0x07L)), l_27[1][4][3])))) , 0x316BL) ^ 0x1699L), 0x3DCCL)))) ^ l_653), p_16))), (****l_599)));
        }
        for (p_1203->g_119 = 0; (p_1203->g_119 != 26); p_1203->g_119 = safe_add_func_int16_t_s_s(p_1203->g_119, 2))
        { /* block id: 268 */
            int8_t *l_666[9][8][1] = {{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}},{{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119},{&p_1203->g_119}}};
            int32_t l_673[1][3];
            int32_t l_674[9][4] = {{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L},{0x34C92B26L,0x34C92B26L,0x34C92B26L,0x34C92B26L}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_673[i][j] = 7L;
            }
            l_674[2][0] |= (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((0xD36AL < 65535UL), (((((**l_544) = (safe_lshift_func_int8_t_s_u(((p_1203->g_668[2] = (p_1203->g_667[0] &= (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_u(((*p_1203->g_355) ^= l_27[8][3][4]), 1)))))) != (4294967292UL & (safe_lshift_func_uint8_t_u_u(p_16, 1)))), (safe_lshift_func_uint8_t_u_s((l_514[3] > p_1203->g_2[0][2]), 0))))) == (((*p_1203->g_104) < (~((**p_1203->g_80) | (***l_641)))) | (****l_640))) <= p_1203->g_83) ^ (****l_640)))) != 0x20BB6DDCL) ^ l_673[0][2]), p_1203->g_146[0]));
            return (*p_1203->g_104);
        }
        if (l_675)
            continue;
        ++p_1203->g_679;
    }
    return (***l_641);
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_320 p_1203->g_321 p_1203->g_355 p_1203->g_194 p_1203->g_144 p_1203->g_62 p_1203->g_163 p_1203->g_83 p_1203->g_173
 * writes: p_1203->g_194
 */
int8_t  func_32(int64_t * p_33, int64_t * p_34, uint32_t  p_35, struct S0 * p_1203)
{ /* block id: 207 */
    int16_t l_519 = 1L;
    int32_t l_526 = 0x2C713916L;
    int32_t *l_527[6] = {(void*)0,&p_1203->g_2[0][2],(void*)0,(void*)0,&p_1203->g_2[0][2],(void*)0};
    int32_t l_528 = 0x214F5442L;
    int i;
    l_528 &= (l_526 |= (((-1L) || (0xB3EDB47F715C8DBEL & (safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((l_519 = ((*p_1203->g_320) , 1L)), 0x2B0E710EL)) || (p_35 <= (((((*p_1203->g_355)--) || p_1203->g_144[0]) > (((safe_add_func_uint8_t_u_u(l_519, p_1203->g_62[2][0])) & 0UL) , p_1203->g_163)) < l_519))), p_35)))) < p_1203->g_83));
    return p_1203->g_173;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_67 p_1203->g_60 p_1203->g_510
 * writes: p_1203->g_60 p_1203->g_510
 */
int64_t * func_38(int64_t * p_39, uint64_t  p_40, int64_t  p_41, int64_t * p_42, struct S0 * p_1203)
{ /* block id: 30 */
    int32_t *l_66 = &p_1203->g_60;
    int32_t l_495 = 7L;
    int32_t *l_496 = &p_1203->g_62[1][0];
    int32_t *l_497 = &p_1203->g_60;
    int32_t *l_498 = &p_1203->g_173;
    int32_t *l_499 = &p_1203->g_494;
    int32_t *l_500 = &p_1203->g_62[2][2];
    int32_t *l_501 = &p_1203->g_60;
    int32_t *l_502 = &p_1203->g_60;
    int32_t *l_503 = &p_1203->g_60;
    int32_t l_504 = 0x165A8C63L;
    int32_t *l_505 = &p_1203->g_173;
    int32_t *l_507[4][9][7] = {{{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]}},{{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]}},{{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]}},{{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]},{&p_1203->g_62[1][2],(void*)0,&p_1203->g_494,&p_1203->g_62[1][2],&p_1203->g_173,&p_1203->g_2[0][2],&p_1203->g_2[0][2]}}};
    int16_t l_508 = 0x7254L;
    int32_t l_509 = 0x6792C2E9L;
    int64_t *l_513 = &p_1203->g_91;
    int i, j, k;
    (*l_66) &= (l_66 != p_1203->g_67);
    for (p_41 = (-16); (p_41 <= 13); p_41 = safe_add_func_int32_t_s_s(p_41, 8))
    { /* block id: 34 */
        uint8_t l_72 = 0x53L;
        int32_t *l_493[2];
        int i;
        for (i = 0; i < 2; i++)
            l_493[i] = &p_1203->g_494;
        (1 + 1);
    }
    p_1203->g_510--;
    return l_513;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t * func_43(int64_t  p_44, int64_t  p_45, int64_t * p_46, struct S0 * p_1203)
{ /* block id: 28 */
    return &p_1203->g_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_61 p_1203->g_62
 * writes: p_1203->g_60 p_1203->g_62
 */
int64_t * func_49(uint8_t  p_50, uint32_t  p_51, struct S0 * p_1203)
{ /* block id: 20 */
    int32_t *l_53 = &p_1203->g_2[0][2];
    int32_t **l_55 = (void*)0;
    int32_t **l_56 = &l_53;
    int32_t l_57 = 0x53CC61BBL;
    uint32_t l_58 = 1UL;
    int32_t *l_59 = &p_1203->g_60;
    int64_t *l_63 = (void*)0;
    (*l_56) = l_53;
    l_58 ^= l_57;
    (*p_1203->g_61) &= ((*l_59) = (-8L));
    return l_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_37 p_1203->g_80 p_1203->g_83 p_1203->g_81 p_1203->g_2 p_1203->g_60 p_1203->g_62 p_1203->g_104 p_1203->g_20 p_1203->g_106 p_1203->g_91 p_1203->g_133 p_1203->g_129 p_1203->g_67 p_1203->g_148 p_1203->g_151 p_1203->g_144 p_1203->g_146 p_1203->g_173 p_1203->g_163 p_1203->g_194 p_1203->g_290 p_1203->g_292 p_1203->g_119 p_1203->g_320 p_1203->g_321 p_1203->g_61 p_1203->g_355 p_1203->g_457 p_1203->g_460 p_1203->g_492
 * writes: p_1203->g_91 p_1203->g_83 p_1203->g_80 p_1203->g_119 p_1203->g_20 p_1203->g_129 p_1203->g_62 p_1203->g_144 p_1203->g_146 p_1203->g_148 p_1203->g_151 p_1203->g_163 p_1203->g_173 p_1203->g_37 p_1203->g_194 p_1203->g_290 p_1203->g_292 p_1203->g_321 p_1203->g_60 p_1203->g_81
 */
int32_t  func_70(int32_t  p_71, struct S0 * p_1203)
{ /* block id: 35 */
    int16_t l_82 = 1L;
    int32_t *l_172 = &p_1203->g_173;
    uint8_t *l_305 = &p_1203->g_194;
    int32_t l_395[7] = {0x6AD4B14AL,0x6AD4B14AL,0x6AD4B14AL,0x6AD4B14AL,0x6AD4B14AL,0x6AD4B14AL,0x6AD4B14AL};
    uint32_t l_406[7] = {1UL,0xFC251ACBL,1UL,1UL,0xFC251ACBL,1UL,1UL};
    int8_t *l_433 = &p_1203->g_119;
    int8_t **l_432 = &l_433;
    int i;
    (*l_172) |= func_73(p_1203->g_37, func_76(p_1203->g_80, l_82, p_1203->g_83, p_1203), p_1203);
    for (p_1203->g_37 = 0; (p_1203->g_37 < (-19)); p_1203->g_37 = safe_sub_func_int64_t_s_s(p_1203->g_37, 6))
    { /* block id: 72 */
        int16_t l_197 = 0x1D96L;
        int64_t *l_212 = &p_1203->g_91;
        int64_t **l_211 = &l_212;
        int16_t l_221 = 6L;
        int32_t l_245 = 0x79CE4C8BL;
        uint32_t l_275[6] = {0x88609A67L,0x88609A67L,0x88609A67L,0x88609A67L,0x88609A67L,0x88609A67L};
        uint64_t *l_280 = &p_1203->g_146[3];
        int8_t *l_314 = (void*)0;
        int32_t l_386 = 1L;
        int32_t l_402 = (-3L);
        int32_t l_403 = (-6L);
        int32_t l_404 = 0x28BD9216L;
        int32_t l_405[9];
        uint16_t *l_421 = &p_1203->g_290[1][1][0];
        int64_t l_429 = 1L;
        int32_t *l_463 = &l_402;
        uint64_t *l_487 = &p_1203->g_146[0];
        int i;
        for (i = 0; i < 9; i++)
            l_405[i] = 1L;
        for (l_82 = (-1); (l_82 == 0); l_82++)
        { /* block id: 75 */
            uint16_t *l_178 = &p_1203->g_163;
            int32_t l_181 = 0x517A9B7EL;
            uint8_t *l_193 = &p_1203->g_194;
            int32_t *l_198 = &l_181;
            int32_t *l_331 = &p_1203->g_173;
            int32_t *l_332 = &p_1203->g_60;
            uint16_t l_385[1];
            int32_t l_396 = 0L;
            int32_t l_397 = 0x57F9CF41L;
            int32_t l_398 = 0x37FDE957L;
            int32_t l_399 = 0x7325FCA0L;
            int32_t l_400 = 0x44371613L;
            int32_t l_401[7] = {0x7B45C48BL,0x7B45C48BL,0x7B45C48BL,0x7B45C48BL,0x7B45C48BL,0x7B45C48BL,0x7B45C48BL};
            uint8_t **l_448 = (void*)0;
            uint8_t ***l_447[10] = {&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448};
            uint32_t l_458 = 4294967286UL;
            int i;
            for (i = 0; i < 1; i++)
                l_385[i] = 0UL;
            (*l_198) = (p_71 != (((++(*l_178)) >= (l_181 , (safe_lshift_func_int8_t_s_s(p_1203->g_151, (!(safe_mul_func_uint8_t_u_u((((*l_172) = (safe_unary_minus_func_uint8_t_u(p_71))) | p_71), (safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_193) ^= (safe_rshift_func_uint8_t_u_s(p_1203->g_2[0][2], 1))), p_1203->g_83)), (((safe_mod_func_int32_t_s_s((*p_1203->g_133), 0x712EC71BL)) & p_71) , p_71)))))))))) && l_197));
            (*l_198) = ((void*)0 != &l_181);
            if (l_197)
            { /* block id: 81 */
                int64_t *l_210 = (void*)0;
                int64_t **l_209 = &l_210;
                int32_t l_219[6][8] = {{1L,1L,0x0E06A67EL,5L,5L,1L,5L,2L},{1L,1L,0x0E06A67EL,5L,5L,1L,5L,2L},{1L,1L,0x0E06A67EL,5L,5L,1L,5L,2L},{1L,1L,0x0E06A67EL,5L,5L,1L,5L,2L},{1L,1L,0x0E06A67EL,5L,5L,1L,5L,2L},{1L,1L,0x0E06A67EL,5L,5L,1L,5L,2L}};
                uint64_t *l_279[9][9][2] = {{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}},{{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151},{&p_1203->g_83,&p_1203->g_151}}};
                uint64_t **l_278[3][3][2] = {{{&l_279[4][5][0],&l_279[4][5][0]},{&l_279[4][5][0],&l_279[4][5][0]},{&l_279[4][5][0],&l_279[4][5][0]}},{{&l_279[4][5][0],&l_279[4][5][0]},{&l_279[4][5][0],&l_279[4][5][0]},{&l_279[4][5][0],&l_279[4][5][0]}},{{&l_279[4][5][0],&l_279[4][5][0]},{&l_279[4][5][0],&l_279[4][5][0]},{&l_279[4][5][0],&l_279[4][5][0]}}};
                uint32_t *l_281 = (void*)0;
                uint32_t *l_282 = &p_1203->g_144[0];
                uint16_t *l_289 = &p_1203->g_290[1][1][1];
                uint16_t *l_291 = &p_1203->g_292;
                uint16_t *l_293 = &p_1203->g_148;
                int16_t *l_294[1][10] = {{&l_82,&l_221,&l_197,&l_221,&l_82,&l_82,&l_221,&l_197,&l_221,&l_82}};
                int64_t l_306 = (-1L);
                int i, j, k;
                for (p_1203->g_148 = 0; (p_1203->g_148 > 2); p_1203->g_148++)
                { /* block id: 84 */
                    int8_t *l_220[1];
                    int16_t *l_238 = &l_197;
                    int32_t l_243 = 0x2DDD0333L;
                    int64_t *l_244 = (void*)0;
                    int64_t *l_246[4][8] = {{&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129},{&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129},{&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129},{&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129,&p_1203->g_129}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_220[i] = &p_1203->g_119;
                    (*l_198) |= ((safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(((*l_172) , (p_71 && (l_209 == l_211))), 0)) ^ (((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x583CL, 1)), (&p_1203->g_146[0] != &p_1203->g_151))) >= (1L && ((((p_1203->g_119 = (safe_sub_func_uint32_t_u_u(l_219[4][2], p_71))) || l_221) , &p_1203->g_119) != (void*)0))) <= p_1203->g_62[1][2])), 5L)), p_1203->g_83)), p_1203->g_144[0])) ^ 0x64FDF005L);
                    l_219[5][0] = ((l_243 = (l_245 |= (((0x18E7L <= p_71) >= ((((+(safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0L, ((safe_sub_func_uint8_t_u_u(p_71, p_71)) , (safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_221, (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u(((*l_238) = p_1203->g_151), 12)) != ((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(l_243, p_1203->g_20[2][0])) <= l_219[3][0]), (*p_1203->g_104))) >= p_71)) || 0x75526357L), 10)) == p_71), p_1203->g_144[0])))), p_1203->g_20[6][4]))))), p_71))) ^ 0x4AL) && 1L) , l_243)) > (*l_198)))) , 1L);
                }
                (*l_198) = (safe_div_func_int32_t_s_s(((l_219[2][3] = ((((safe_mod_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((*l_172) = ((safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((~((((safe_add_func_uint32_t_u_u(((((p_1203->g_119 ^= (safe_sub_func_int8_t_s_s((((*l_293) = ((*l_291) ^= (p_71 || ((((safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((--(*l_178)) ^ ((safe_lshift_func_uint16_t_u_u(l_275[1], 11)) || (safe_add_func_int32_t_s_s(((((!p_1203->g_148) ^ (l_210 != (l_280 = l_210))) , ((*l_282)++)) > 0x711DFE30L), (1UL != (((*l_289) ^= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_71, (l_219[4][2] != p_1203->g_20[3][5]))), p_1203->g_146[3])) | 1L)) , p_71)))))), l_219[4][2])), p_1203->g_146[0])), (*l_172))), l_275[1])) && (*l_172)) , p_71) | p_1203->g_83)))) | p_71), p_71))) == 0x0EL) && (*l_172)) > l_219[0][5]), p_71)) , p_71) & p_71) > p_71)), p_71)), p_1203->g_146[3])) & l_219[3][7])), p_71)), 0x0E6AF5DDL)) , p_1203->g_2[0][0]) != 0x443893D3L) , p_71), p_1203->g_83)) ^ l_219[5][5]) , l_219[4][2]) , p_1203->g_2[0][2])) > 0x7041L), p_1203->g_2[0][2]));
                (*l_172) |= l_219[4][2];
                (*l_172) ^= (p_71 == (safe_lshift_func_int16_t_s_s((p_1203->g_62[6][1] , ((*l_198) = (safe_mod_func_int64_t_s_s(p_71, (p_71 , ((safe_mul_func_int8_t_s_s(p_71, (safe_mod_func_uint32_t_u_u(0xB4755BD5L, (+(1L || ((safe_sub_func_int64_t_s_s(((l_193 != l_305) , l_219[1][2]), l_306)) ^ p_1203->g_290[1][1][1]))))))) , p_71)))))), 3)));
            }
            else
            { /* block id: 105 */
                int32_t ***l_319 = &p_1203->g_80;
                int32_t **l_328 = &l_198;
                int32_t **l_329 = (void*)0;
                int32_t **l_330[10] = {&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0],&p_1203->g_81[0]};
                int i;
                (*l_198) = (0L >= (((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u(p_1203->g_60)), (((safe_div_func_int16_t_s_s(7L, (safe_add_func_uint64_t_u_u((((void*)0 == l_314) == p_1203->g_292), p_71)))) == ((safe_sub_func_int64_t_s_s((+0L), ((safe_mul_func_int8_t_s_s((p_1203->g_62[6][1] | p_71), (*l_198))) == 0x48L))) < p_71)) != p_71))) != p_1203->g_83) , p_71));
                (*l_198) ^= 0x5F9CC065L;
                l_332 = (l_331 = ((*l_328) = func_76(((*l_319) = &l_198), p_1203->g_194, (((void*)0 == p_1203->g_320) | (l_245 = ((safe_add_func_uint16_t_u_u(p_71, (safe_sub_func_uint32_t_u_u(6UL, (0x28D96F55D181BC6CL ^ 0L))))) < (((safe_mul_func_uint8_t_u_u(p_1203->g_194, (-5L))) == p_1203->g_194) != (*l_198))))), p_1203)));
                (*l_172) = (safe_rshift_func_int8_t_s_s(0x53L, 5));
            }
            if ((((p_71 ^ (safe_lshift_func_int8_t_s_s(p_1203->g_62[0][0], 2))) <= ((((*p_1203->g_320) , (void*)0) != (void*)0) < 0xB16BC271L)) , ((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((((*l_172) = ((*p_1203->g_104) , ((p_71 && (safe_unary_minus_func_uint32_t_u(p_1203->g_321))) && (*l_331)))) || p_71), p_71)), (*l_332))) == p_1203->g_151)))
            { /* block id: 116 */
                int32_t **l_347 = &l_332;
                int32_t l_364 = 0L;
                int32_t *l_390 = (void*)0;
                int32_t *l_391 = &p_1203->g_173;
                int32_t *l_392 = &l_245;
                int32_t *l_393 = &p_1203->g_62[6][1];
                int32_t *l_394[6] = {&p_1203->g_60,&p_1203->g_60,&p_1203->g_60,&p_1203->g_60,&p_1203->g_60,&p_1203->g_60};
                int i;
                l_331 = l_172;
                for (p_1203->g_148 = 0; (p_1203->g_148 >= 14); p_1203->g_148 = safe_add_func_int64_t_s_s(p_1203->g_148, 9))
                { /* block id: 120 */
                    int32_t ***l_348 = &p_1203->g_346[0][1];
                    (*l_347) = &l_181;
                }
                for (p_1203->g_151 = 21; (p_1203->g_151 <= 32); p_1203->g_151 = safe_add_func_int16_t_s_s(p_1203->g_151, 4))
                { /* block id: 131 */
                    uint8_t l_367 = 251UL;
                    int16_t *l_384[1];
                    uint64_t *l_387 = &p_1203->g_83;
                    int64_t *l_389 = (void*)0;
                    int64_t **l_388 = &l_389;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_384[i] = (void*)0;
                    (*l_347) = (void*)0;
                    l_367--;
                    (*l_172) = ((((safe_mul_func_uint8_t_u_u(((((*l_172) >= (((*l_172) == p_71) >= (((*l_388) = func_49((safe_mul_func_int16_t_s_s(p_71, ((*p_1203->g_320) = ((*l_172) > (safe_rshift_func_uint16_t_u_u((((*l_387) |= (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_71, 15)), (l_385[0] = ((*l_172) <= ((*l_172) || ((safe_mod_func_int16_t_s_s(p_71, p_1203->g_146[1])) > 0x9EL)))))) | l_386) & p_71)) , 65529UL), p_1203->g_62[6][1])))))), p_1203->g_146[3], p_1203)) != (void*)0))) >= l_367) == p_71), 0x7DL)) , (*p_1203->g_320)) >= p_71) < l_367);
                    return p_71;
                }
                l_406[0]--;
            }
            else
            { /* block id: 142 */
                int32_t l_428 = 0x45F78BC2L;
                int32_t l_437 = 0L;
                int32_t **l_466 = &l_332;
                if (p_71)
                    break;
                if ((~((safe_lshift_func_uint16_t_u_u(65526UL, ((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_1203->g_129 && (safe_rshift_func_int8_t_s_u(((*p_1203->g_355) || (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((*l_172), (l_245 && ((((l_421 != (void*)0) || p_1203->g_290[1][1][1]) | ((safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0x45AB58A1L, l_428)), p_71)) | 0x05L) == p_71), l_428)) && (*p_1203->g_355))) , l_429)))), 7))), 4))), 0x6563L)), p_1203->g_146[1])) , 0xBBE3L))) | 0xE0L)))
                { /* block id: 144 */
                    uint32_t l_440 = 6UL;
                    int32_t l_454 = 1L;
                    for (l_429 = 6; (l_429 >= 21); ++l_429)
                    { /* block id: 147 */
                        int8_t ***l_434 = &l_432;
                        (*l_434) = l_432;
                    }
                    for (p_1203->g_83 = 2; (p_1203->g_83 <= 8); p_1203->g_83 += 1)
                    { /* block id: 152 */
                        uint8_t **l_435 = &l_305;
                        uint8_t ***l_436 = &l_435;
                        int32_t *l_438 = &p_1203->g_60;
                        int32_t *l_439[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_439[i] = (void*)0;
                        (*l_172) = 0L;
                        (*l_436) = l_435;
                        --l_440;
                    }
                    l_454 = (p_71 < ((safe_add_func_int64_t_s_s(0x6CEEBD542BDA7D39L, (((*p_1203->g_355) = ((safe_mul_func_int8_t_s_s(((void*)0 == l_447[1]), (*p_1203->g_355))) & ((*l_172) ^= ((safe_add_func_uint16_t_u_u(l_440, (p_1203->g_2[1][6] <= (!(safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u((p_1203->g_2[0][4] > p_1203->g_129), p_71)))))))) >= 0x52L)))) && (*p_1203->g_355)))) >= 0UL));
                    for (l_399 = 0; (l_399 > 5); l_399++)
                    { /* block id: 162 */
                        (*l_172) = ((&p_1203->g_80 == &p_1203->g_346[0][1]) , 1L);
                        (*p_1203->g_457) = &l_398;
                        return p_71;
                    }
                }
                else
                { /* block id: 167 */
                    (*l_172) = (**p_1203->g_457);
                    l_437 = l_458;
                    (*l_172) |= p_71;
                    return (*l_331);
                }
                if (((void*)0 != &p_1203->g_106))
                { /* block id: 173 */
                    int32_t *l_459 = &p_1203->g_62[6][1];
                    (*p_1203->g_460) = l_459;
                }
                else
                { /* block id: 175 */
                    int8_t ***l_467 = &l_432;
                    int32_t l_474 = 0x4C9B57DBL;
                    int32_t **l_475 = &l_198;
                    for (p_1203->g_292 = 0; (p_1203->g_292 <= 36); p_1203->g_292++)
                    { /* block id: 178 */
                        int32_t *l_464 = (void*)0;
                        int32_t **l_465 = &l_463;
                        l_463 = &l_386;
                        (*l_465) = l_464;
                    }
                    (*l_466) = &l_399;
                    for (p_1203->g_60 = (-4); (p_1203->g_60 >= 3); p_1203->g_60 = safe_add_func_uint32_t_u_u(p_1203->g_60, 7))
                    { /* block id: 185 */
                        int32_t ***l_476 = &p_1203->g_80;
                        l_474 = 8L;
                        (*l_466) = func_76(((*l_476) = l_475), p_71, (&p_1203->g_144[0] != (void*)0), p_1203);
                        (*p_1203->g_80) = &l_181;
                    }
                }
            }
        }
        (*p_1203->g_492) = (!(safe_div_func_int64_t_s_s((~((**l_211) = (safe_lshift_func_uint16_t_u_u(0x2645L, (safe_sub_func_int8_t_s_s(((p_71 <= ((void*)0 != (*l_432))) & (((p_71 , ((*l_172) = (p_1203->g_119 = (((((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((+(p_71 < ((*l_487)++))) & (p_71 , ((((safe_rshift_func_int8_t_s_s(0x63L, 5)) < (((5L <= 1L) && p_1203->g_119) == 6UL)) , p_71) < 0x0938E5F9E5850E0AL))), 0x7322L)), (*l_172))) < 6UL) & (*p_1203->g_67)) & (*l_172)) , p_71)))) , p_71) < p_1203->g_91)), p_71)))))), p_71)));
    }
    return (**p_1203->g_457);
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_83 p_1203->g_106 p_1203->g_60 p_1203->g_2 p_1203->g_91 p_1203->g_62 p_1203->g_133 p_1203->g_129 p_1203->g_67 p_1203->g_20 p_1203->g_148 p_1203->g_151 p_1203->g_144 p_1203->g_146
 * writes: p_1203->g_83 p_1203->g_80 p_1203->g_119 p_1203->g_20 p_1203->g_129 p_1203->g_62 p_1203->g_144 p_1203->g_146 p_1203->g_148 p_1203->g_151 p_1203->g_163
 */
int32_t  func_73(uint64_t  p_74, int32_t * p_75, struct S0 * p_1203)
{ /* block id: 42 */
    uint8_t l_127[8];
    int64_t *l_131 = &p_1203->g_91;
    int64_t **l_130 = &l_131;
    int32_t l_153 = 0x74F27BABL;
    int i;
    for (i = 0; i < 8; i++)
        l_127[i] = 0xADL;
    for (p_1203->g_83 = 0; (p_1203->g_83 <= 9); p_1203->g_83 += 1)
    { /* block id: 45 */
        int64_t *l_108 = &p_1203->g_91;
        int64_t **l_107 = &l_108;
        int32_t ***l_111 = (void*)0;
        int32_t ****l_112 = (void*)0;
        int32_t ****l_113 = &l_111;
        int8_t *l_118 = &p_1203->g_119;
        uint32_t *l_126 = &p_1203->g_20[1][6];
        int64_t *l_128 = &p_1203->g_129;
        int32_t *l_132 = (void*)0;
        uint64_t *l_145 = &p_1203->g_146[0];
        uint16_t *l_147 = &p_1203->g_148;
        uint64_t *l_149 = (void*)0;
        uint64_t *l_150 = &p_1203->g_151;
        int32_t *l_152[9][1][8] = {{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}},{{&p_1203->g_60,&p_1203->g_60,&p_1203->g_62[6][2],&p_1203->g_2[0][4],&p_1203->g_2[1][4],&p_1203->g_2[0][2],&p_1203->g_62[6][1],&p_1203->g_62[6][2]}}};
        int i, j, k;
        (*p_1203->g_106) = &p_75;
        l_107 = (void*)0;
        (*p_1203->g_133) = (safe_mul_func_int16_t_s_s((((p_1203->g_60 , &p_1203->g_54) == ((*l_113) = l_111)) == (*p_75)), (safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((((((*l_118) = 0x72L) == 0x7FL) | ((((*l_128) = (safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s(0x4E18E90175C14C05L, (((safe_add_func_uint32_t_u_u(((*l_126) = p_74), (p_74 || 0x5CADL))) | l_127[4]) , p_1203->g_91))), p_1203->g_62[1][1]))) , l_130) == (void*)0)) >= p_74) >= p_1203->g_60), (-1L))), l_127[0]))));
        l_153 &= (p_1203->g_129 | ((*l_150) ^= (safe_sub_func_int64_t_s_s((-8L), (((safe_sub_func_uint16_t_u_u(((*l_147) |= (safe_mul_func_int16_t_s_s((-10L), ((p_74 == 0xBA0EL) ^ (p_74 , ((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((((&p_1203->g_129 == (((-6L) | ((*l_145) = (p_1203->g_144[0] = ((*p_1203->g_67) != p_1203->g_20[6][5])))) , l_131)) ^ 0xFCDD685BL) == p_74) , 0x63L), 0x64L)) , 7L), l_127[2])) , 0x33E7L)))))), l_127[4])) | 0UL) == p_74)))));
        for (p_1203->g_129 = 9; (p_1203->g_129 >= 2); p_1203->g_129 -= 1)
        { /* block id: 60 */
            int32_t l_156 = (-6L);
            int i, j;
            l_153 |= (((((p_1203->g_20[p_1203->g_83][p_1203->g_129] && (((*p_1203->g_133) >= ((l_156 = (safe_lshift_func_uint8_t_u_u(l_127[6], 3))) || (safe_mod_func_uint64_t_u_u((p_74 |= (((safe_sub_func_int8_t_s_s((p_1203->g_163 = ((*l_118) = (safe_rshift_func_uint8_t_u_s(l_156, 2)))), (safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_156 | ((safe_mod_func_int8_t_s_s(p_1203->g_151, p_1203->g_144[0])) <= (safe_add_func_uint16_t_u_u(((((void*)0 == &p_75) , p_1203->g_129) > p_1203->g_144[0]), p_1203->g_148)))), l_156)), l_127[4])))) & p_1203->g_146[0]) , 9UL)), p_1203->g_20[p_1203->g_83][p_1203->g_129])))) > p_1203->g_144[0])) , p_74) , (void*)0) != (*l_130)) && l_156);
        }
    }
    return (*p_1203->g_133);
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_80 p_1203->g_81 p_1203->g_2 p_1203->g_60 p_1203->g_62 p_1203->g_104 p_1203->g_20 p_1203->g_895
 * writes: p_1203->g_91
 */
int32_t * func_76(int32_t ** p_77, uint8_t  p_78, uint64_t  p_79, struct S0 * p_1203)
{ /* block id: 36 */
    int32_t *l_84 = (void*)0;
    int32_t *l_85[10] = {&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1],&p_1203->g_62[6][1]};
    uint32_t l_86 = 0x7EE9F729L;
    int32_t l_89 = 0x49D718ABL;
    int64_t *l_90[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_105 = 0x48E5C97493B57629L;
    int i;
    p_77 = &p_1203->g_81[1];
    l_86 &= (**p_1203->g_80);
    l_105 ^= (p_79 == ((p_1203->g_91 = (safe_sub_func_int16_t_s_s(p_1203->g_2[0][2], l_89))) | (((safe_lshift_func_int8_t_s_u(((**p_77) >= p_1203->g_60), 1)) , (p_78 >= (safe_div_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u(p_1203->g_62[4][2], (safe_sub_func_int32_t_s_s(0x3C549E5CL, ((((safe_mul_func_int16_t_s_s(((p_1203->g_62[6][1] || p_1203->g_62[6][1]) != 0xD0093E2CL), p_79)) , l_90[1]) == p_1203->g_104) || 0xE1L))))) <= 0UL), (-1L))) , p_79), p_1203->g_20[7][2])))) ^ p_78)));
    return (*p_77);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1204;
    struct S0* p_1203 = &c_1204;
    struct S0 c_1205 = {
        {{0x24F84B81L,0x24F84B81L,0x0C0AA39EL,0x171C1EC2L,0x178F3C34L,0x171C1EC2L,0x0C0AA39EL},{0x24F84B81L,0x24F84B81L,0x0C0AA39EL,0x171C1EC2L,0x178F3C34L,0x171C1EC2L,0x0C0AA39EL}}, // p_1203->g_2
        {{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4UL,0UL,1UL,0x09AB83EBL,0x05243B9CL,0UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}}, // p_1203->g_20
        {0x668CDE333B8FBA32L,0x668CDE333B8FBA32L,0x668CDE333B8FBA32L,0x668CDE333B8FBA32L,0x668CDE333B8FBA32L}, // p_1203->g_29
        1L, // p_1203->g_37
        (void*)0, // p_1203->g_54
        8L, // p_1203->g_60
        {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}, // p_1203->g_62
        &p_1203->g_62[6][1], // p_1203->g_61
        &p_1203->g_2[0][2], // p_1203->g_67
        {&p_1203->g_2[0][2],&p_1203->g_2[0][2],&p_1203->g_2[0][2],&p_1203->g_2[0][2],&p_1203->g_2[0][2],&p_1203->g_2[0][2],&p_1203->g_2[0][2],&p_1203->g_2[0][2],&p_1203->g_2[0][2]}, // p_1203->g_81
        &p_1203->g_81[7], // p_1203->g_80
        1UL, // p_1203->g_83
        (-2L), // p_1203->g_91
        &p_1203->g_37, // p_1203->g_104
        &p_1203->g_80, // p_1203->g_106
        (-2L), // p_1203->g_119
        1L, // p_1203->g_129
        &p_1203->g_62[3][1], // p_1203->g_133
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_1203->g_144
        {0x7468A156A7B95841L,0x7468A156A7B95841L,0x7468A156A7B95841L,0x7468A156A7B95841L}, // p_1203->g_146
        0UL, // p_1203->g_148
        0x0928FA46B62C38B1L, // p_1203->g_151
        0x590BL, // p_1203->g_163
        (-3L), // p_1203->g_173
        0x17L, // p_1203->g_194
        {{{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L}},{{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L},{0x263CL,0x9FF2L}}}, // p_1203->g_290
        0x1140L, // p_1203->g_292
        8L, // p_1203->g_321
        &p_1203->g_321, // p_1203->g_320
        {{&p_1203->g_81[7],&p_1203->g_81[7],&p_1203->g_81[7],&p_1203->g_81[7],&p_1203->g_81[7],&p_1203->g_81[7],&p_1203->g_81[7]}}, // p_1203->g_346
        &p_1203->g_194, // p_1203->g_355
        &p_1203->g_81[0], // p_1203->g_457
        &p_1203->g_81[7], // p_1203->g_460
        &p_1203->g_62[6][1], // p_1203->g_492
        0x2A6517F6L, // p_1203->g_494
        (-6L), // p_1203->g_506
        4294967295UL, // p_1203->g_510
        18446744073709551611UL, // p_1203->g_581
        0x74L, // p_1203->g_595
        &p_1203->g_595, // p_1203->g_594
        &p_1203->g_594, // p_1203->g_593
        (void*)0, // p_1203->g_596
        0x13A806DEL, // p_1203->g_602
        0x12L, // p_1203->g_651
        {0x3E090AADA7C75178L,0x3E090AADA7C75178L}, // p_1203->g_667
        {0L,0L,0L}, // p_1203->g_668
        5L, // p_1203->g_677
        0xF7F099C0L, // p_1203->g_679
        0x7BL, // p_1203->g_686
        6L, // p_1203->g_753
        &p_1203->g_60, // p_1203->g_765
        0x49E01041L, // p_1203->g_769
        (void*)0, // p_1203->g_779
        7UL, // p_1203->g_784
        {{(void*)0,&p_1203->g_355,(void*)0,&p_1203->g_355,(void*)0},{(void*)0,&p_1203->g_355,(void*)0,&p_1203->g_355,(void*)0},{(void*)0,&p_1203->g_355,(void*)0,&p_1203->g_355,(void*)0},{(void*)0,&p_1203->g_355,(void*)0,&p_1203->g_355,(void*)0},{(void*)0,&p_1203->g_355,(void*)0,&p_1203->g_355,(void*)0}}, // p_1203->g_818
        &p_1203->g_818[0][0], // p_1203->g_817
        {&p_1203->g_346[0][1],&p_1203->g_346[0][1],&p_1203->g_346[0][1],&p_1203->g_346[0][1]}, // p_1203->g_822
        &p_1203->g_822[1], // p_1203->g_821
        &p_1203->g_822[1], // p_1203->g_823
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_1203->g_825
        {{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL},{0x5F89C2F682357CF4L,0x10EE3DA6EEED474DL,0x4AC11A695EB72E7FL,0x5F89C2F682357CF4L,0x7D949D2C068A8860L,0x4AC11A695EB72E7FL,0x4AC11A695EB72E7FL}}, // p_1203->g_849
        &p_1203->g_29[2], // p_1203->g_869
        {0L,0L,0L,0L,0L,0L,0L,0L}, // p_1203->g_894
        0x13CB1FCAL, // p_1203->g_895
        1UL, // p_1203->g_1017
        &p_1203->g_119, // p_1203->g_1043
        {{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043},{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043},{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043},{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043},{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043},{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043},{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043},{&p_1203->g_1043,&p_1203->g_1043,(void*)0,&p_1203->g_1043,&p_1203->g_1043}}, // p_1203->g_1042
        &p_1203->g_1042[7][1], // p_1203->g_1041
        &p_1203->g_1041, // p_1203->g_1040
        0x31C0091BCA698553L, // p_1203->g_1088
        (-1L), // p_1203->g_1101
        (void*)0, // p_1203->g_1121
        {{{&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121},{&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121,&p_1203->g_1121}}}, // p_1203->g_1120
    };
    c_1204 = c_1205;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1203);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1203->g_2[i][j], "p_1203->g_2[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1203->g_20[i][j], "p_1203->g_20[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1203->g_29[i], "p_1203->g_29[i]", print_hash_value);

    }
    transparent_crc(p_1203->g_37, "p_1203->g_37", print_hash_value);
    transparent_crc(p_1203->g_60, "p_1203->g_60", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1203->g_62[i][j], "p_1203->g_62[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1203->g_83, "p_1203->g_83", print_hash_value);
    transparent_crc(p_1203->g_91, "p_1203->g_91", print_hash_value);
    transparent_crc(p_1203->g_119, "p_1203->g_119", print_hash_value);
    transparent_crc(p_1203->g_129, "p_1203->g_129", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1203->g_144[i], "p_1203->g_144[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1203->g_146[i], "p_1203->g_146[i]", print_hash_value);

    }
    transparent_crc(p_1203->g_148, "p_1203->g_148", print_hash_value);
    transparent_crc(p_1203->g_151, "p_1203->g_151", print_hash_value);
    transparent_crc(p_1203->g_163, "p_1203->g_163", print_hash_value);
    transparent_crc(p_1203->g_173, "p_1203->g_173", print_hash_value);
    transparent_crc(p_1203->g_194, "p_1203->g_194", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1203->g_290[i][j][k], "p_1203->g_290[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1203->g_292, "p_1203->g_292", print_hash_value);
    transparent_crc(p_1203->g_321, "p_1203->g_321", print_hash_value);
    transparent_crc(p_1203->g_494, "p_1203->g_494", print_hash_value);
    transparent_crc(p_1203->g_506, "p_1203->g_506", print_hash_value);
    transparent_crc(p_1203->g_510, "p_1203->g_510", print_hash_value);
    transparent_crc(p_1203->g_581, "p_1203->g_581", print_hash_value);
    transparent_crc(p_1203->g_595, "p_1203->g_595", print_hash_value);
    transparent_crc(p_1203->g_602, "p_1203->g_602", print_hash_value);
    transparent_crc(p_1203->g_651, "p_1203->g_651", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1203->g_667[i], "p_1203->g_667[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1203->g_668[i], "p_1203->g_668[i]", print_hash_value);

    }
    transparent_crc(p_1203->g_677, "p_1203->g_677", print_hash_value);
    transparent_crc(p_1203->g_679, "p_1203->g_679", print_hash_value);
    transparent_crc(p_1203->g_686, "p_1203->g_686", print_hash_value);
    transparent_crc(p_1203->g_753, "p_1203->g_753", print_hash_value);
    transparent_crc(p_1203->g_769, "p_1203->g_769", print_hash_value);
    transparent_crc(p_1203->g_784, "p_1203->g_784", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1203->g_825[i], "p_1203->g_825[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1203->g_849[i][j], "p_1203->g_849[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1203->g_894[i], "p_1203->g_894[i]", print_hash_value);

    }
    transparent_crc(p_1203->g_895, "p_1203->g_895", print_hash_value);
    transparent_crc(p_1203->g_1017, "p_1203->g_1017", print_hash_value);
    transparent_crc(p_1203->g_1088, "p_1203->g_1088", print_hash_value);
    transparent_crc(p_1203->g_1101, "p_1203->g_1101", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
