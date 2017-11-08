// -g 69,35,1 -l 23,5,1
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


// Seed: 2968463444

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    uint32_t g_16[5][7];
    uint16_t g_21;
    volatile int16_t g_28;
    volatile uint16_t g_30;
    volatile uint16_t *g_29;
    uint32_t *g_36[10];
    uint16_t g_57[1];
    int16_t g_81;
    int32_t g_87;
    int32_t g_90[9];
    uint32_t g_139;
    uint8_t g_147;
    int32_t g_178;
    uint32_t g_201;
    int32_t g_203;
    volatile int32_t ** volatile g_207;
    volatile int32_t ** volatile *g_206[5];
    uint64_t g_212;
    int8_t g_240;
    uint16_t *g_256;
    uint64_t g_277;
    uint32_t g_306;
    int64_t g_332;
    int8_t g_334[7][9][4];
    int32_t g_393;
    int64_t *g_407;
    int8_t *g_419[9];
    int8_t **g_418;
    int32_t *g_478;
    int32_t **g_477;
    int32_t ***g_476;
    int32_t ****g_475;
    int32_t *g_596;
    int32_t g_598;
    int16_t *g_704;
    int16_t g_755[3];
    int64_t g_889;
    uint16_t g_903;
    int16_t g_931;
    int32_t g_948;
    uint16_t g_996;
    int64_t g_1063;
    uint32_t g_1064;
    volatile int64_t **g_1072;
    int32_t g_1101;
    int32_t g_1127;
    uint16_t g_1132;
    int32_t g_1134[5][9];
    int32_t *g_1153[6][5];
    uint64_t g_1254;
    uint8_t g_1373[1];
    int8_t g_1375[2];
    int8_t g_1427;
    int64_t ***g_1438;
    volatile int32_t g_1522;
    volatile uint32_t g_1534;
    volatile uint32_t *g_1533;
    volatile uint32_t ** volatile g_1532[5];
    int32_t ** volatile g_1559;
    int32_t ** volatile g_1576;
    int32_t ** volatile g_1577;
    int32_t * volatile g_1628;
    int32_t * volatile g_1629;
    int32_t * volatile g_1632;
    int32_t *g_1691[7];
    volatile uint32_t g_1697;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_1719);
uint64_t  func_11(uint32_t  p_12, uint32_t  p_13, struct S0 * p_1719);
int8_t  func_33(int32_t  p_34, int8_t  p_35, struct S0 * p_1719);
uint8_t  func_37(uint64_t  p_38, struct S0 * p_1719);
uint64_t  func_39(int64_t  p_40, uint64_t  p_41, struct S0 * p_1719);
int8_t  func_45(int32_t * p_46, int16_t  p_47, uint32_t * p_48, struct S0 * p_1719);
uint32_t * func_50(uint32_t  p_51, uint16_t * p_52, uint32_t  p_53, int32_t  p_54, int64_t  p_55, struct S0 * p_1719);
uint64_t  func_62(int64_t  p_63, int16_t  p_64, int32_t  p_65, uint32_t  p_66, struct S0 * p_1719);
uint16_t  func_72(uint32_t * p_73, struct S0 * p_1719);
uint32_t * func_74(uint32_t  p_75, struct S0 * p_1719);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1719->g_2 p_1719->g_21 p_1719->g_28 p_1719->g_29 p_1719->g_16 p_1719->g_57 p_1719->g_90 p_1719->g_87 p_1719->g_139 p_1719->g_147 p_1719->g_81 p_1719->g_178 p_1719->g_201 p_1719->g_203 p_1719->g_206 p_1719->g_212 p_1719->g_277 p_1719->g_256 p_1719->g_306 p_1719->g_418 p_1719->g_407 p_1719->g_332 p_1719->g_1063 p_1719->g_948 p_1719->g_475 p_1719->g_476 p_1719->g_477 p_1719->g_1101 p_1719->g_419 p_1719->g_334 p_1719->g_240 p_1719->g_903 p_1719->g_598 p_1719->g_1127 p_1719->g_1134 p_1719->g_596 p_1719->g_393 p_1719->g_1254 p_1719->g_1132 p_1719->g_478 p_1719->g_1375 p_1719->g_1427 p_1719->g_1373 p_1719->g_1438 p_1719->g_889 p_1719->g_755 p_1719->g_30 p_1719->g_1532 p_1719->g_1559 p_1719->g_931 p_1719->g_1153 p_1719->g_1577 p_1719->g_1533 p_1719->g_1534 p_1719->g_1628 p_1719->g_1697 p_1719->g_996
 * writes: p_1719->g_2 p_1719->g_16 p_1719->g_21 p_1719->g_36 p_1719->g_81 p_1719->g_87 p_1719->g_90 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_57 p_1719->g_201 p_1719->g_203 p_1719->g_212 p_1719->g_240 p_1719->g_256 p_1719->g_277 p_1719->g_306 p_1719->g_332 p_1719->g_1063 p_1719->g_419 p_1719->g_596 p_1719->g_1101 p_1719->g_903 p_1719->g_996 p_1719->g_1064 p_1719->g_1132 p_1719->g_1153 p_1719->g_755 p_1719->g_393 p_1719->g_598 p_1719->g_948 p_1719->g_1127 p_1719->g_1254 p_1719->g_334 p_1719->g_1373 p_1719->g_1375 p_1719->g_1427 p_1719->g_478 p_1719->g_1691 p_1719->g_931
 */
uint32_t  func_1(struct S0 * p_1719)
{ /* block id: 4 */
    uint32_t l_1564[5][6][7] = {{{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL}},{{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL}},{{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL}},{{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL}},{{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL},{1UL,7UL,1UL,0xCE8721A9L,4294967295UL,4294967295UL,1UL}}};
    uint32_t l_1568 = 0xD96B1486L;
    int32_t l_1569[7] = {0x18C2B147L,0x18C2B147L,0x18C2B147L,0x18C2B147L,0x18C2B147L,0x18C2B147L,0x18C2B147L};
    int32_t *l_1608[6] = {&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87};
    uint64_t l_1621 = 0x90E5BC0CD01E6CDCL;
    int16_t *l_1625[6] = {&p_1719->g_931,&p_1719->g_931,&p_1719->g_931,&p_1719->g_931,&p_1719->g_931,&p_1719->g_931};
    int16_t l_1690 = 0x3F68L;
    uint16_t l_1710[6] = {0x3077L,1UL,0x3077L,0x3077L,1UL,0x3077L};
    int32_t **l_1718 = &p_1719->g_596;
    int i, j, k;
    for (p_1719->g_2 = 23; (p_1719->g_2 != 22); p_1719->g_2 = safe_sub_func_int32_t_s_s(p_1719->g_2, 1))
    { /* block id: 7 */
        uint32_t l_14 = 1UL;
        uint32_t *l_15 = &p_1719->g_16[3][3];
        int32_t ****l_1565 = &p_1719->g_476;
        int32_t *l_1570 = &p_1719->g_203;
        (*l_1570) = (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_1569[2] = (safe_sub_func_uint64_t_u_u(func_11(l_14, ((*l_15) = 4294967295UL), p_1719), ((((l_1564[1][5][2] & (((void*)0 != l_1565) == l_14)) == (((safe_div_func_int8_t_s_s(l_1564[2][0][6], (l_1568 , 0x37L))) , p_1719->g_1134[1][0]) <= p_1719->g_1134[2][1])) | l_1564[1][5][2]) >= l_1568)))), p_1719->g_1134[0][8])), p_1719->g_931));
    }
    for (p_1719->g_201 = (-13); (p_1719->g_201 < 10); p_1719->g_201 = safe_add_func_int8_t_s_s(p_1719->g_201, 5))
    { /* block id: 752 */
        int32_t **l_1573 = (void*)0;
        int32_t **l_1574 = &p_1719->g_1153[1][1];
        int32_t **l_1575 = (void*)0;
        (*p_1719->g_1577) = ((*l_1574) = (*p_1719->g_1559));
    }
    for (p_1719->g_201 = 0; (p_1719->g_201 <= 3); p_1719->g_201 += 1)
    { /* block id: 758 */
        int32_t l_1578 = 0x0581F660L;
        uint64_t l_1672 = 0xFBFC7645D9AC54E0L;
        int32_t l_1680 = 0x5C09E455L;
        uint32_t l_1682 = 0x175F9CA0L;
        uint32_t l_1687 = 0x74EF70ACL;
        int8_t l_1713 = 0L;
        if (l_1578)
            break;
        if (l_1564[0][3][3])
            break;
        for (l_1568 = 0; (l_1568 <= 3); l_1568 += 1)
        { /* block id: 763 */
            uint32_t l_1587 = 5UL;
            uint64_t l_1609[2][10][8] = {{{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL}},{{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL},{4UL,0UL,0x343BBF281ACE682DL,0xB8666531B616CCFCL,2UL,0xB8666531B616CCFCL,0x343BBF281ACE682DL,0UL}}};
            int8_t l_1610 = 1L;
            int16_t *l_1622 = &p_1719->g_931;
            int32_t l_1627 = 0x44B91B9DL;
            int32_t l_1678 = 0x06DBE49CL;
            int32_t *l_1692 = &p_1719->g_598;
            int i, j, k;
            for (p_1719->g_81 = 0; (p_1719->g_81 <= 3); p_1719->g_81 += 1)
            { /* block id: 766 */
                for (p_1719->g_147 = 0; (p_1719->g_147 <= 3); p_1719->g_147 += 1)
                { /* block id: 769 */
                    int32_t *l_1579 = (void*)0;
                    int32_t *l_1580 = &p_1719->g_2;
                    (*l_1580) = 1L;
                }
            }
            if ((p_1719->g_1101 , ((*p_1719->g_1533) | ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((l_1569[5] ^ (((safe_mul_func_int8_t_s_s(((((*p_1719->g_407) &= (((l_1587 <= (((((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((*p_1719->g_256) & (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(((&p_1719->g_306 == (void*)0) , (safe_div_func_uint8_t_u_u((p_1719->g_203 | (((**p_1719->g_476) = (***p_1719->g_475)) == l_1608[1])), l_1578))), 0x18961E2276C09AB9L)) > l_1578), 0L))), 2)), 3)) , (-1L)) && 18446744073709551608UL) != p_1719->g_201), 0x4DE5744E2FAD0EF4L)), 65526UL)) | 0x61BE8CE9L), 5)), l_1569[2])) >= l_1587) && l_1569[2]) == l_1564[4][4][0]) | l_1587)) , 0UL) & l_1564[1][0][1])) | l_1564[4][4][0]) , l_1569[2]), 0x4CL)) | 0x47BCL) != p_1719->g_393)), l_1569[5])), l_1578)) || l_1609[1][9][3]))))
            { /* block id: 775 */
                uint16_t l_1613 = 0UL;
                int32_t *l_1620 = (void*)0;
                if ((l_1610 != ((safe_mod_func_uint64_t_u_u(l_1578, (((*p_1719->g_1533) < l_1613) ^ (((*p_1719->g_407) = (*p_1719->g_407)) & (p_1719->g_87 >= (safe_mod_func_uint16_t_u_u(l_1569[3], (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((l_1621 |= (((void*)0 == (**p_1719->g_475)) >= l_1587)) ^ l_1564[1][5][2]) != 3UL), l_1569[2])), p_1719->g_90[6]))))))))) != l_1587)))
                { /* block id: 778 */
                    int16_t **l_1623 = (void*)0;
                    int16_t **l_1624 = &l_1622;
                    int32_t *l_1626 = &p_1719->g_90[0];
                    (*p_1719->g_1628) &= (l_1627 |= ((*l_1626) = (((*l_1624) = l_1622) == l_1625[4])));
                }
                else
                { /* block id: 783 */
                    return l_1621;
                }
            }
            else
            { /* block id: 786 */
                int32_t *l_1634 = (void*)0;
                int32_t *l_1635 = (void*)0;
                int32_t *l_1636 = &p_1719->g_948;
                int32_t *l_1637[6][8][5] = {{{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]}},{{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]}},{{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]}},{{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]}},{{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]}},{{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]},{&p_1719->g_1127,&p_1719->g_90[0],(void*)0,&p_1719->g_203,&p_1719->g_90[4]}}};
                uint8_t l_1638 = 0xC5L;
                int i, j, k;
                for (l_1627 = 8; (l_1627 >= 3); l_1627 -= 1)
                { /* block id: 789 */
                    int32_t *l_1630 = (void*)0;
                    int32_t *l_1631 = (void*)0;
                    int32_t l_1633 = 0x75CB5BC9L;
                    int i, j, k;
                    l_1633 = p_1719->g_334[(p_1719->g_201 + 1)][(l_1568 + 2)][l_1568];
                    if (l_1569[3])
                        continue;
                }
                l_1638++;
                for (p_1719->g_1254 = 0; (p_1719->g_1254 <= 3); p_1719->g_1254 += 1)
                { /* block id: 796 */
                    int i, j, k;
                    return p_1719->g_334[(p_1719->g_201 + 3)][(p_1719->g_1254 + 2)][p_1719->g_201];
                }
                (*l_1636) = ((l_1578 <= (safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((0x2BFCL || (safe_mul_func_int8_t_s_s(((l_1569[2] = 0x0DEBL) & (safe_lshift_func_uint8_t_u_u((p_1719->g_147 , l_1578), 1))), (safe_add_func_int8_t_s_s(l_1578, ((((safe_rshift_func_uint8_t_u_u(((0x1EL < (p_1719->g_201 < (0x2FC83E54L ^ l_1564[1][5][2]))) , 0UL), 6)) >= (*p_1719->g_29)) || p_1719->g_240) != (**p_1719->g_418))))))), l_1578)), (-1L)))) || 9UL);
            }
            for (p_1719->g_598 = 0; (p_1719->g_598 >= (-11)); p_1719->g_598 = safe_sub_func_int32_t_s_s(p_1719->g_598, 8))
            { /* block id: 804 */
                uint32_t l_1663[3][1][6] = {{{4294967294UL,1UL,1UL,4294967294UL,4294967294UL,1UL}},{{4294967294UL,1UL,1UL,4294967294UL,4294967294UL,1UL}},{{4294967294UL,1UL,1UL,4294967294UL,4294967294UL,1UL}}};
                uint32_t *l_1664 = (void*)0;
                uint16_t l_1670 = 0xE78BL;
                uint8_t *l_1671 = &p_1719->g_1373[0];
                int32_t l_1677[5][4][6] = {{{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L}},{{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L}},{{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L}},{{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L}},{{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L},{0x6A6CE8CFL,1L,1L,0x6A6CE8CFL,0x01083100L,0x14E008D6L}}};
                int16_t l_1679 = 0L;
                int32_t l_1681[4][3][9] = {{{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L}},{{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L}},{{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L}},{{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L},{1L,(-3L),(-3L),0x10537FC2L,(-10L),1L,0x10537FC2L,0x104579A2L,0x10537FC2L}}};
                int32_t **l_1693 = &p_1719->g_1153[0][1];
                int32_t **l_1694 = &p_1719->g_596;
                uint16_t *l_1711 = &p_1719->g_996;
                int32_t *l_1712[10][9] = {{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]},{&l_1677[4][3][2],&p_1719->g_1127,&p_1719->g_2,&p_1719->g_1134[0][2],&p_1719->g_1134[3][1],&l_1677[4][3][2],&p_1719->g_1134[0][2],&p_1719->g_2,&p_1719->g_1134[0][2]}};
                uint32_t *l_1714 = (void*)0;
                uint32_t *l_1715 = &l_1682;
                int i, j, k;
                if ((l_1672 ^= (p_1719->g_28 || (((*p_1719->g_256)--) != (safe_mod_func_int8_t_s_s((**p_1719->g_418), (safe_mul_func_uint8_t_u_u(((l_1627 = l_1663[2][0][1]) < ((safe_rshift_func_uint16_t_u_s((((p_1719->g_147 , 5L) != l_1609[1][9][3]) , l_1609[1][9][3]), (~l_1663[2][0][1]))) , (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((((((*l_1671) = (0L == l_1670)) , l_1609[1][9][3]) & l_1564[1][5][2]) <= p_1719->g_1375[1]))), 0x445FF195L)))), l_1578))))))))
                { /* block id: 809 */
                    int32_t l_1673[8][8] = {{0L,1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L,1L}};
                    int32_t *l_1674 = (void*)0;
                    int32_t *l_1675 = &p_1719->g_203;
                    int32_t *l_1676[8];
                    int i, j;
                    for (i = 0; i < 8; i++)
                        l_1676[i] = &l_1569[2];
                    l_1673[6][7] ^= ((*p_1719->g_29) >= (*p_1719->g_256));
                    ++l_1682;
                    (*l_1675) = ((safe_sub_func_int64_t_s_s(((*p_1719->g_407) ^= l_1687), (safe_mod_func_uint32_t_u_u(((l_1690 < l_1609[0][7][0]) == ((p_1719->g_1691[4] = l_1608[1]) == (((****p_1719->g_475) &= ((l_1621 & ((*l_1622) = ((l_1680 |= 1L) > ((void*)0 != l_1664)))) || 3L)) , l_1692))), l_1672)))) , l_1569[0]);
                }
                else
                { /* block id: 818 */
                    return l_1609[1][9][3];
                }
                (*l_1694) = ((*l_1693) = &l_1677[4][3][2]);
                if ((safe_div_func_uint8_t_u_u((+(p_1719->g_1697 != (((((*l_1715) = ((l_1713 ^= (((*l_1711) ^= (safe_mul_func_int8_t_s_s(l_1568, ((p_1719->g_2 == (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((((((0x9142L || (l_1672 | (safe_add_func_int8_t_s_s((l_1578 >= (&p_1719->g_1373[0] != (((!((safe_rshift_func_int16_t_s_s(((((**l_1694) != (((p_1719->g_1134[1][0] , l_1569[2]) < (*p_1719->g_407)) , (*p_1719->g_256))) , l_1564[1][5][2]) <= (*p_1719->g_256)), p_1719->g_1373[0])) | 0x23CCL)) | 0x73B4336EL) , l_1671))), p_1719->g_903)))) , 0x3AL) & l_1710[4]) && 0x5FL) > 0xBB5EL) != 1UL), p_1719->g_755[1])), (**p_1719->g_418))) , 4UL), l_1610))) == p_1719->g_332)))) <= 0x6BE0L)) > 0x02026918L)) , 0UL) , p_1719->g_178) ^ l_1587))), l_1680)))
                { /* block id: 826 */
                    for (p_1719->g_203 = 0; p_1719->g_203 < 7; p_1719->g_203 += 1)
                    {
                        l_1569[p_1719->g_203] = 0L;
                    }
                }
                else
                { /* block id: 828 */
                    for (l_1578 = 18; (l_1578 == 20); l_1578 = safe_add_func_uint64_t_u_u(l_1578, 6))
                    { /* block id: 831 */
                        if ((*p_1719->g_1628))
                            break;
                        (**l_1694) = l_1627;
                        if ((*p_1719->g_1628))
                            continue;
                    }
                }
            }
        }
        return p_1719->g_203;
    }
    (*l_1718) = (void*)0;
    return p_1719->g_598;
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_21 p_1719->g_28 p_1719->g_29 p_1719->g_16 p_1719->g_57 p_1719->g_2 p_1719->g_90 p_1719->g_87 p_1719->g_139 p_1719->g_147 p_1719->g_81 p_1719->g_178 p_1719->g_201 p_1719->g_203 p_1719->g_206 p_1719->g_212 p_1719->g_277 p_1719->g_256 p_1719->g_306 p_1719->g_418 p_1719->g_407 p_1719->g_332 p_1719->g_1063 p_1719->g_948 p_1719->g_475 p_1719->g_476 p_1719->g_477 p_1719->g_1101 p_1719->g_419 p_1719->g_334 p_1719->g_240 p_1719->g_903 p_1719->g_598 p_1719->g_1127 p_1719->g_1134 p_1719->g_596 p_1719->g_393 p_1719->g_1254 p_1719->g_1132 p_1719->g_478 p_1719->g_1375 p_1719->g_1427 p_1719->g_1373 p_1719->g_1438 p_1719->g_889 p_1719->g_755 p_1719->g_30 p_1719->g_1532 p_1719->g_1559
 * writes: p_1719->g_21 p_1719->g_36 p_1719->g_81 p_1719->g_87 p_1719->g_90 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_57 p_1719->g_201 p_1719->g_203 p_1719->g_212 p_1719->g_240 p_1719->g_256 p_1719->g_277 p_1719->g_306 p_1719->g_332 p_1719->g_1063 p_1719->g_419 p_1719->g_596 p_1719->g_1101 p_1719->g_903 p_1719->g_996 p_1719->g_1064 p_1719->g_1132 p_1719->g_1153 p_1719->g_755 p_1719->g_393 p_1719->g_598 p_1719->g_948 p_1719->g_1127 p_1719->g_1254 p_1719->g_334 p_1719->g_1373 p_1719->g_1375 p_1719->g_1427
 */
uint64_t  func_11(uint32_t  p_12, uint32_t  p_13, struct S0 * p_1719)
{ /* block id: 9 */
    int16_t l_44 = 0x17EEL;
    int32_t l_1454[2];
    int64_t *l_1466[10];
    uint32_t l_1469 = 0xE447FFC9L;
    int32_t l_1473 = 0x13B239D0L;
    int32_t ****l_1493[10][3] = {{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476},{&p_1719->g_476,&p_1719->g_476,&p_1719->g_476}};
    uint8_t l_1508[7][9][4] = {{{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL}},{{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL}},{{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL}},{{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL}},{{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL}},{{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL}},{{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL},{0xD0L,255UL,1UL,1UL}}};
    int32_t l_1513 = 0x5F3FCE4EL;
    int32_t l_1517 = 4L;
    int32_t l_1518[6][6][1] = {{{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL}},{{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL}},{{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL}},{{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL}},{{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL}},{{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL},{0x69353A5FL}}};
    int32_t *l_1562 = &l_1473;
    int32_t *l_1563 = &p_1719->g_1101;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1454[i] = 1L;
    for (i = 0; i < 10; i++)
        l_1466[i] = &p_1719->g_1063;
    for (p_12 = 0; (p_12 != 30); p_12 = safe_add_func_uint32_t_u_u(p_12, 8))
    { /* block id: 12 */
        uint64_t l_19 = 1UL;
        return l_19;
    }
    for (p_13 = 0; (p_13 <= 4); p_13 += 1)
    { /* block id: 17 */
        uint16_t *l_20[1][1][4];
        int32_t l_1395 = 0x6A05F1CDL;
        int16_t *l_1455 = (void*)0;
        int16_t *l_1456 = &p_1719->g_755[1];
        int32_t *l_1457 = &p_1719->g_203;
        uint16_t l_1498 = 0x5439L;
        uint16_t l_1499 = 0x8995L;
        int32_t l_1504[9] = {0x6706E618L,0x698DB665L,0x6706E618L,0x6706E618L,0x698DB665L,0x6706E618L,0x6706E618L,0x698DB665L,0x6706E618L};
        int32_t l_1556 = 9L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_20[i][j][k] = &p_1719->g_21;
            }
        }
        if (((*l_1457) = ((p_1719->g_21 &= p_13) & (safe_mod_func_int16_t_s_s(((*l_1456) = ((((safe_add_func_int32_t_s_s(0L, (safe_rshift_func_uint8_t_u_u((((-1L) >= p_1719->g_28) <= (((p_1719->g_29 == l_20[0][0][0]) , (((((safe_mod_func_int8_t_s_s(func_33((((p_1719->g_36[6] = (void*)0) != &p_1719->g_16[3][3]) && ((((func_37(func_39((((safe_sub_func_int8_t_s_s((-3L), 5UL)) != p_1719->g_16[2][5]) == 0x5497C242L), l_44, p_1719), p_1719) , l_1395) , 1L) <= l_44) < 0x1C61L)), l_1395, p_1719), l_44)) || 0x8E73L) , p_12) | p_12) != p_1719->g_1427)) == l_1395)), l_1395)))) > 0xB283D90EF1D823C3L) == l_1454[0]) > p_12)), p_13)))))
        { /* block id: 695 */
            uint32_t l_1470 = 0xF308ACC8L;
            uint32_t *l_1472 = &p_1719->g_139;
            uint32_t **l_1471 = &l_1472;
            int32_t l_1474[5][6][2] = {{{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L}},{{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L}},{{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L}},{{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L}},{{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L},{0x2040AF08L,0x2040AF08L}}};
            int i, j, k;
            (*l_1457) = (safe_mul_func_int16_t_s_s(((p_1719->g_90[6] & p_13) | (((l_44 < (safe_rshift_func_int16_t_s_s((-7L), 7))) != ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(0x2726L, (l_1466[2] != l_1466[1]))), 7)) & (safe_rshift_func_int8_t_s_u((**p_1719->g_418), (1UL == p_1719->g_755[1]))))) ^ l_1469)), l_1470));
            if (l_44)
                continue;
            l_1474[2][2][1] ^= (l_1473 &= (((*l_1471) = (void*)0) == &p_1719->g_201));
        }
        else
        { /* block id: 701 */
            uint32_t *l_1492 = (void*)0;
            int32_t l_1516[8][4][8] = {{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}},{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}},{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}},{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}},{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}},{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}},{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}},{{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L},{0x2BDCD8EFL,(-8L),0x708EB437L,(-5L),2L,1L,1L,2L}}};
            int i, j, k;
            for (l_44 = 0; (l_44 <= 4); l_44 += 1)
            { /* block id: 704 */
                int32_t *l_1500 = &l_1473;
                int32_t *l_1501 = &p_1719->g_90[1];
                int32_t *l_1502 = &p_1719->g_1134[1][0];
                int32_t *l_1503 = &p_1719->g_203;
                int32_t l_1505 = 0x0C289C84L;
                int32_t *l_1506 = &p_1719->g_1127;
                int32_t *l_1507[2][2][4] = {{{&p_1719->g_90[6],&p_1719->g_2,&p_1719->g_90[6],&p_1719->g_90[6]},{&p_1719->g_90[6],&p_1719->g_2,&p_1719->g_90[6],&p_1719->g_90[6]}},{{&p_1719->g_90[6],&p_1719->g_2,&p_1719->g_90[6],&p_1719->g_90[6]},{&p_1719->g_90[6],&p_1719->g_2,&p_1719->g_90[6],&p_1719->g_90[6]}}};
                uint64_t *l_1535 = (void*)0;
                int i, j, k;
                (*l_1457) = (((safe_div_func_int8_t_s_s(((p_1719->g_16[p_13][(l_44 + 2)] ^ ((**p_1719->g_418) = 0L)) | (((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_1469, p_12)), ((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_int16_t_s_s(((*l_1456) = (p_12 && (safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((l_1457 == l_1492), (l_1493[4][0] != ((safe_rshift_func_uint8_t_u_s(((((safe_mul_func_int8_t_s_s((l_1466[6] == (void*)0), l_1498)) < 0x26L) <= p_12) , 255UL), p_13)) , &p_1719->g_206[4])))) < 0x9084E6D246AF102EL) < l_1499) ^ p_13), p_1719->g_201)))), 14)) >= p_12))), 5)) ^ (-6L)))) , (*l_1457)) > p_1719->g_30)), (-1L))) >= p_1719->g_1427) , (-1L));
                --l_1508[4][8][2];
                (*l_1506) |= 2L;
                for (p_1719->g_948 = 4; (p_1719->g_948 >= 0); p_1719->g_948 -= 1)
                { /* block id: 712 */
                    uint8_t l_1511 = 0xD6L;
                    int32_t l_1512 = 7L;
                    int32_t l_1514 = 6L;
                    int32_t l_1515 = 0x0D76F6DFL;
                    int32_t l_1519 = 0x155B9BAFL;
                    int32_t l_1520 = 0x45C0BAE8L;
                    int32_t l_1521[1][7] = {{1L,0x32D805F9L,1L,1L,0x32D805F9L,1L,1L}};
                    int32_t l_1523 = 0x7D282CDAL;
                    uint8_t l_1524 = 8UL;
                    uint64_t *l_1529[9] = {(void*)0,&p_1719->g_277,(void*)0,(void*)0,&p_1719->g_277,(void*)0,(void*)0,&p_1719->g_277,(void*)0};
                    int32_t *l_1561 = &l_1505;
                    int i, j;
                    for (p_1719->g_1427 = 0; (p_1719->g_1427 <= 4); p_1719->g_1427 += 1)
                    { /* block id: 715 */
                        if (l_1511)
                            break;
                    }
                    l_1524++;
                    if ((((p_13 > ((*l_1500) = 0L)) && ((safe_div_func_uint8_t_u_u(0x20L, l_1508[2][4][0])) == ((--p_1719->g_277) | ((p_1719->g_1532[3] != (((((*p_1719->g_256) > (l_1535 == l_1529[1])) && 0x9C2D7A3B7C3342ABL) || 0x33L) , (void*)0)) , 0x45CD8F477574BD8CL)))) < p_1719->g_1254))
                    { /* block id: 721 */
                        uint32_t l_1552 = 4294967295UL;
                        uint8_t *l_1555 = &l_1511;
                        int32_t l_1557 = 0x4901327EL;
                        (*l_1501) |= (safe_lshift_func_int16_t_s_s(p_13, (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*l_1457), l_1517)), (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((l_1516[7][2][7] && (safe_lshift_func_int8_t_s_u(p_12, (l_44 ^ (safe_lshift_func_int8_t_s_u(0x6DL, (+(((safe_add_func_int16_t_s_s(l_1552, (+(l_1557 = (((((*l_1555) = ((safe_sub_func_uint64_t_u_u((253UL > (**p_1719->g_418)), 5L)) == l_1520)) >= l_1556) != l_1552) && l_1473))))) < 1L) > l_1520)))))))), p_13)), 6UL))))));
                    }
                    else
                    { /* block id: 725 */
                        int32_t *l_1558 = &p_1719->g_90[7];
                        int32_t **l_1560[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1560[i] = (void*)0;
                        (*p_1719->g_1559) = l_1558;
                        l_1561 = (void*)0;
                        if (p_13)
                            break;
                    }
                }
            }
            if ((*p_1719->g_596))
                break;
        }
        l_1562 = (void*)0;
        for (p_1719->g_598 = 4; (p_1719->g_598 >= 0); p_1719->g_598 -= 1)
        { /* block id: 737 */
            for (p_1719->g_1101 = 4; (p_1719->g_1101 >= 1); p_1719->g_1101 -= 1)
            { /* block id: 740 */
                return p_12;
            }
        }
    }
    (*l_1563) |= p_13;
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_306 p_1719->g_256 p_1719->g_57 p_1719->g_139 p_1719->g_1427 p_1719->g_1373 p_1719->g_596 p_1719->g_90 p_1719->g_2 p_1719->g_418 p_1719->g_419 p_1719->g_334 p_1719->g_240 p_1719->g_1375 p_1719->g_1438 p_1719->g_889 p_1719->g_407 p_1719->g_332 p_1719->g_1101
 * writes: p_1719->g_306 p_1719->g_201 p_1719->g_139 p_1719->g_81 p_1719->g_1101
 */
int8_t  func_33(int32_t  p_34, int8_t  p_35, struct S0 * p_1719)
{ /* block id: 673 */
    int32_t l_1404 = 0L;
    uint8_t *l_1408[2];
    int32_t l_1431 = 1L;
    int64_t ***l_1439 = (void*)0;
    uint32_t *l_1452[1];
    int32_t *l_1453 = &p_1719->g_1101;
    int i;
    for (i = 0; i < 2; i++)
        l_1408[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1452[i] = (void*)0;
    for (p_1719->g_306 = (-29); (p_1719->g_306 < 10); p_1719->g_306 = safe_add_func_uint64_t_u_u(p_1719->g_306, 1))
    { /* block id: 676 */
        int16_t l_1407 = (-3L);
        uint8_t **l_1409 = &l_1408[0];
        uint8_t *l_1411[3];
        uint8_t **l_1410 = &l_1411[0];
        uint8_t *l_1413[10] = {&p_1719->g_1373[0],&p_1719->g_147,&p_1719->g_1373[0],&p_1719->g_1373[0],&p_1719->g_147,&p_1719->g_1373[0],&p_1719->g_1373[0],&p_1719->g_147,&p_1719->g_1373[0],&p_1719->g_1373[0]};
        uint8_t **l_1412 = &l_1413[0];
        uint32_t *l_1414 = &p_1719->g_201;
        uint32_t *l_1415 = (void*)0;
        uint16_t ***l_1418 = (void*)0;
        uint8_t l_1428 = 0xC8L;
        int32_t l_1429 = 0x7736ABF3L;
        int32_t *l_1430[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (i = 0; i < 3; i++)
            l_1411[i] = (void*)0;
        l_1404 = (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((!p_34), 3)) > (safe_mul_func_int8_t_s_s((l_1404 | (p_34 >= (*p_1719->g_256))), (safe_sub_func_uint32_t_u_u(l_1407, (p_1719->g_139 &= ((*l_1414) = (((*l_1409) = l_1408[0]) != ((*l_1412) = ((*l_1410) = &p_1719->g_1373[0])))))))))), (safe_add_func_int32_t_s_s((l_1431 |= (((l_1418 != ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((p_1719->g_81 = (l_1429 = (((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(p_1719->g_1427, p_1719->g_306)), p_35)) > l_1428) < l_1404))) != p_34), p_1719->g_1373[0])) ^ 0UL), l_1404)) , (void*)0)) , l_1404) < p_34)), p_35))));
        if ((*p_1719->g_596))
            continue;
        return (**p_1719->g_418);
    }
    (*l_1453) = ((safe_sub_func_uint8_t_u_u(p_1719->g_1375[1], 1UL)) & (safe_lshift_func_uint8_t_u_u((((((l_1431 = (safe_sub_func_uint16_t_u_u(l_1404, (*p_1719->g_256)))) < (p_34 >= ((l_1439 = p_1719->g_1438) == &p_1719->g_1072))) != (safe_lshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(p_1719->g_889, (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((p_35 , l_1452[0]) == &p_1719->g_306), l_1404)), p_35)))), l_1404)), 1UL)) | (*p_1719->g_407)) <= 0xD0BC81DF5E9BFAC1L), 15))) , p_35) != p_34), 7)));
    return (*l_1453);
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_393 p_1719->g_598 p_1719->g_903 p_1719->g_1101 p_1719->g_16 p_1719->g_948 p_1719->g_1127 p_1719->g_203 p_1719->g_334 p_1719->g_407 p_1719->g_418 p_1719->g_419 p_1719->g_240 p_1719->g_1254 p_1719->g_332 p_1719->g_256 p_1719->g_57 p_1719->g_139 p_1719->g_212 p_1719->g_306 p_1719->g_81 p_1719->g_1132 p_1719->g_596 p_1719->g_2 p_1719->g_90 p_1719->g_475 p_1719->g_476 p_1719->g_477 p_1719->g_478 p_1719->g_1375 p_1719->g_1134
 * writes: p_1719->g_393 p_1719->g_598 p_1719->g_903 p_1719->g_1101 p_1719->g_948 p_1719->g_1127 p_1719->g_203 p_1719->g_212 p_1719->g_332 p_1719->g_1254 p_1719->g_1153 p_1719->g_139 p_1719->g_1064 p_1719->g_147 p_1719->g_334 p_1719->g_240 p_1719->g_57 p_1719->g_306 p_1719->g_81 p_1719->g_1373 p_1719->g_87 p_1719->g_1375
 */
uint8_t  func_37(uint64_t  p_38, struct S0 * p_1719)
{ /* block id: 562 */
    uint32_t l_1226 = 0x0254D4F8L;
    int32_t *l_1273[9][3][2] = {{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}},{{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0},{&p_1719->g_1127,(void*)0}}};
    uint16_t **l_1277 = &p_1719->g_256;
    uint32_t l_1337 = 0xD4054A0AL;
    uint32_t l_1382 = 4294967295UL;
    int i, j, k;
    for (p_1719->g_393 = 0; (p_1719->g_393 <= 4); p_1719->g_393 += 1)
    { /* block id: 565 */
        int8_t l_1229 = 0x69L;
        int32_t l_1236 = 0x7A3B82F5L;
        int32_t l_1237 = (-1L);
        uint32_t *l_1241[2][5] = {{&p_1719->g_16[3][3],(void*)0,(void*)0,(void*)0,&p_1719->g_16[3][3]},{&p_1719->g_16[3][3],(void*)0,(void*)0,(void*)0,&p_1719->g_16[3][3]}};
        int32_t ****l_1257[10] = {(void*)0,&p_1719->g_476,(void*)0,(void*)0,&p_1719->g_476,(void*)0,(void*)0,&p_1719->g_476,(void*)0,(void*)0};
        uint8_t *l_1267[5][5] = {{&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147},{&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147},{&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147},{&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147},{&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147,&p_1719->g_147}};
        int32_t *l_1275 = &l_1236;
        uint16_t **l_1289 = (void*)0;
        uint64_t *l_1321 = &p_1719->g_212;
        uint16_t *l_1336 = &p_1719->g_903;
        int i, j;
        for (p_1719->g_598 = 0; (p_1719->g_598 <= 3); p_1719->g_598 += 1)
        { /* block id: 568 */
            uint64_t l_1222 = 0x65FD48071AD707E5L;
            int i, j;
            for (p_1719->g_903 = 0; (p_1719->g_903 <= 9); p_1719->g_903 += 1)
            { /* block id: 571 */
                int32_t *l_1204 = &p_1719->g_1101;
                int32_t *l_1205 = &p_1719->g_90[3];
                int32_t *l_1206 = &p_1719->g_948;
                int32_t *l_1207 = (void*)0;
                int32_t *l_1208 = &p_1719->g_90[4];
                int32_t *l_1209 = &p_1719->g_1134[1][0];
                int32_t *l_1210 = &p_1719->g_1134[1][0];
                int32_t l_1211 = 0x2B083E12L;
                int32_t *l_1212 = &p_1719->g_1127;
                int32_t *l_1213 = &l_1211;
                int32_t *l_1214 = &p_1719->g_203;
                int32_t *l_1215 = &p_1719->g_90[2];
                int32_t *l_1216 = (void*)0;
                int32_t *l_1217 = (void*)0;
                int32_t *l_1218 = &p_1719->g_203;
                int32_t *l_1219 = &p_1719->g_203;
                int32_t *l_1220 = &p_1719->g_1101;
                int32_t *l_1221[1][6] = {{(void*)0,&p_1719->g_90[6],(void*)0,(void*)0,&p_1719->g_90[6],(void*)0}};
                int i, j;
                (*l_1204) &= (-4L);
                l_1222++;
            }
            return p_1719->g_16[p_1719->g_393][(p_1719->g_598 + 1)];
        }
        for (p_1719->g_948 = 2; (p_1719->g_948 >= 0); p_1719->g_948 -= 1)
        { /* block id: 579 */
            int32_t l_1225 = 0x5A9D24A7L;
            uint32_t l_1284[3][3] = {{0xAC4C0599L,0xAC4C0599L,0xAC4C0599L},{0xAC4C0599L,0xAC4C0599L,0xAC4C0599L},{0xAC4C0599L,0xAC4C0599L,0xAC4C0599L}};
            uint32_t l_1309 = 0x0EFEF8C0L;
            int i, j;
            l_1226 |= (l_1225 = p_1719->g_16[(p_1719->g_948 + 1)][(p_1719->g_393 + 1)]);
            for (p_1719->g_1127 = 0; (p_1719->g_1127 <= 3); p_1719->g_1127 += 1)
            { /* block id: 584 */
                int32_t *l_1227 = &p_1719->g_90[6];
                int32_t *l_1228 = (void*)0;
                int32_t *l_1230 = &l_1225;
                int32_t *l_1231 = &p_1719->g_203;
                int32_t l_1232 = 0x6D772786L;
                int32_t *l_1233 = &l_1232;
                int32_t *l_1234 = &l_1225;
                int32_t *l_1235[3];
                uint16_t l_1238 = 7UL;
                int32_t ****l_1258 = (void*)0;
                int32_t *l_1274 = &p_1719->g_1101;
                int i;
                for (i = 0; i < 3; i++)
                    l_1235[i] = &p_1719->g_1101;
                --l_1238;
                for (p_38 = 0; (p_38 <= 2); p_38 += 1)
                { /* block id: 588 */
                    uint64_t *l_1244 = &p_1719->g_212;
                    uint64_t *l_1253 = &p_1719->g_1254;
                    uint8_t *l_1268 = &p_1719->g_147;
                    int i, j, k;
                    (*l_1231) ^= ((void*)0 != l_1241[1][3]);
                    l_1225 ^= (safe_add_func_uint64_t_u_u(((*l_1244) = p_1719->g_334[(p_1719->g_948 + 1)][(p_38 + 5)][p_1719->g_1127]), (safe_lshift_func_uint8_t_u_u((((*p_1719->g_407) = p_38) <= 0x097877B64883BF09L), ((safe_mul_func_int8_t_s_s(p_38, (((*l_1253) &= (0x2CL >= (((**p_1719->g_418) <= (safe_sub_func_uint8_t_u_u((safe_mul_func_int32_t_s_s(p_1719->g_334[(p_1719->g_948 + 1)][(p_38 + 5)][p_1719->g_1127], (0x4A2FAA33L == p_38))), 0x6FL))) && p_38))) , 0x0CL))) && (-7L))))));
                    (*l_1234) |= (p_1719->g_16[(p_1719->g_948 + 1)][(p_1719->g_393 + 1)] ^ 1L);
                    (*l_1234) = (safe_div_func_uint64_t_u_u(((l_1257[3] != l_1258) <= (((safe_sub_func_uint32_t_u_u(p_1719->g_240, (safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s(p_38, (p_38 | p_38))), 18446744073709551614UL)))) & p_38) == ((((safe_div_func_int32_t_s_s(((l_1267[0][0] = &p_1719->g_147) != l_1268), p_38)) && p_38) , 0x43L) != 1UL))), (*p_1719->g_407)));
                }
            }
            l_1225 = p_1719->g_16[(p_1719->g_948 + 1)][(p_1719->g_393 + 1)];
            if (l_1225)
                continue;
            for (p_1719->g_598 = 2; (p_1719->g_598 >= 0); p_1719->g_598 -= 1)
            { /* block id: 612 */
                uint32_t *l_1290 = &p_1719->g_139;
                uint32_t *l_1291 = (void*)0;
                uint32_t *l_1292 = &l_1284[2][1];
                int32_t l_1293[5];
                int32_t **l_1294 = &l_1275;
                int32_t l_1310 = 0x4BF0F49BL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1293[i] = 0x3CF0AB92L;
                for (p_1719->g_1101 = 4; (p_1719->g_1101 >= 0); p_1719->g_1101 -= 1)
                { /* block id: 615 */
                    int32_t **l_1276 = (void*)0;
                    p_1719->g_1153[1][1] = (void*)0;
                }
                (*l_1294) = ((l_1293[1] = (p_1719->g_334[(p_1719->g_393 + 2)][(p_1719->g_393 + 4)][(p_1719->g_948 + 1)] <= (((p_1719->g_1064 = ((*l_1292) = ((*l_1290) |= ((l_1277 != ((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_1719->g_334[(p_1719->g_948 + 3)][(p_1719->g_393 + 3)][(p_1719->g_948 + 1)], p_1719->g_334[(p_1719->g_948 + 4)][(p_1719->g_393 + 4)][(p_1719->g_598 + 1)])), (p_38 >= (0x404258D0L & (l_1284[2][0] > (0xDB7BCB37F5F0C23DL <= (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_38, 1L)), 7UL)))))))) != 0x37901838L), l_1225)) , l_1289)) || (*p_1719->g_256))))) , p_1719->g_16[(p_1719->g_948 + 1)][(p_1719->g_393 + 1)]) , (*p_1719->g_407)))) , &l_1236);
                l_1225 ^= ((safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((p_38 != (safe_rshift_func_int16_t_s_u((-6L), (p_1719->g_16[0][6] && (*l_1275))))), ((*p_1719->g_407) = (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(p_1719->g_139, (((((safe_mul_func_int8_t_s_s((l_1309 >= (p_1719->g_147 = ((void*)0 == &l_1289))), 1L)) ^ (-1L)) < p_1719->g_212) && 5L) <= 0x39CCA085L))) , p_38), p_38))))), p_38)) , l_1310) != p_38), 15)) == 7UL);
            }
        }
        (*l_1275) = (1UL >= ((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((**p_1719->g_418) ^= p_38), p_38)), (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u((++(*l_1321)), (((void*)0 == &p_1719->g_1127) || ((safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(((*l_1275) && (safe_lshift_func_uint16_t_u_u(((*l_1336) &= ((**l_1277) ^= (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((--p_1719->g_139), (*l_1275))), ((p_1719->g_948 >= (p_1719->g_306 , 1UL)) && p_1719->g_81))))), p_38))), 0x26L)), (*l_1275))) >= p_38)))), (*l_1275))), (*l_1275))))) < (*p_1719->g_407)));
        return p_1719->g_1132;
    }
    l_1337 = p_38;
    if (p_38)
    { /* block id: 637 */
        uint64_t l_1338 = 0xB71304F932A0DF6EL;
        int32_t **l_1341 = &l_1273[8][2][0];
        int32_t l_1342 = 0x404D2D8FL;
        --l_1338;
        (*l_1341) = &p_1719->g_1127;
        l_1342 &= (*p_1719->g_596);
        for (p_1719->g_1101 = (-1); (p_1719->g_1101 > 9); p_1719->g_1101++)
        { /* block id: 643 */
            return p_1719->g_16[3][3];
        }
    }
    else
    { /* block id: 646 */
        int32_t **l_1345 = &p_1719->g_1153[1][1];
        int32_t l_1370[4][4] = {{0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L},{0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L},{0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L},{0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L,0x2E09FFF5L}};
        int64_t l_1376 = 0L;
        uint16_t l_1393 = 65528UL;
        int64_t l_1394 = 3L;
        int i, j;
        (*l_1345) = l_1273[0][0][0];
        if ((0x209BA0DED4B23705L && p_1719->g_57[0]))
        { /* block id: 648 */
            for (p_1719->g_240 = (-22); (p_1719->g_240 < (-11)); p_1719->g_240++)
            { /* block id: 651 */
                return p_38;
            }
            return p_38;
        }
        else
        { /* block id: 655 */
            uint32_t *l_1350[5][4] = {{&p_1719->g_306,&p_1719->g_306,&l_1226,&p_1719->g_306},{&p_1719->g_306,&p_1719->g_306,&l_1226,&p_1719->g_306},{&p_1719->g_306,&p_1719->g_306,&l_1226,&p_1719->g_306},{&p_1719->g_306,&p_1719->g_306,&l_1226,&p_1719->g_306},{&p_1719->g_306,&p_1719->g_306,&l_1226,&p_1719->g_306}};
            int32_t l_1365 = (-5L);
            uint8_t *l_1366 = &p_1719->g_147;
            uint16_t l_1367[2][4][8] = {{{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L},{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L},{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L},{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L}},{{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L},{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L},{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L},{0xF9E6L,65534UL,1UL,1UL,65534UL,0xF9E6L,0x984DL,0x6AA5L}}};
            int32_t l_1368 = 0x1686D5B4L;
            int32_t l_1369 = 0L;
            int16_t *l_1371 = &p_1719->g_81;
            uint8_t *l_1372 = &p_1719->g_1373[0];
            int8_t *l_1374 = &p_1719->g_1375[1];
            uint32_t l_1377 = 0x5A008E05L;
            int32_t l_1378 = (-1L);
            int32_t l_1379 = (-8L);
            int32_t l_1380 = 0L;
            int32_t l_1381[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1381[i] = (-1L);
            l_1377 = ((((safe_add_func_int32_t_s_s((l_1376 ^= (((1L >= (((p_1719->g_306 = p_1719->g_16[1][3]) , ((((safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((*l_1374) |= (p_38 ^ (((((((****p_1719->g_475) = (safe_lshift_func_uint8_t_u_u(((*l_1372) = (((*l_1371) = (safe_sub_func_uint8_t_u_u(((+0x7E57L) | (*p_1719->g_256)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((**p_1719->g_418) = ((((safe_sub_func_uint8_t_u_u(((*l_1366) = l_1365), ((*p_1719->g_256) < ((((l_1369 = (((l_1367[1][2][3] = (-4L)) | (l_1368 = l_1365)) , 0x7ADA45D9L)) , l_1370[3][0]) ^ (*p_1719->g_407)) , p_1719->g_90[6])))) != p_38) , l_1369) , p_38)), 4)), p_38))))) , 0xC6L)), 7))) , &l_1226) != &p_1719->g_306) ^ p_38) <= (*p_1719->g_407)) | l_1365))), p_1719->g_1127)) < p_1719->g_1134[1][0]), 0x7EL)) , 0L) >= 0xC1D0L) , p_1719->g_1375[1])) >= p_1719->g_332)) , (*p_1719->g_407)) >= (-4L))), p_38)) , p_1719->g_81) <= p_38) == p_38);
            --l_1382;
        }
        l_1394 |= (((safe_lshift_func_uint16_t_u_s((*p_1719->g_256), (((safe_add_func_uint64_t_u_u(0xD561DB3A449E5A31L, ((safe_mul_func_uint16_t_u_u(((0xF6L > p_38) ^ 4294967294UL), (p_1719->g_139 ^ ((safe_rshift_func_uint8_t_u_u((p_38 <= (((p_38 >= l_1393) || (**p_1719->g_418)) > p_38)), p_1719->g_334[6][4][0])) && 0x1378CD4DL)))) , l_1370[1][1]))) , &l_1273[0][0][0]) != (void*)0))) != p_38) == (*p_1719->g_256));
    }
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_16 p_1719->g_57 p_1719->g_2 p_1719->g_81 p_1719->g_90 p_1719->g_87 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_201 p_1719->g_203 p_1719->g_206 p_1719->g_212 p_1719->g_277 p_1719->g_256 p_1719->g_306 p_1719->g_418 p_1719->g_407 p_1719->g_332 p_1719->g_1063 p_1719->g_948 p_1719->g_475 p_1719->g_476 p_1719->g_477 p_1719->g_1101 p_1719->g_419 p_1719->g_334 p_1719->g_240 p_1719->g_903 p_1719->g_598 p_1719->g_1127 p_1719->g_1134 p_1719->g_596 p_1719->g_1064
 * writes: p_1719->g_81 p_1719->g_87 p_1719->g_90 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_57 p_1719->g_201 p_1719->g_203 p_1719->g_212 p_1719->g_240 p_1719->g_256 p_1719->g_277 p_1719->g_306 p_1719->g_332 p_1719->g_1063 p_1719->g_419 p_1719->g_596 p_1719->g_1101 p_1719->g_903 p_1719->g_996 p_1719->g_1064 p_1719->g_1132 p_1719->g_1153 p_1719->g_755
 */
uint64_t  func_39(int64_t  p_40, uint64_t  p_41, struct S0 * p_1719)
{ /* block id: 20 */
    int32_t *l_49 = &p_1719->g_2;
    uint16_t *l_56 = &p_1719->g_57[0];
    int64_t l_1180[6][6] = {{0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L},{0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L},{0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L},{0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L},{0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L},{0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L,0x1E305F3E16810615L}};
    int32_t **l_1181 = &p_1719->g_1153[0][2];
    uint32_t l_1192 = 0x2C8690F1L;
    int32_t l_1203 = 0x76DE2BB0L;
    int i, j;
    (*l_1181) = ((((func_45(l_49, ((void*)0 != &p_1719->g_16[4][3]), func_50((p_1719->g_16[2][3] >= 0x74B76FEF6F1AC28CL), l_56, ((void*)0 == &p_1719->g_16[4][4]), (!(safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(0UL, p_1719->g_57[0])) == p_1719->g_57[0]), (*l_49)))), p_1719->g_2, p_1719), p_1719) >= l_1180[2][0]) > 4294967286UL) >= 0x6974L) , (void*)0);
    for (p_1719->g_1064 = (-8); (p_1719->g_1064 > 47); p_1719->g_1064 = safe_add_func_int32_t_s_s(p_1719->g_1064, 3))
    { /* block id: 554 */
        uint32_t l_1186 = 0xE7E42DEFL;
        int16_t *l_1187 = &p_1719->g_755[1];
        uint64_t *l_1195 = (void*)0;
        uint64_t *l_1196[7] = {&p_1719->g_277,&p_1719->g_277,&p_1719->g_277,&p_1719->g_277,&p_1719->g_277,&p_1719->g_277,&p_1719->g_277};
        int32_t l_1197 = 0x211B2EFCL;
        int16_t l_1202 = 0L;
        int i;
        l_1203 = ((p_40 ^ ((safe_rshift_func_uint8_t_u_u((((*l_1187) = l_1186) ^ ((((*p_1719->g_407) = ((p_1719->g_212 |= (((((*l_49) > (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((*l_49), l_1192)) | 0x83L), (safe_rshift_func_uint16_t_u_u(((void*)0 == &p_1719->g_29), 6))))) & (++p_41)) , (safe_lshift_func_int8_t_s_s(((0x86886B18L | 0x17A45638L) > 0x5A21L), p_40))) , l_1202)) , p_41)) & l_1186) , p_40)), p_40)) && l_1197)) & (*l_49));
    }
    return (*l_49);
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_1134 p_1719->g_598 p_1719->g_16 p_1719->g_256 p_1719->g_57 p_1719->g_2 p_1719->g_948 p_1719->g_903 p_1719->g_203 p_1719->g_596 p_1719->g_201
 * writes: p_1719->g_596 p_1719->g_1153 p_1719->g_147 p_1719->g_277
 */
int8_t  func_45(int32_t * p_46, int16_t  p_47, uint32_t * p_48, struct S0 * p_1719)
{ /* block id: 541 */
    int64_t **l_1133[8] = {&p_1719->g_407,&p_1719->g_407,&p_1719->g_407,&p_1719->g_407,&p_1719->g_407,&p_1719->g_407,&p_1719->g_407,&p_1719->g_407};
    int32_t l_1141[7] = {0L,0L,0L,0L,0L,0L,0L};
    int8_t ***l_1151 = &p_1719->g_418;
    int8_t ****l_1150 = &l_1151;
    int32_t **l_1152[8] = {&p_1719->g_596,(void*)0,&p_1719->g_596,&p_1719->g_596,(void*)0,&p_1719->g_596,&p_1719->g_596,(void*)0};
    uint64_t l_1162 = 5UL;
    int64_t l_1165 = 0x0F460191917D1FF5L;
    uint8_t *l_1172 = (void*)0;
    uint8_t *l_1173[6][8][3] = {{{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0}},{{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0}},{{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0}},{{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0}},{{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0}},{{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0},{&p_1719->g_147,&p_1719->g_147,(void*)0}}};
    uint64_t l_1174 = 0x04BC49AFBD116DACL;
    int8_t l_1177 = 0L;
    int64_t l_1178[1];
    uint8_t l_1179 = 249UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1178[i] = 1L;
    p_1719->g_1153[1][1] = ((l_1133[4] != (p_1719->g_1134[1][0] , &p_1719->g_407)) , (p_1719->g_596 = (((safe_sub_func_int8_t_s_s((((~(safe_lshift_func_int16_t_s_u(((-5L) == (safe_lshift_func_uint16_t_u_u(l_1141[6], (((((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((0UL < (((safe_unary_minus_func_uint8_t_u(p_47)) <= (safe_unary_minus_func_int64_t_s(((safe_mul_func_int8_t_s_s(((l_1150 == (p_47 , &l_1151)) , l_1141[6]), p_1719->g_598)) < p_47)))) & l_1141[0])), p_1719->g_16[3][3])), 3)) < 0x72A2L) , l_1141[6]) == 6UL) | l_1141[0]) <= (*p_1719->g_256)) <= (*p_46))))), 13))) , l_1141[2]) , l_1141[5]), 0x2BL)) , (*p_48)) , p_48)));
    p_1719->g_1153[1][3] = (p_47 , &p_1719->g_90[6]);
    l_1179 = (safe_div_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u((((((safe_div_func_uint32_t_u_u(p_1719->g_948, (l_1178[0] = (~(l_1177 = (safe_div_func_int8_t_s_s(l_1162, (safe_sub_func_uint16_t_u_u((l_1165 & (((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((1UL | 0x22L), (safe_lshift_func_uint8_t_u_s((p_1719->g_147 = p_1719->g_903), 0)))) == (p_1719->g_277 = ((l_1174 | ((p_47 | (!(p_1719->g_57[0] || 0x47FFL))) != 0x31L)) ^ (-1L)))), p_47)) <= p_1719->g_203) > p_47)), (*p_1719->g_256)))))))))) != p_47) < p_47) >= 65533UL) , (*p_1719->g_256)), p_47)) > (*p_1719->g_596)) , p_1719->g_201), p_47));
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_57 p_1719->g_2 p_1719->g_81 p_1719->g_16 p_1719->g_90 p_1719->g_87 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_201 p_1719->g_203 p_1719->g_206 p_1719->g_212 p_1719->g_277 p_1719->g_256 p_1719->g_306 p_1719->g_418 p_1719->g_407 p_1719->g_332 p_1719->g_1063 p_1719->g_948 p_1719->g_475 p_1719->g_476 p_1719->g_477 p_1719->g_1101 p_1719->g_419 p_1719->g_334 p_1719->g_240 p_1719->g_903 p_1719->g_598 p_1719->g_1127
 * writes: p_1719->g_81 p_1719->g_87 p_1719->g_90 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_57 p_1719->g_201 p_1719->g_203 p_1719->g_212 p_1719->g_240 p_1719->g_256 p_1719->g_277 p_1719->g_306 p_1719->g_332 p_1719->g_1063 p_1719->g_419 p_1719->g_596 p_1719->g_1101 p_1719->g_903 p_1719->g_996 p_1719->g_1064 p_1719->g_1132
 */
uint32_t * func_50(uint32_t  p_51, uint16_t * p_52, uint32_t  p_53, int32_t  p_54, int64_t  p_55, struct S0 * p_1719)
{ /* block id: 21 */
    int32_t *l_71 = &p_1719->g_2;
    int32_t *l_79 = &p_1719->g_2;
    int32_t **l_78 = &l_79;
    int16_t *l_80 = &p_1719->g_81;
    int64_t *l_1074 = &p_1719->g_1063;
    int32_t *l_1100 = &p_1719->g_1101;
    uint8_t l_1110 = 250UL;
    int64_t **l_1119[7][10][3] = {{{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074}},{{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074}},{{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074}},{{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074}},{{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074}},{{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074}},{{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074},{&l_1074,&p_1719->g_407,&l_1074}}};
    int32_t **l_1124[9][4] = {{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478},{&p_1719->g_478,&p_1719->g_478,&p_1719->g_478,&p_1719->g_478}};
    uint16_t *l_1125 = &p_1719->g_903;
    uint16_t *l_1126 = &p_1719->g_996;
    uint32_t *l_1128 = (void*)0;
    uint32_t *l_1129 = &p_1719->g_201;
    uint32_t *l_1130 = &p_1719->g_139;
    uint16_t *l_1131 = &p_1719->g_1132;
    int i, j, k;
    (*l_1100) ^= (func_62(((safe_mod_func_int8_t_s_s((-4L), (safe_sub_func_int64_t_s_s((l_71 == (void*)0), ((*l_1074) |= (p_1719->g_57[0] && func_72(func_74((1L > ((*l_71) ^ ((*l_80) = (safe_add_func_int8_t_s_s(((*l_71) > (((*l_78) = l_71) == (void*)0)), p_53))))), p_1719), p_1719))))))) & (*l_71)), p_53, (*l_71), p_1719->g_948, p_1719) , (*l_71));
    (*l_1100) = ((!((((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((**l_78), (safe_mod_func_uint16_t_u_u(((*l_1131) = (((*l_1130) |= (p_1719->g_1064 = ((*l_1129) = ((safe_mul_func_int8_t_s_s((l_1110 , (**p_1719->g_418)), ((((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((*l_1126) = (safe_div_func_uint16_t_u_u(0x1FECL, (safe_sub_func_int8_t_s_s((p_54 || ((l_1119[6][3][0] = &p_1719->g_407) != (void*)0)), (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_1125) &= ((*p_52) = ((((((l_1124[4][3] != (*p_1719->g_476)) , 18446744073709551613UL) , 0x10F243B180B68D39L) && p_55) , p_55) <= (*l_79)))), 5)), (**p_1719->g_418)))))))), 0x0E98L)), (-10L))) < (**l_78)) < 0x35972F34L) , p_1719->g_598))) && p_1719->g_1127)))) < p_54)), p_53)))), (*l_71))) == 0x00B78255L) , (*l_1100)) | p_1719->g_178)) & p_55);
    return l_79;
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_256 p_1719->g_57 p_1719->g_418 p_1719->g_90 p_1719->g_475 p_1719->g_476 p_1719->g_477 p_1719->g_147 p_1719->g_2 p_1719->g_407 p_1719->g_16 p_1719->g_87 p_1719->g_139 p_1719->g_81 p_1719->g_178 p_1719->g_201 p_1719->g_203 p_1719->g_206 p_1719->g_212 p_1719->g_277 p_1719->g_306 p_1719->g_332
 * writes: p_1719->g_419 p_1719->g_147 p_1719->g_332 p_1719->g_1063 p_1719->g_81 p_1719->g_87 p_1719->g_90 p_1719->g_139 p_1719->g_178 p_1719->g_57 p_1719->g_201 p_1719->g_203 p_1719->g_212 p_1719->g_240 p_1719->g_256 p_1719->g_277 p_1719->g_306 p_1719->g_596
 */
uint64_t  func_62(int64_t  p_63, int16_t  p_64, int32_t  p_65, uint32_t  p_66, struct S0 * p_1719)
{ /* block id: 522 */
    uint8_t l_1079 = 252UL;
    int8_t *l_1094 = &p_1719->g_334[3][6][2];
    uint8_t *l_1097 = &p_1719->g_147;
    int32_t l_1098 = 0x58B0B788L;
    int32_t **l_1099 = &p_1719->g_596;
    (*l_1099) = func_74(((+(safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_1079, (l_1098 = ((safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s((p_1719->g_1063 = ((((*p_1719->g_407) = (((p_66 && 0xFAF9L) & ((safe_mul_func_uint16_t_u_u((((*l_1097) ^= (safe_mod_func_uint32_t_u_u((((((safe_mul_func_uint16_t_u_u((*p_1719->g_256), (0x72B823E0FEDBBAFDL == (((*p_1719->g_418) = l_1094) != l_1094)))) == (p_1719->g_90[6] >= (safe_mod_func_int8_t_s_s(((**p_1719->g_475) != (void*)0), 0xBFL)))) , 0x3C519128L) <= l_1079) | l_1079), 0x32114E9BL))) >= 8UL), p_63)) ^ p_64)) == p_1719->g_2)) > 1L) || l_1079)), p_65)), l_1079)) && (-8L))))), 0x05L))) || 0x590495F7L), p_1719);
    return p_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_87 p_1719->g_256 p_1719->g_57 p_1719->g_203 p_1719->g_81
 * writes: p_1719->g_87 p_1719->g_203 p_1719->g_81
 */
uint16_t  func_72(uint32_t * p_73, struct S0 * p_1719)
{ /* block id: 189 */
    int32_t l_448 = 1L;
    int32_t *l_449 = (void*)0;
    int32_t *l_450 = &p_1719->g_203;
    int32_t ****l_480 = &p_1719->g_476;
    int32_t l_497 = 0x08C696C5L;
    int32_t l_499 = (-1L);
    int32_t l_500 = 3L;
    int32_t l_503 = 0x2A91647AL;
    int32_t l_505 = 0x721731D4L;
    int32_t l_508 = 1L;
    int32_t l_511 = 0L;
    int32_t l_513 = (-1L);
    int32_t l_514 = 1L;
    int32_t l_515[9][10][2] = {{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}},{{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}}};
    int64_t l_603 = 0x373829D114A0D81AL;
    int16_t *l_785 = &p_1719->g_755[2];
    int8_t l_915 = 0x7DL;
    uint8_t l_998 = 246UL;
    uint8_t l_1034[5][10] = {{255UL,0xECL,3UL,0xECL,255UL,255UL,0xECL,3UL,0xECL,255UL},{255UL,0xECL,3UL,0xECL,255UL,255UL,0xECL,3UL,0xECL,255UL},{255UL,0xECL,3UL,0xECL,255UL,255UL,0xECL,3UL,0xECL,255UL},{255UL,0xECL,3UL,0xECL,255UL,255UL,0xECL,3UL,0xECL,255UL},{255UL,0xECL,3UL,0xECL,255UL,255UL,0xECL,3UL,0xECL,255UL}};
    uint32_t l_1048 = 0xBFA65F52L;
    int32_t l_1071[6][4][4] = {{{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L}},{{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L}},{{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L}},{{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L}},{{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L}},{{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L},{0x2E3FB27AL,0x2E3FB27AL,(-3L),2L}}};
    int i, j, k;
    for (p_1719->g_87 = 5; (p_1719->g_87 != (-30)); p_1719->g_87--)
    { /* block id: 192 */
        return (*p_1719->g_256);
    }
    (*l_450) = l_448;
    for (p_1719->g_203 = 0; (p_1719->g_203 <= 4); p_1719->g_203 += 1)
    { /* block id: 198 */
        uint8_t l_451 = 0x6FL;
        int32_t l_481 = 0x4520F04CL;
        int32_t ****l_490[3][6] = {{(void*)0,&p_1719->g_476,(void*)0,(void*)0,&p_1719->g_476,(void*)0},{(void*)0,&p_1719->g_476,(void*)0,(void*)0,&p_1719->g_476,(void*)0},{(void*)0,&p_1719->g_476,(void*)0,(void*)0,&p_1719->g_476,(void*)0}};
        int16_t l_492 = (-6L);
        int32_t l_498[3][7][4] = {{{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L}},{{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L}},{{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L},{1L,(-1L),2L,1L}}};
        int8_t l_517 = 3L;
        int32_t l_518 = 0x6B9DAC76L;
        int32_t l_575 = 0L;
        uint32_t l_622 = 0xC4D8CD10L;
        int16_t l_641 = (-1L);
        int32_t *l_676 = &l_498[2][0][1];
        int64_t **l_740 = &p_1719->g_407;
        int i, j, k;
        (1 + 1);
    }
    for (p_1719->g_81 = 0; (p_1719->g_81 < (-7)); p_1719->g_81 = safe_sub_func_int64_t_s_s(p_1719->g_81, 2))
    { /* block id: 368 */
        int64_t *l_749 = &l_603;
        int32_t l_750 = (-3L);
        uint8_t *l_753 = (void*)0;
        uint8_t *l_754 = &p_1719->g_147;
        uint32_t l_784 = 8UL;
        int32_t l_796 = 0x30F35FE0L;
        int32_t l_799 = 0x5B6D8CC5L;
        int32_t l_802[10] = {0L,1L,0L,0L,1L,0L,0L,1L,0L,0L};
        int32_t l_806 = (-7L);
        int32_t l_808 = 0L;
        int32_t l_811 = 0x50F776E7L;
        int32_t l_812 = 0x7AAAA7A1L;
        int32_t l_814 = 3L;
        int32_t l_815 = 0x11376227L;
        int32_t l_816 = 0x3875635EL;
        int32_t **l_880 = (void*)0;
        int8_t ***l_955 = (void*)0;
        uint64_t l_958 = 0x5839E0D1AD9A9F0EL;
        uint8_t l_994[7] = {0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL,0x3DL};
        int i;
        (1 + 1);
    }
    return (*p_1719->g_256);
}


/* ------------------------------------------ */
/* 
 * reads : p_1719->g_81 p_1719->g_16 p_1719->g_90 p_1719->g_87 p_1719->g_57 p_1719->g_2 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_201 p_1719->g_203 p_1719->g_206 p_1719->g_212 p_1719->g_277 p_1719->g_256 p_1719->g_306 p_1719->g_418 p_1719->g_407 p_1719->g_332
 * writes: p_1719->g_81 p_1719->g_87 p_1719->g_90 p_1719->g_139 p_1719->g_147 p_1719->g_178 p_1719->g_57 p_1719->g_201 p_1719->g_203 p_1719->g_212 p_1719->g_240 p_1719->g_256 p_1719->g_277 p_1719->g_306 p_1719->g_332
 */
uint32_t * func_74(uint32_t  p_75, struct S0 * p_1719)
{ /* block id: 24 */
    int32_t *l_84 = &p_1719->g_2;
    int32_t l_92[10][3][8] = {{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}},{{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)},{0x21D5E08CL,0x29F52E16L,(-8L),(-7L),1L,1L,0L,(-1L)}}};
    uint32_t l_95 = 0UL;
    int32_t *l_128 = &p_1719->g_87;
    int32_t **l_127[9][6] = {{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128},{&l_128,&l_128,&l_128,&l_128,&l_128,&l_128}};
    int32_t **l_131 = &l_128;
    int32_t l_180[4] = {(-3L),(-3L),(-3L),(-3L)};
    uint8_t *l_196 = &p_1719->g_147;
    int16_t *l_197 = (void*)0;
    int16_t *l_198[5];
    uint32_t *l_199 = &p_1719->g_139;
    uint32_t *l_200 = &p_1719->g_201;
    int32_t *l_202 = &p_1719->g_203;
    int32_t ***l_209 = &l_127[1][3];
    int32_t ****l_208 = &l_209;
    uint16_t *l_221 = &p_1719->g_57[0];
    uint16_t *l_252 = &p_1719->g_57[0];
    int32_t l_307[7][10] = {{0x78E54A35L,0x0003AE88L,0L,0L,0L,0x0003AE88L,0x78E54A35L,0x04B00DE3L,0x016F80ECL,1L},{0x78E54A35L,0x0003AE88L,0L,0L,0L,0x0003AE88L,0x78E54A35L,0x04B00DE3L,0x016F80ECL,1L},{0x78E54A35L,0x0003AE88L,0L,0L,0L,0x0003AE88L,0x78E54A35L,0x04B00DE3L,0x016F80ECL,1L},{0x78E54A35L,0x0003AE88L,0L,0L,0L,0x0003AE88L,0x78E54A35L,0x04B00DE3L,0x016F80ECL,1L},{0x78E54A35L,0x0003AE88L,0L,0L,0L,0x0003AE88L,0x78E54A35L,0x04B00DE3L,0x016F80ECL,1L},{0x78E54A35L,0x0003AE88L,0L,0L,0L,0x0003AE88L,0x78E54A35L,0x04B00DE3L,0x016F80ECL,1L},{0x78E54A35L,0x0003AE88L,0L,0L,0L,0x0003AE88L,0x78E54A35L,0x04B00DE3L,0x016F80ECL,1L}};
    int64_t *l_351 = &p_1719->g_332;
    uint64_t l_397 = 0xDE4A85ADF769661EL;
    int64_t l_429 = 0x304595F1D11CD0CCL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_198[i] = &p_1719->g_81;
    for (p_1719->g_81 = 0; (p_1719->g_81 == 25); ++p_1719->g_81)
    { /* block id: 27 */
        int32_t **l_85 = &l_84;
        (*l_85) = l_84;
    }
    if ((p_1719->g_16[4][4] >= 9L))
    { /* block id: 30 */
        int32_t *l_86 = &p_1719->g_87;
        int32_t **l_88 = &l_84;
        int32_t l_93 = 0x5994F87CL;
        int32_t l_94[2][6] = {{4L,4L,4L,4L,4L,4L},{4L,4L,4L,4L,4L,4L}};
        uint16_t *l_99[9] = {&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0]};
        int i, j;
        if (((((*l_86) = p_75) , &p_1719->g_2) == ((*l_88) = l_84)))
        { /* block id: 33 */
            int32_t *l_89 = &p_1719->g_90[6];
            int32_t *l_91[8][1];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                    l_91[i][j] = &p_1719->g_90[2];
            }
            ++l_95;
        }
        else
        { /* block id: 35 */
            int32_t *l_100 = (void*)0;
            int32_t **l_107 = &l_100;
            int32_t *l_108 = &p_1719->g_90[6];
            (*l_88) = &l_92[3][1][4];
            l_94[0][2] ^= ((*l_108) = (safe_unary_minus_func_uint64_t_u(((((void*)0 == l_99[7]) <= (((*l_107) = (((((void*)0 == l_100) , ((*l_84) = p_1719->g_90[2])) == (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((0x0047D2294016B02DL || (safe_sub_func_uint16_t_u_u(((((p_75 , l_100) != (*l_88)) != 0x40F112F4C2597332L) != 0x2AAD6875EE90912EL), p_1719->g_87))) | p_1719->g_16[2][5]) ^ p_1719->g_57[0]), p_75)), 6))) , l_84)) == &p_1719->g_87)) <= 0UL))));
        }
    }
    else
    { /* block id: 42 */
        int32_t *l_126[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_125 = &l_126[1];
        int32_t **l_130 = &l_126[1];
        int32_t ***l_129[5][2][6] = {{{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0},{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0}},{{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0},{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0}},{{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0},{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0}},{{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0},{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0}},{{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0},{&l_130,(void*)0,&l_130,&l_125,&l_130,(void*)0}}};
        int32_t l_136 = 0x21E7A8C1L;
        int32_t l_137 = 9L;
        int8_t *l_138 = (void*)0;
        int16_t *l_140 = &p_1719->g_81;
        int32_t l_173 = 0x3AE5EB9FL;
        uint32_t l_181 = 1UL;
        int32_t *l_183 = &p_1719->g_90[6];
        int i, j, k;
        if ((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((*l_140) = ((((l_127[3][5] = l_125) == (l_131 = &l_126[3])) && ((p_75 ^ ((safe_lshift_func_int16_t_s_s(p_1719->g_90[6], 6)) <= ((255UL != (((safe_div_func_int8_t_s_s((l_136 <= ((l_137 ^ ((p_1719->g_139 = (p_1719->g_16[3][3] == p_1719->g_57[0])) && p_1719->g_90[5])) > p_1719->g_2)), p_1719->g_87)) > p_75) < p_1719->g_16[3][3])) ^ p_1719->g_16[0][4]))) <= (-1L))) < 1UL)), 3)) != 0UL), 0x19L)), 0x667CL)) == 0UL), p_75)) && 0xF86BL) || l_137), 0x7BL)), p_75)))
        { /* block id: 47 */
            for (p_1719->g_87 = 0; (p_1719->g_87 != (-3)); --p_1719->g_87)
            { /* block id: 50 */
                return &p_1719->g_16[3][3];
            }
            for (p_1719->g_139 = 21; (p_1719->g_139 != 50); p_1719->g_139 = safe_add_func_uint16_t_u_u(p_1719->g_139, 1))
            { /* block id: 55 */
                int64_t l_145 = 1L;
                uint8_t *l_146 = &p_1719->g_147;
                p_1719->g_90[6] = ((l_145 & (!p_1719->g_139)) != ((*l_146) = (*l_84)));
                for (l_145 = 12; (l_145 > 17); ++l_145)
                { /* block id: 60 */
                    l_84 = &l_92[6][1][4];
                    return l_126[2];
                }
                p_1719->g_90[1] = p_75;
            }
        }
        else
        { /* block id: 66 */
            int32_t **l_150[9][3][4] = {{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}},{{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0}}};
            int32_t **l_161 = (void*)0;
            uint16_t *l_179 = &p_1719->g_57[0];
            uint16_t l_182[9] = {0x2EA7L,9UL,0x2EA7L,0x2EA7L,9UL,0x2EA7L,0x2EA7L,9UL,0x2EA7L};
            int i, j, k;
            l_150[5][0][0] = &l_84;
            l_137 = (((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((void*)0 != &p_1719->g_87), (((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == l_161), ((-3L) != ((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s((((safe_unary_minus_func_uint32_t_u(((safe_mul_func_uint16_t_u_u(((*l_179) ^= ((((((((p_1719->g_87 <= ((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_173, ((1UL || ((p_1719->g_178 |= ((*l_140) &= (((!(safe_mod_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_s((((!(((*l_84) < p_1719->g_16[1][2]) != l_137)) < p_75) != p_1719->g_147), 10)) | p_1719->g_139) > p_1719->g_87) >= 8UL), 0x7ECB843A2382E4A6L))) ^ p_75) , p_1719->g_147))) ^ p_1719->g_2)) < 0x314A3952FBA135BBL))), 0xB361L)) >= p_1719->g_16[3][3])) , 0x1FAAL) , (void*)0) != (void*)0) < 7L) , p_75) ^ p_1719->g_139) < p_75)), p_75)) || l_180[3]))) , l_181) , 0x59B479778BE3A619L), 0x2C07B4E46D7EC748L)), p_1719->g_139)) <= (*l_84))))), p_1719->g_16[1][6])), l_182[7])) != p_1719->g_2) , p_75))), p_1719->g_16[3][3])) > 0x3E0678FFL) , 8L);
        }
        (*l_183) &= 0x6EBF030DL;
    }
    (*l_202) |= ((safe_rshift_func_int16_t_s_s(((p_1719->g_2 , (((((p_1719->g_81 = (safe_add_func_int32_t_s_s((((((*l_128) = ((safe_rshift_func_int16_t_s_u(p_75, 1)) && (*l_84))) , (p_1719->g_57[0] == (safe_rshift_func_int8_t_s_s((((*l_200) ^= ((*l_199) = ((l_180[3] |= (((safe_add_func_int8_t_s_s((*l_84), ((*l_196) &= (safe_mul_func_uint16_t_u_u(((*l_84) , (3L > ((void*)0 == &p_1719->g_57[0]))), 9L))))) && 1L) || p_1719->g_87)) > p_75))) , (-1L)), 6)))) ^ p_1719->g_16[4][6]) , p_75), p_75))) < (*l_84)) && 0xDBC6L) == 65535UL) && p_1719->g_2)) , p_1719->g_90[4]), p_75)) & 65535UL);
    if ((safe_mul_func_int8_t_s_s(((((p_1719->g_139 , p_1719->g_206[4]) != ((*l_208) = &l_127[6][0])) , (((((*l_84) >= ((safe_sub_func_int16_t_s_s(((*l_202) ^= (p_1719->g_212 == (((safe_add_func_uint16_t_u_u(((*l_221) = ((p_75 <= (((!((((safe_sub_func_int64_t_s_s(((void*)0 == &p_1719->g_147), ((!((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_1719->g_87, 0x0C429CBBL)), 0xF4L)) , p_1719->g_57[0])) == 0x60A35E8C61DE7B98L))) <= p_1719->g_178) != 0x163BL) ^ 0xEEL)) >= p_1719->g_87) > 1L)) & 4294967287UL)), 0UL)) , 0x1229954BL) >= (*l_84)))), (*l_84))) || p_75)) , p_75) , 1UL) || 0x6ABD5F4E809F10D2L)) && p_1719->g_57[0]), p_1719->g_178)))
    { /* block id: 85 */
        int16_t l_241[6] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
        uint16_t *l_280[10][7] = {{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0},{(void*)0,&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],&p_1719->g_57[0],(void*)0}};
        int32_t l_295 = 1L;
        int32_t *l_313 = &l_92[4][1][0];
        int8_t *l_329[5][3] = {{&p_1719->g_240,(void*)0,&p_1719->g_240},{&p_1719->g_240,(void*)0,&p_1719->g_240},{&p_1719->g_240,(void*)0,&p_1719->g_240},{&p_1719->g_240,(void*)0,&p_1719->g_240},{&p_1719->g_240,(void*)0,&p_1719->g_240}};
        uint32_t l_330 = 1UL;
        int8_t l_335 = 0x6FL;
        int32_t l_386 = 1L;
        int32_t l_389 = 0x0187FCE8L;
        int32_t l_390 = 0x5F03F7D2L;
        int32_t l_391[6][3] = {{0L,0L,7L},{0L,0L,7L},{0L,0L,7L},{0L,0L,7L},{0L,0L,7L},{0L,0L,7L}};
        uint8_t l_394[5][2][6] = {{{0x2EL,249UL,0x51L,253UL,249UL,253UL},{0x2EL,249UL,0x51L,253UL,249UL,253UL}},{{0x2EL,249UL,0x51L,253UL,249UL,253UL},{0x2EL,249UL,0x51L,253UL,249UL,253UL}},{{0x2EL,249UL,0x51L,253UL,249UL,253UL},{0x2EL,249UL,0x51L,253UL,249UL,253UL}},{{0x2EL,249UL,0x51L,253UL,249UL,253UL},{0x2EL,249UL,0x51L,253UL,249UL,253UL}},{{0x2EL,249UL,0x51L,253UL,249UL,253UL},{0x2EL,249UL,0x51L,253UL,249UL,253UL}}};
        int8_t l_404[6] = {9L,0x0BL,9L,9L,0x0BL,9L};
        int8_t ***l_415 = (void*)0;
        int8_t **l_417 = &l_329[1][0];
        int8_t ***l_416 = &l_417;
        int16_t **l_428 = &l_197;
        int32_t l_430 = (-1L);
        int32_t *l_431[3][4][6] = {{{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2}},{{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2}},{{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2},{&l_430,&p_1719->g_2,&l_386,&l_92[6][1][4],&l_386,&p_1719->g_2}}};
        int i, j, k;
        for (p_1719->g_212 = 12; (p_1719->g_212 >= 30); ++p_1719->g_212)
        { /* block id: 88 */
            int32_t **l_230 = &l_84;
            int8_t *l_239 = &p_1719->g_240;
            for (p_1719->g_178 = 0; p_1719->g_178 < 9; p_1719->g_178 += 1)
            {
                p_1719->g_90[p_1719->g_178] = 0x32F358D3L;
            }
            if ((safe_lshift_func_uint16_t_u_s((++(*l_221)), (safe_rshift_func_uint16_t_u_s(((*l_202) |= (((void*)0 != l_230) > (1L ^ (safe_sub_func_uint32_t_u_u(((*l_200) = (0L | (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(2L, (((l_128 == &p_1719->g_201) ^ (p_75 , ((*l_239) = 0x4AL))) >= p_1719->g_90[6]))) | 4294967295UL), 2)), 0x1AL)))), l_241[1]))))), p_1719->g_90[6])))))
            { /* block id: 94 */
                (*l_202) &= ((safe_lshift_func_uint8_t_u_u(247UL, 2)) > ((**l_230) , 0xD560089FL));
            }
            else
            { /* block id: 96 */
                uint16_t **l_253 = &l_221;
                uint16_t **l_254 = (void*)0;
                uint16_t **l_255[3];
                int8_t **l_273 = (void*)0;
                int8_t *l_274 = &p_1719->g_240;
                int8_t *l_276 = (void*)0;
                int8_t **l_275 = &l_276;
                int32_t *l_285[1][6][8] = {{{&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,(void*)0},{&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,(void*)0},{&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,(void*)0},{&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,(void*)0},{&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,(void*)0},{&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,&p_1719->g_87,(void*)0}}};
                int32_t ***l_305[1][6] = {{&l_127[0][5],&l_127[0][5],&l_127[0][5],&l_127[0][5],&l_127[0][5],&l_127[0][5]}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_255[i] = (void*)0;
                p_1719->g_277 &= (((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((0x6252L | ((safe_lshift_func_int8_t_s_u(1L, (((*l_253) = l_252) == (p_1719->g_256 = &p_1719->g_57[0])))) <= (((((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_239) = (((((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(p_75, ((p_1719->g_178 , p_75) | (safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((((((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((l_239 != ((*l_275) = (l_274 = &p_1719->g_240))) & p_1719->g_90[1]), 0x77L)), 1UL)) , p_1719->g_57[0]) > 1UL) , (**l_230)) , p_1719->g_90[5]) , (**l_230)), p_1719->g_90[6])), 65535UL))))), p_75)) & 251UL) > p_75) , p_1719->g_2) || 0x51L)), (**l_230))), p_75)) > p_75) , p_1719->g_203) <= p_75) , p_1719->g_57[0]))), 1UL)), p_1719->g_147)), p_1719->g_81)) >= p_75) , p_1719->g_2);
                for (p_1719->g_81 = (-15); (p_1719->g_81 <= 8); p_1719->g_81++)
                { /* block id: 105 */
                    uint32_t l_304 = 0x6D0D217EL;
                    (*l_202) = ((*p_1719->g_256) < ((l_241[1] , l_280[0][1]) == ((((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((-6L), 3)), ((void*)0 == l_285[0][3][7]))) ^ (*l_202)) <= p_75) , &p_1719->g_57[0])));
                    for (p_1719->g_139 = (-17); (p_1719->g_139 > 1); p_1719->g_139 = safe_add_func_int8_t_s_s(p_1719->g_139, 7))
                    { /* block id: 109 */
                        int32_t *l_288 = (void*)0;
                        l_288 = &l_180[1];
                        (*l_202) &= ((safe_mod_func_int64_t_s_s((+((((safe_rshift_func_int16_t_s_s((l_295 &= ((safe_sub_func_int32_t_s_s(p_1719->g_16[3][3], ((*l_200) ^= (0xC7L || (-7L))))) < 4294967288UL)), p_75)) , (safe_mul_func_int16_t_s_s((p_1719->g_306 &= ((safe_lshift_func_uint8_t_u_u(p_1719->g_178, 0)) <= (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((l_304 <= ((l_305[0][5] = l_305[0][5]) != (void*)0)), (**l_230))), (*l_84))))), (-1L)))) || p_1719->g_81) , l_307[0][8])), 0x5A0DB132F7EAB353L)) || p_1719->g_2);
                        l_288 = ((*l_288) , &p_1719->g_203);
                        l_288 = &p_1719->g_2;
                    }
                }
                if (p_1719->g_90[0])
                    continue;
                (*l_230) = (*l_230);
            }
        }
        for (l_95 = 0; (l_95 == 11); l_95 = safe_add_func_uint8_t_u_u(l_95, 1))
        { /* block id: 126 */
            uint8_t l_321[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int8_t *l_326 = &p_1719->g_240;
            int8_t *l_328 = &p_1719->g_240;
            int32_t l_340[4];
            int i;
            for (i = 0; i < 4; i++)
                l_340[i] = 0x57139760L;
            (1 + 1);
        }
        p_1719->g_90[0] |= (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((((void*)0 == l_196) ^ (((!(p_75 != (((*l_351) = (((*l_416) = &l_329[3][2]) != p_1719->g_418)) , (-8L)))) & (((!((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((p_1719->g_178 < (~((*l_202) & ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((*l_428) = (((*p_1719->g_256) && (*p_1719->g_256)) , (void*)0)) != l_198[0]), l_429)), l_430)) < 0x4D81C3ACL)))), 7)), 10)) | 0xD18497A8L)) , (*l_202)) != p_1719->g_16[3][3])) != (*l_84))), p_75)) , p_1719->g_81), p_75)), (*l_313)));
        p_1719->g_90[6] = ((*l_313) = (safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(p_75, (*l_84))) ^ ((*l_351) = (*p_1719->g_407))) , l_428) == l_428), (safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((*l_199) = ((*l_200) |= ((((*l_196) = p_1719->g_90[4]) > ((*l_202) != (*l_313))) | (safe_unary_minus_func_uint16_t_u(((p_1719->g_178 , p_1719->g_139) , (*l_202))))))), 1L)), p_75)))));
    }
    else
    { /* block id: 184 */
        int32_t *l_441[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_442 = 4294967295UL;
        int32_t **l_445 = &l_441[1];
        int i;
        ++l_442;
        (*l_445) = l_441[1];
    }
    return &p_1719->g_16[3][3];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1720;
    struct S0* p_1719 = &c_1720;
    struct S0 c_1721 = {
        7L, // p_1719->g_2
        {{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL}}, // p_1719->g_16
        0x4959L, // p_1719->g_21
        0x7E69L, // p_1719->g_28
        65532UL, // p_1719->g_30
        &p_1719->g_30, // p_1719->g_29
        {(void*)0,&p_1719->g_16[3][3],(void*)0,(void*)0,&p_1719->g_16[3][3],(void*)0,(void*)0,&p_1719->g_16[3][3],(void*)0,(void*)0}, // p_1719->g_36
        {0UL}, // p_1719->g_57
        0x48BAL, // p_1719->g_81
        1L, // p_1719->g_87
        {0x28D85E26L,0x28D85E26L,0x28D85E26L,0x28D85E26L,0x28D85E26L,0x28D85E26L,0x28D85E26L,0x28D85E26L,0x28D85E26L}, // p_1719->g_90
        6UL, // p_1719->g_139
        0x7FL, // p_1719->g_147
        0x142405EAL, // p_1719->g_178
        0x9614A238L, // p_1719->g_201
        0x178EC09FL, // p_1719->g_203
        (void*)0, // p_1719->g_207
        {&p_1719->g_207,&p_1719->g_207,&p_1719->g_207,&p_1719->g_207,&p_1719->g_207}, // p_1719->g_206
        18446744073709551615UL, // p_1719->g_212
        0x63L, // p_1719->g_240
        &p_1719->g_57[0], // p_1719->g_256
        0x7730FFB654587319L, // p_1719->g_277
        0xA4620AD7L, // p_1719->g_306
        1L, // p_1719->g_332
        {{{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L}},{{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L}},{{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L}},{{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L}},{{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L}},{{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L}},{{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L},{(-10L),9L,0x44L,0x06L}}}, // p_1719->g_334
        (-9L), // p_1719->g_393
        &p_1719->g_332, // p_1719->g_407
        {&p_1719->g_240,&p_1719->g_240,&p_1719->g_240,&p_1719->g_240,&p_1719->g_240,&p_1719->g_240,&p_1719->g_240,&p_1719->g_240,&p_1719->g_240}, // p_1719->g_419
        &p_1719->g_419[7], // p_1719->g_418
        &p_1719->g_87, // p_1719->g_478
        &p_1719->g_478, // p_1719->g_477
        &p_1719->g_477, // p_1719->g_476
        &p_1719->g_476, // p_1719->g_475
        &p_1719->g_90[6], // p_1719->g_596
        1L, // p_1719->g_598
        (void*)0, // p_1719->g_704
        {0x7DECL,0x7DECL,0x7DECL}, // p_1719->g_755
        0x2BCD09E337C6DD28L, // p_1719->g_889
        0xFC05L, // p_1719->g_903
        (-2L), // p_1719->g_931
        0x3BE7FEEDL, // p_1719->g_948
        1UL, // p_1719->g_996
        0x530AF9B46566A308L, // p_1719->g_1063
        0xDAB82313L, // p_1719->g_1064
        (void*)0, // p_1719->g_1072
        (-5L), // p_1719->g_1101
        (-1L), // p_1719->g_1127
        0UL, // p_1719->g_1132
        {{0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL},{0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL},{0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL},{0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL},{0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL,0x180957F0L,0x180957F0L,0x5171DF5DL,0x5171DF5DL}}, // p_1719->g_1134
        {{&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101},{&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101},{&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101},{&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101},{&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101},{&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101,&p_1719->g_1101}}, // p_1719->g_1153
        0x154E5DA44B13BFF3L, // p_1719->g_1254
        {0x78L}, // p_1719->g_1373
        {0x34L,0x34L}, // p_1719->g_1375
        0x49L, // p_1719->g_1427
        (void*)0, // p_1719->g_1438
        0L, // p_1719->g_1522
        0xF3234772L, // p_1719->g_1534
        &p_1719->g_1534, // p_1719->g_1533
        {&p_1719->g_1533,&p_1719->g_1533,&p_1719->g_1533,&p_1719->g_1533,&p_1719->g_1533}, // p_1719->g_1532
        &p_1719->g_1153[3][2], // p_1719->g_1559
        (void*)0, // p_1719->g_1576
        &p_1719->g_596, // p_1719->g_1577
        &p_1719->g_203, // p_1719->g_1628
        (void*)0, // p_1719->g_1629
        (void*)0, // p_1719->g_1632
        {&p_1719->g_178,&p_1719->g_178,&p_1719->g_178,&p_1719->g_178,&p_1719->g_178,&p_1719->g_178,&p_1719->g_178}, // p_1719->g_1691
        0x0D4CB348L, // p_1719->g_1697
    };
    c_1720 = c_1721;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1719);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1719->g_2, "p_1719->g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1719->g_16[i][j], "p_1719->g_16[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1719->g_21, "p_1719->g_21", print_hash_value);
    transparent_crc(p_1719->g_28, "p_1719->g_28", print_hash_value);
    transparent_crc(p_1719->g_30, "p_1719->g_30", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1719->g_57[i], "p_1719->g_57[i]", print_hash_value);

    }
    transparent_crc(p_1719->g_81, "p_1719->g_81", print_hash_value);
    transparent_crc(p_1719->g_87, "p_1719->g_87", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1719->g_90[i], "p_1719->g_90[i]", print_hash_value);

    }
    transparent_crc(p_1719->g_139, "p_1719->g_139", print_hash_value);
    transparent_crc(p_1719->g_147, "p_1719->g_147", print_hash_value);
    transparent_crc(p_1719->g_178, "p_1719->g_178", print_hash_value);
    transparent_crc(p_1719->g_201, "p_1719->g_201", print_hash_value);
    transparent_crc(p_1719->g_203, "p_1719->g_203", print_hash_value);
    transparent_crc(p_1719->g_212, "p_1719->g_212", print_hash_value);
    transparent_crc(p_1719->g_240, "p_1719->g_240", print_hash_value);
    transparent_crc(p_1719->g_277, "p_1719->g_277", print_hash_value);
    transparent_crc(p_1719->g_306, "p_1719->g_306", print_hash_value);
    transparent_crc(p_1719->g_332, "p_1719->g_332", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1719->g_334[i][j][k], "p_1719->g_334[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1719->g_393, "p_1719->g_393", print_hash_value);
    transparent_crc(p_1719->g_598, "p_1719->g_598", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1719->g_755[i], "p_1719->g_755[i]", print_hash_value);

    }
    transparent_crc(p_1719->g_889, "p_1719->g_889", print_hash_value);
    transparent_crc(p_1719->g_903, "p_1719->g_903", print_hash_value);
    transparent_crc(p_1719->g_931, "p_1719->g_931", print_hash_value);
    transparent_crc(p_1719->g_948, "p_1719->g_948", print_hash_value);
    transparent_crc(p_1719->g_996, "p_1719->g_996", print_hash_value);
    transparent_crc(p_1719->g_1063, "p_1719->g_1063", print_hash_value);
    transparent_crc(p_1719->g_1064, "p_1719->g_1064", print_hash_value);
    transparent_crc(p_1719->g_1101, "p_1719->g_1101", print_hash_value);
    transparent_crc(p_1719->g_1127, "p_1719->g_1127", print_hash_value);
    transparent_crc(p_1719->g_1132, "p_1719->g_1132", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1719->g_1134[i][j], "p_1719->g_1134[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1719->g_1254, "p_1719->g_1254", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1719->g_1373[i], "p_1719->g_1373[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1719->g_1375[i], "p_1719->g_1375[i]", print_hash_value);

    }
    transparent_crc(p_1719->g_1427, "p_1719->g_1427", print_hash_value);
    transparent_crc(p_1719->g_1522, "p_1719->g_1522", print_hash_value);
    transparent_crc(p_1719->g_1534, "p_1719->g_1534", print_hash_value);
    transparent_crc(p_1719->g_1697, "p_1719->g_1697", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
