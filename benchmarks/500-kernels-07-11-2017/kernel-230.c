// -g 64,41,1 -l 16,1,1
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


// Seed: 3234151807

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   volatile int64_t  f2;
   volatile int32_t  f3;
   uint64_t  f4;
   volatile uint32_t  f5;
   int32_t  f6;
   int32_t  f7;
   volatile int32_t  f8;
};

struct S1 {
    int16_t g_5;
    volatile int32_t g_18;
    int64_t g_19;
    int16_t g_21;
    int16_t *g_20[7];
    int32_t g_30;
    int16_t *g_52;
    int16_t **g_51;
    uint64_t g_62[1];
    uint32_t g_68[10][4][4];
    uint16_t g_72;
    int32_t g_94;
    int16_t g_108[10];
    int8_t g_145;
    int16_t g_148;
    volatile int16_t g_164[9][5][2];
    volatile int16_t * volatile g_163;
    volatile int16_t * volatile *g_162;
    volatile int16_t * volatile * volatile *g_161[1][2];
    volatile int16_t * volatile * volatile **g_160;
    uint64_t g_172[10][4][4];
    int32_t g_176;
    uint8_t g_191;
    int32_t g_202[8];
    uint16_t g_208[5][4][7];
    volatile struct S0 g_239;
    volatile struct S0 *g_238;
    uint8_t g_244;
    uint32_t g_295;
    int32_t *g_300;
    uint32_t *g_310;
    uint32_t **g_309;
    uint64_t g_325;
    uint32_t g_335;
    uint32_t g_339;
    uint32_t g_348[8][7];
    uint32_t g_350;
    int32_t *g_358[2][2];
    uint16_t g_382[9][6];
    uint32_t g_445;
    int16_t *g_519;
    int32_t ** volatile g_537;
    volatile int64_t g_548;
    int32_t g_559;
    int32_t *g_560;
    uint32_t g_571;
    struct S0 g_612;
    int16_t ***g_622;
    struct S0 g_627;
    volatile uint32_t *g_659;
    volatile uint32_t **g_658;
    volatile uint32_t ** volatile *g_657[8];
    volatile uint32_t ** volatile * volatile * volatile g_656[6];
    uint32_t g_673;
    struct S0 g_677;
    int8_t *g_723;
    int16_t ****g_733;
    int16_t *****g_732[1];
    uint16_t g_737;
    volatile struct S0 g_767;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_830);
uint8_t  func_8(int32_t  p_9, struct S1 * p_830);
int16_t * func_25(int16_t * p_26, int16_t ** p_27, struct S1 * p_830);
uint16_t  func_34(uint32_t  p_35, uint64_t  p_36, int16_t * p_37, struct S1 * p_830);
int16_t ** func_41(int64_t  p_42, int64_t  p_43, int32_t * p_44, struct S1 * p_830);
int32_t * func_45(int16_t ** p_46, int8_t  p_47, uint32_t  p_48, struct S1 * p_830);
uint8_t  func_83(int16_t ** p_84, int16_t *** p_85, int64_t  p_86, struct S1 * p_830);
int32_t * func_87(int16_t ** p_88, struct S1 * p_830);
int32_t  func_95(int16_t ** p_96, int16_t * p_97, int16_t  p_98, struct S1 * p_830);
int16_t ** func_99(int64_t  p_100, struct S1 * p_830);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_830->g_5 p_830->g_18 p_830->g_19 p_830->g_20 p_830->g_21 p_830->g_30 p_830->g_62 p_830->g_72 p_830->g_94 p_830->g_108 p_830->g_148 p_830->g_52 p_830->g_160 p_830->g_176 p_830->g_208 p_830->g_161 p_830->g_172 p_830->g_309 p_830->g_325 p_830->g_202 p_830->g_310 p_830->g_295 p_830->g_335 p_830->g_339 p_830->g_191 p_830->g_244 p_830->g_382 p_830->g_350 p_830->g_445 p_830->g_300 p_830->g_51 p_830->g_238 p_830->g_239 p_830->g_571 p_830->g_519 p_830->g_348 p_830->g_145 p_830->g_559 p_830->g_163 p_830->g_164 p_830->g_612 p_830->g_627 p_830->g_162 p_830->g_68 p_830->g_656 p_830->g_673 p_830->g_677 p_830->g_732 p_830->g_723 p_830->g_737 p_830->g_767
 * writes: p_830->g_5 p_830->g_30 p_830->g_51 p_830->g_62 p_830->g_68 p_830->g_72 p_830->g_21 p_830->g_94 p_830->g_145 p_830->g_148 p_830->g_108 p_830->g_52 p_830->g_176 p_830->g_295 p_830->g_191 p_830->g_300 p_830->g_309 p_830->g_244 p_830->g_325 p_830->g_335 p_830->g_339 p_830->g_348 p_830->g_350 p_830->g_358 p_830->g_208 p_830->g_382 p_830->g_202 p_830->g_445 p_830->g_310 p_830->g_519 p_830->g_239 p_830->g_560 p_830->g_172 p_830->g_622 p_830->g_19 p_830->g_612.f6 p_830->g_673 p_830->g_723 p_830->g_737 p_830->g_612.f4
 */
int32_t  func_1(struct S1 * p_830)
{ /* block id: 4 */
    uint16_t l_2 = 0xD1ADL;
    int16_t *l_3 = (void*)0;
    int16_t *l_4 = &p_830->g_5;
    int16_t **l_22 = (void*)0;
    int16_t **l_23[9][1][4] = {{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}},{{&p_830->g_20[6],&l_3,&l_3,&p_830->g_20[6]}}};
    int16_t *l_24 = &p_830->g_21;
    int16_t *l_28 = &p_830->g_21;
    int32_t *l_29[3][1];
    uint8_t l_31[4] = {0x71L,0x71L,0x71L,0x71L};
    int8_t l_32 = 0x2BL;
    uint32_t l_33 = 0x5CF69BADL;
    uint8_t l_520[5][6][3] = {{{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL}},{{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL}},{{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL}},{{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL}},{{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL},{6UL,1UL,255UL}}};
    int64_t l_523 = 0x7AE587D5A8D37986L;
    int8_t l_524[10][7] = {{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)},{(-10L),(-6L),(-1L),0x7DL,(-1L),(-6L),(-10L)}};
    int8_t *l_530 = &l_524[2][1];
    int8_t **l_529 = &l_530;
    uint16_t l_535 = 0x27CAL;
    int32_t l_547 = 3L;
    int32_t *l_572 = &p_830->g_559;
    uint8_t l_581 = 1UL;
    int32_t l_608 = 0x3FF4A96AL;
    int64_t l_610 = 1L;
    uint8_t l_672 = 0UL;
    uint32_t *l_699 = &p_830->g_335;
    int16_t *****l_734 = &p_830->g_733;
    uint8_t l_760 = 0x2DL;
    int16_t **l_766 = &l_28;
    uint8_t l_829 = 255UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_29[i][j] = &p_830->g_30;
    }
    if ((((((*l_4) ^= l_2) != (((safe_mod_func_uint8_t_u_u((func_8(((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((1UL || (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_830->g_18, (p_830->g_19 < (p_830->g_20[4] == (l_24 = &p_830->g_21))))), (0x6D4BL ^ ((p_830->g_519 = func_25((((((l_31[2] |= (((((((void*)0 != l_28) >= p_830->g_21) > l_2) , l_2) == p_830->g_19) , l_2)) | l_32) , p_830->g_19) , l_33) , &p_830->g_21), &l_4, p_830)) == (void*)0))))), p_830->g_172[8][2][2])), l_520[3][4][0])) > 0x4AL), p_830) ^ p_830->g_172[8][2][2]), 2UL)) , 0x29DF3969L) , l_523)) && p_830->g_18) || l_524[2][1]))
    { /* block id: 221 */
        int16_t ***l_525 = &l_23[2][0][2];
        int8_t *l_526 = &l_32;
        uint32_t l_536 = 3UL;
        int32_t **l_538 = &p_830->g_358[0][1];
        int32_t l_541 = 0x3AAB1944L;
        int64_t l_543 = 0x00E6B7F63409F1C2L;
        int32_t l_544 = 0x7E2FBDF7L;
        int32_t l_545[1][9][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
        int8_t l_546[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint32_t *l_701[2];
        uint64_t *l_740 = (void*)0;
        uint16_t *l_803 = &p_830->g_382[8][5];
        int64_t l_828 = 5L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_701[i] = &p_830->g_335;
        (*l_538) = &p_830->g_176;
        for (p_830->g_350 = 2; (p_830->g_350 <= 6); p_830->g_350 += 1)
        { /* block id: 227 */
            int32_t l_539 = (-5L);
            int32_t l_540 = (-1L);
            int32_t l_542[10][4][6] = {{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}},{{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL},{0L,0x0466F68AL,(-5L),0x270D2BE2L,0x6F38BECCL,0x088C6D6EL}}};
            uint32_t l_549 = 0x8AF5071FL;
            int i, j, k;
            l_549--;
        }
        for (p_830->g_295 = 0; (p_830->g_295 <= 2); p_830->g_295 += 1)
        { /* block id: 232 */
            int16_t **l_556[8];
            int32_t l_570 = 0x7CFDA62AL;
            int32_t l_580 = (-1L);
            int32_t l_649 = 0x66DFC738L;
            uint32_t ***l_661[2][1];
            uint32_t l_674 = 0x4BC97C1FL;
            int16_t l_706[10] = {0x29F5L,(-4L),0x29F5L,0x29F5L,(-4L),0x29F5L,0x29F5L,(-4L),0x29F5L,0x29F5L};
            int8_t *l_725 = &p_830->g_145;
            int64_t l_788[3];
            uint16_t *l_804[1][9][5] = {{{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]},{&p_830->g_382[7][2],&l_2,(void*)0,&l_2,&p_830->g_382[7][2]}}};
            int32_t l_820 = 8L;
            int32_t l_821 = 0L;
            int32_t l_823 = 0x1B62EC3FL;
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_556[i] = (void*)0;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_661[i][j] = &p_830->g_309;
            }
            for (i = 0; i < 3; i++)
                l_788[i] = 0L;
            for (p_830->g_176 = 2; (p_830->g_176 >= 0); p_830->g_176 -= 1)
            { /* block id: 235 */
                int32_t *l_558 = &p_830->g_559;
                int32_t **l_557[3];
                int32_t l_563[4];
                uint8_t *l_573 = &l_520[3][4][0];
                int16_t l_579[5];
                int8_t *l_599 = &l_546[3];
                int32_t *l_607 = &l_545[0][4][0];
                int i;
                for (i = 0; i < 3; i++)
                    l_557[i] = &l_558;
                for (i = 0; i < 4; i++)
                    l_563[i] = 0x2399541CL;
                for (i = 0; i < 5; i++)
                    l_579[i] = 0x753FL;
                (*p_830->g_238) = (*p_830->g_238);
                if (((safe_lshift_func_uint16_t_u_s(1UL, 7)) != ((*p_830->g_238) , (((safe_rshift_func_uint8_t_u_u(p_830->g_108[p_830->g_295], ((*l_573) = ((p_830->g_560 = func_87(l_556[2], p_830)) != (l_572 = (((safe_sub_func_uint32_t_u_u((l_563[1] |= (*p_830->g_310)), ((safe_sub_func_int8_t_s_s((+((*l_530) = p_830->g_239.f7)), (((safe_mod_func_int16_t_s_s((0x7DL <= (safe_mod_func_uint32_t_u_u(1UL, p_830->g_108[p_830->g_295]))), l_570)) < (-5L)) <= l_570))) && p_830->g_571))) != 0L) , (void*)0)))))) != (*p_830->g_310)) ^ p_830->g_94))))
                { /* block id: 242 */
                    uint64_t l_578 = 18446744073709551610UL;
                    l_579[4] = (safe_rshift_func_int16_t_s_s((4294967294UL | ((((&l_558 == (void*)0) > (l_563[2] | p_830->g_239.f3)) >= (1UL ^ (*p_830->g_519))) < (safe_lshift_func_uint16_t_u_s(0xF5DCL, 11)))), l_578));
                }
                else
                { /* block id: 244 */
                    uint64_t *l_596 = &p_830->g_172[3][2][3];
                    uint64_t *l_600 = &p_830->g_325;
                    int32_t l_609 = 1L;
                    int32_t l_611 = (-1L);
                    (*p_830->g_300) ^= (l_580 &= (p_830->g_94 > l_570));
                    l_581 ^= ((*p_830->g_300) = (0x31L <= p_830->g_348[3][6]));
                    l_611 |= (255UL > ((!(safe_lshift_func_int8_t_s_s(0x67L, p_830->g_145))) | (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_830->g_348[0][3], ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(((((((*l_596)++) || p_830->g_559) >= (l_599 == ((((*l_600) = p_830->g_335) , (safe_rshift_func_int16_t_s_u((p_830->g_108[p_830->g_295] , (safe_div_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s(((((((l_607 = (void*)0) != &p_830->g_176) < l_580) && p_830->g_244) , l_608) , 1L), l_609)) <= p_830->g_382[2][1]) , 18446744073709551610UL), 0x1EE134BE7C59CB43L))), 0))) , &p_830->g_145))) && (*p_830->g_310)) == (*p_830->g_163)), 6)) , p_830->g_164[4][4][1]), 6L)), 11)) == (*p_830->g_52)), l_610)) | l_570))), (*p_830->g_52)))));
                }
                for (p_830->g_325 = 0; (p_830->g_325 <= 0); p_830->g_325 += 1)
                { /* block id: 256 */
                    (*p_830->g_238) = p_830->g_612;
                }
            }
            for (p_830->g_350 = 0; (p_830->g_350 <= 9); p_830->g_350 += 1)
            { /* block id: 262 */
                int i;
                if (p_830->g_108[(p_830->g_295 + 5)])
                { /* block id: 263 */
                    int16_t ****l_621 = (void*)0;
                    int16_t ****l_623 = &l_525;
                    int32_t l_624 = 0x2F84E17AL;
                    int64_t *l_625 = &p_830->g_19;
                    int64_t l_626 = 3L;
                    int64_t l_628[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
                    int i;
                    if ((((((((*l_530) = 0x0AL) | (safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((~(+(safe_add_func_int64_t_s_s(((*l_625) = (((p_830->g_622 = &l_556[3]) != ((*l_623) = &l_23[8][0][3])) != l_624)), (l_624 & (~4294967287UL)))))), ((void*)0 != &l_24))) == 0x480D75CBC169176BL), p_830->g_571)) ^ p_830->g_559) >= l_580) & (*p_830->g_300)), (*p_830->g_163)))) && (**p_830->g_51)) <= 255UL) && l_626) | (**p_830->g_51)))
                    { /* block id: 268 */
                        (*p_830->g_238) = p_830->g_627;
                        return p_830->g_239.f4;
                    }
                    else
                    { /* block id: 271 */
                        uint8_t l_629 = 1UL;
                        (*l_538) = &l_580;
                        (*p_830->g_300) = (*p_830->g_300);
                        --l_629;
                    }
                    return p_830->g_325;
                }
                else
                { /* block id: 277 */
                    return p_830->g_108[(p_830->g_295 + 5)];
                }
            }
            for (l_33 = 2; (l_33 <= 9); l_33 += 1)
            { /* block id: 283 */
                uint32_t l_646 = 0xEA8F7A38L;
                uint32_t ***l_654[8][4] = {{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309},{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309},{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309},{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309},{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309},{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309},{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309},{&p_830->g_309,&p_830->g_309,&p_830->g_309,&p_830->g_309}};
                int32_t l_663 = 0x20309CBFL;
                int8_t l_670 = 0x67L;
                int32_t l_671 = 9L;
                int8_t **l_678 = &l_530;
                int16_t ****l_692[1][8][8] = {{{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525},{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525},{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525},{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525},{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525},{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525},{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525},{&l_525,&l_525,&p_830->g_622,&p_830->g_622,&l_525,(void*)0,(void*)0,&l_525}}};
                int16_t *****l_691 = &l_692[0][2][3];
                uint64_t *l_743 = &p_830->g_325;
                uint32_t l_791 = 0x63993FF0L;
                int16_t l_792 = 0x1AC5L;
                int32_t l_819[8] = {1L,0L,1L,1L,0L,1L,1L,0L};
                int i, j, k;
                for (p_830->g_21 = 9; (p_830->g_21 >= 0); p_830->g_21 -= 1)
                { /* block id: 286 */
                    int64_t l_650 = (-1L);
                    uint16_t *l_651[1];
                    int32_t **l_660 = &l_29[0][0];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_651[i] = &l_535;
                    (*p_830->g_300) = ((safe_sub_func_uint8_t_u_u(l_520[(p_830->g_295 + 1)][(p_830->g_295 + 1)][p_830->g_295], (((((**p_830->g_162) != ((p_830->g_382[2][1] = ((0x7849L == (safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(0xBF37040AL, ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((*l_526) = ((safe_add_func_uint64_t_u_u((~0x0DE32FAC91657065L), (((l_646 && (*p_830->g_310)) , (-10L)) & (safe_lshift_func_int16_t_s_u(0L, 2))))) <= l_646)), p_830->g_21)), p_830->g_30)) || p_830->g_68[1][2][3]) , l_649), p_830->g_559)) == l_650))) , l_646) , 0x67233D03L), (*p_830->g_310)))) , 65533UL)) == l_520[(p_830->g_295 + 1)][(p_830->g_295 + 1)][p_830->g_295])) & l_580) || l_650) , l_520[(p_830->g_295 + 1)][(p_830->g_295 + 1)][p_830->g_295]))) , l_649);
                    for (l_523 = 3; (l_523 <= 9); l_523 += 1)
                    { /* block id: 292 */
                        uint32_t ****l_655 = &l_654[6][2];
                        int32_t l_662 = 0x40E6E8D3L;
                        l_663 ^= (((void*)0 != &p_830->g_191) <= (l_662 = (safe_div_func_uint32_t_u_u((((*l_655) = l_654[6][2]) != ((&p_830->g_300 == (((0x2535327FL == (*p_830->g_300)) != ((p_830->g_656[4] == (void*)0) != (p_830->g_612.f6 >= l_570))) , l_660)) , l_661[0][0])), l_662))));
                    }
                    for (p_830->g_612.f6 = 0; (p_830->g_612.f6 <= 2); p_830->g_612.f6 += 1)
                    { /* block id: 299 */
                        int i;
                        if (p_830->g_108[(p_830->g_612.f6 + 5)])
                            break;
                        if (p_830->g_108[l_33])
                            continue;
                        (*p_830->g_300) |= (p_830->g_176 != (0x69L != (safe_mul_func_uint8_t_u_u(p_830->g_612.f6, ((&l_572 == &l_572) , p_830->g_108[(p_830->g_612.f6 + 5)])))));
                    }
                }
                if ((l_671 |= ((*p_830->g_300) = (safe_add_func_uint32_t_u_u(l_663, l_670)))))
                { /* block id: 307 */
                    p_830->g_673 &= (!((p_830->g_382[2][1] , l_672) , (*p_830->g_300)));
                    ++l_674;
                }
                else
                { /* block id: 310 */
                    return p_830->g_62[0];
                }
                if (((p_830->g_677 , l_678) != (void*)0))
                { /* block id: 313 */
                    int16_t ***l_679 = &l_23[4][0][3];
                    int32_t l_682 = (-1L);
                    uint16_t l_727 = 0x7127L;
                    uint64_t *l_742 = &p_830->g_62[0];
                    int16_t l_759 = 0x7ABFL;
                    int32_t *l_765 = &p_830->g_559;
                    if ((((l_679 != (*p_830->g_160)) & (safe_mul_func_uint16_t_u_u(l_682, (*p_830->g_519)))) , ((((safe_div_func_int32_t_s_s((!(p_830->g_191 || (-1L))), (safe_mul_func_int8_t_s_s((((((((safe_add_func_int32_t_s_s((l_682 = 0x030F0CF6L), (p_830->g_339 ^= l_649))) ^ (&p_830->g_160 != l_691)) != 0x7A7F3C11L) == l_646) , l_682) & p_830->g_164[6][2][1]) > p_830->g_145), p_830->g_295)))) == p_830->g_191) , 7L) && p_830->g_627.f6)))
                    { /* block id: 316 */
                        uint16_t *l_693 = (void*)0;
                        uint16_t *l_694 = &p_830->g_208[2][1][1];
                        uint32_t **l_700 = &l_699;
                        int32_t l_704 = 0x41113AD5L;
                        uint16_t l_705 = 0UL;
                        int64_t *l_724 = &l_610;
                        uint32_t l_726 = 0UL;
                        uint64_t *l_735 = &p_830->g_62[0];
                        int i;
                        l_706[5] = (+(((*l_694) &= (0xE5D7BFA746DA29CDL >= (0x3934325DC4568FBAL | 0xB5BC70419BC6C968L))) , (((safe_sub_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((((((*l_700) = l_699) != l_701[0]) || (safe_mul_func_uint8_t_u_u(((((l_704 , ((*p_830->g_300) , (&p_830->g_145 == ((*l_529) = &p_830->g_145)))) || (*p_830->g_52)) ^ 4294967291UL) == 0x2D6C325BBDE5C875L), 255UL))) <= p_830->g_172[3][0][0]), l_544)) ^ l_705) | 1UL), 8UL)) && 0x6AL) , 0x6A0630EFL)));
                        l_649 |= ((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u(l_670, 1UL)), 0x2508L)) >= (((*l_694) = 0x4E9AL) , ((~((safe_sub_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((0xBD52L > ((*l_694) = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*p_830->g_300) |= ((!(safe_div_func_int8_t_s_s((((p_830->g_723 = &p_830->g_145) == ((~((*l_724) = (-2L))) , l_725)) || ((l_646 , l_726) && p_830->g_208[2][1][1])), 247UL))) && 0L)) < (-1L)), p_830->g_627.f6)), p_830->g_612.f4)))) < l_682), l_727)), p_830->g_172[0][2][0])) == l_682) , 0x4FB478549BE39DBAL) & 1L), l_726)) && 0x1E99E090L)) >= l_544)));
                        (*p_830->g_300) ^= ((l_682 , l_726) && ((((p_830->g_108[l_33] = (*p_830->g_519)) & (l_705 , (safe_add_func_int8_t_s_s(l_704, l_706[8])))) >= ((*l_735) = ((safe_lshift_func_int16_t_s_s(((l_734 = p_830->g_732[0]) != &p_830->g_733), ((*p_830->g_723) | l_726))) <= l_663))) & l_727));
                    }
                    else
                    { /* block id: 331 */
                        int32_t l_736 = 0x76001E14L;
                        uint64_t **l_741[2];
                        int64_t *l_758 = &l_610;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_741[i] = (void*)0;
                        p_830->g_737--;
                        if (l_682)
                            continue;
                        (*p_830->g_300) = ((((((l_742 = l_740) == l_743) <= 0x1DCABB0CL) < p_830->g_627.f5) <= (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_649 = (p_830->g_208[2][1][1] <= (l_580 && ((*l_758) = (safe_lshift_func_uint8_t_u_s(((((**p_830->g_51) >= (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((p_830->g_677.f4 < (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(((*p_830->g_310) && (*p_830->g_310)), 0x251CC167F5D061E4L)), p_830->g_62[0]))), p_830->g_339)), l_674))) , l_736) ^ (*p_830->g_310)), l_706[6])))))) & l_674), p_830->g_677.f1)), 0x14A4L))) , (*p_830->g_300));
                    }
                    if (l_646)
                        continue;
                    l_760++;
                    if ((safe_lshift_func_int16_t_s_u((l_765 == &p_830->g_559), 8)))
                    { /* block id: 341 */
                        (*p_830->g_300) |= 0L;
                        (*l_538) = func_87(l_766, p_830);
                        (*l_538) = &p_830->g_176;
                    }
                    else
                    { /* block id: 345 */
                        (*l_538) = func_87(func_41(p_830->g_176, p_830->g_612.f8, &l_570, p_830), p_830);
                    }
                }
                else
                { /* block id: 348 */
                    (*p_830->g_238) = p_830->g_767;
                }
                for (l_541 = 0; (l_541 <= 2); l_541 += 1)
                { /* block id: 353 */
                    uint32_t l_768[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_768[i] = 0xD9F6D32EL;
                    for (p_830->g_612.f4 = 0; (p_830->g_612.f4 <= 2); p_830->g_612.f4 += 1)
                    { /* block id: 356 */
                        (*p_830->g_238) = (*p_830->g_238);
                        ++l_768[3];
                        if ((*p_830->g_300))
                            continue;
                        return l_706[5];
                    }
                    return p_830->g_30;
                }
                for (p_830->g_5 = 2; (p_830->g_5 >= 0); p_830->g_5 -= 1)
                { /* block id: 366 */
                    int32_t l_773[6][9][4] = {{{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L}},{{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L}},{{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L}},{{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L}},{{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L}},{{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L},{1L,0x075C9B59L,4L,0L}}};
                    int32_t l_789 = 0x1413828DL;
                    int8_t l_790 = 0x5CL;
                    int32_t l_793 = 0x2A9B2490L;
                    uint32_t *l_805 = (void*)0;
                    uint32_t *l_806[6];
                    int32_t l_813 = (-1L);
                    int32_t l_814 = 0x432021D6L;
                    int32_t l_815 = (-1L);
                    int32_t l_816 = 0x02F11ADDL;
                    int32_t l_818 = 1L;
                    int16_t l_822 = 0x1179L;
                    int32_t l_824[6] = {0x0024A1E0L,0x0024A1E0L,0x0024A1E0L,0x0024A1E0L,0x0024A1E0L,0x0024A1E0L};
                    uint32_t l_825 = 0xB1C22EEFL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_806[i] = (void*)0;
                    l_570 &= ((0x41L > p_830->g_239.f5) <= ((*p_830->g_723) && (safe_sub_func_int64_t_s_s(p_830->g_30, (l_773[1][4][2] && (safe_sub_func_int16_t_s_s(((l_674 == 4294967295UL) ^ (((safe_add_func_uint32_t_u_u((l_792 = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((((((((*l_743) &= 3UL) , ((*l_699) = (((((safe_rshift_func_int8_t_s_s((*p_830->g_723), 2)) == 0L) | p_830->g_68[4][1][2]) , l_788[2]) != l_789))) , (*p_830->g_723)) < l_649) > 1UL) >= l_773[5][7][1]) || 0x43C8BC78735C346FL) && l_773[1][4][2]), (**p_830->g_51))), 5)), l_790)), l_791))), (*p_830->g_300))) == l_545[0][4][0]) , (*p_830->g_310))), l_793)))))));
                    if (((safe_lshift_func_uint16_t_u_u(p_830->g_627.f6, 8)) >= (((safe_add_func_uint16_t_u_u((0x2BE3L && l_706[5]), (safe_unary_minus_func_int32_t_s((+(~((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_663, 0xD6L)), (((*p_830->g_300) = (-9L)) == (&p_830->g_382[8][5] == (l_804[0][0][4] = l_803))))) >= ((l_789 = (((p_830->g_350++) , (((~(safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0x707E50E7L, (-8L))), l_789))) <= l_674) || p_830->g_239.f1)) || 7L)) < 4294967292UL)))))))) <= l_663) , l_674)))
                    { /* block id: 375 */
                        int32_t l_817[5][6][2] = {{{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L}},{{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L}},{{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L}},{{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L}},{{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L},{2L,0x42E273B8L}}};
                        int i, j, k;
                        l_825--;
                    }
                    else
                    { /* block id: 377 */
                        return p_830->g_767.f8;
                    }
                    if (l_570)
                        continue;
                }
            }
        }
        return l_828;
    }
    else
    { /* block id: 385 */
        (*p_830->g_238) = (*p_830->g_238);
    }
    return l_829;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_8(int32_t  p_9, struct S1 * p_830)
{ /* block id: 218 */
    int32_t *l_521 = &p_830->g_30;
    int32_t **l_522 = &l_521;
    (*l_522) = l_521;
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_30 p_830->g_21 p_830->g_19 p_830->g_62 p_830->g_72 p_830->g_94 p_830->g_108 p_830->g_148 p_830->g_52 p_830->g_160 p_830->g_176 p_830->g_208 p_830->g_161 p_830->g_172 p_830->g_309 p_830->g_325 p_830->g_202 p_830->g_310 p_830->g_295 p_830->g_335 p_830->g_339 p_830->g_191 p_830->g_244 p_830->g_382 p_830->g_350 p_830->g_445 p_830->g_300 p_830->g_51
 * writes: p_830->g_30 p_830->g_51 p_830->g_62 p_830->g_68 p_830->g_72 p_830->g_21 p_830->g_94 p_830->g_145 p_830->g_148 p_830->g_108 p_830->g_52 p_830->g_176 p_830->g_295 p_830->g_191 p_830->g_300 p_830->g_309 p_830->g_244 p_830->g_325 p_830->g_335 p_830->g_339 p_830->g_348 p_830->g_350 p_830->g_358 p_830->g_208 p_830->g_382 p_830->g_202 p_830->g_445 p_830->g_310
 */
int16_t * func_25(int16_t * p_26, int16_t ** p_27, struct S1 * p_830)
{ /* block id: 8 */
    int8_t l_39 = 0x34L;
    int32_t *l_40 = &p_830->g_30;
    int16_t **l_50 = &p_830->g_20[1];
    int16_t ***l_49[9][6] = {{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50},{&l_50,&l_50,(void*)0,&l_50,&l_50,&l_50}};
    int16_t **l_504 = (void*)0;
    int8_t *l_511 = &l_39;
    int8_t *l_513 = &p_830->g_145;
    int8_t **l_512 = &l_513;
    int8_t *l_516 = &l_39;
    uint32_t **l_517 = &p_830->g_310;
    int32_t *l_518 = &p_830->g_202[4];
    int i, j;
    (*l_40) = (p_830->g_30 >= (func_34(p_830->g_21, p_830->g_19, &p_830->g_21, p_830) | l_39));
    p_27 = (l_504 = func_41(p_830->g_19, p_830->g_19, func_45((p_830->g_51 = (void*)0), (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((*l_40), 0x240A493BBC76156DL)), (((p_830->g_21 , ((safe_mod_func_int32_t_s_s(p_830->g_30, ((p_830->g_21 && (safe_sub_func_int32_t_s_s(p_830->g_19, (*l_40)))) & (*l_40)))) < (*l_40))) || (*l_40)) ^ (*l_40)))), p_830->g_21, p_830), p_830));
    (*l_518) |= (((safe_sub_func_uint64_t_u_u(1UL, p_830->g_208[4][0][5])) >= ((**p_27) | ((safe_lshift_func_uint8_t_u_u((*l_40), 4)) != (safe_sub_func_int16_t_s_s(((&p_830->g_145 != ((*l_512) = (l_511 = &l_39))) >= ((p_830->g_295 &= ((safe_mod_func_int8_t_s_s(((*l_516) = (*l_40)), ((l_40 != ((*l_517) = l_40)) & (*l_40)))) > (*l_40))) || (*l_40))), (**p_27)))))) | p_830->g_176);
    return (*p_830->g_51);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_34(uint32_t  p_35, uint64_t  p_36, int16_t * p_37, struct S1 * p_830)
{ /* block id: 9 */
    uint8_t l_38[8][6][5] = {{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}},{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}},{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}},{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}},{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}},{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}},{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}},{{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL},{0x01L,0UL,0xC3L,0x40L,0UL}}};
    int i, j, k;
    return l_38[7][2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_51 p_830->g_52 p_830->g_295 p_830->g_382 p_830->g_445 p_830->g_300
 * writes: p_830->g_52 p_830->g_191 p_830->g_30 p_830->g_202
 */
int16_t ** func_41(int64_t  p_42, int64_t  p_43, int32_t * p_44, struct S1 * p_830)
{ /* block id: 203 */
    int16_t *l_493 = &p_830->g_108[4];
    int16_t ***l_497 = &p_830->g_51;
    int16_t ****l_496[8] = {&l_497,&l_497,&l_497,&l_497,&l_497,&l_497,&l_497,&l_497};
    int32_t l_502[7][8][4] = {{{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L}},{{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L}},{{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L}},{{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L}},{{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L}},{{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L}},{{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L},{(-1L),(-8L),0x368BF88FL,4L}}};
    uint8_t *l_503 = &p_830->g_191;
    int i, j, k;
    (*p_830->g_300) = (safe_mul_func_int16_t_s_s(0x55C7L, ((safe_div_func_int16_t_s_s((((*p_830->g_51) = (*p_830->g_51)) == l_493), p_43)) && (safe_mul_func_int8_t_s_s(((((l_496[7] == &l_497) ^ (1L != (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((p_43 , (((((((*l_503) = (l_502[2][6][2] >= p_830->g_295)) == p_830->g_382[2][1]) < 0x37D2A30328EB3972L) , p_830->g_445) , &p_830->g_358[0][1]) != (void*)0)), l_502[2][6][2])), 0x056D3206L)))) & p_42) < p_43), 7L)))));
    return (*l_497);
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_62 p_830->g_30 p_830->g_72 p_830->g_19 p_830->g_21 p_830->g_94 p_830->g_108 p_830->g_148 p_830->g_52 p_830->g_160 p_830->g_176 p_830->g_208 p_830->g_161 p_830->g_172 p_830->g_309 p_830->g_325 p_830->g_202 p_830->g_310 p_830->g_295 p_830->g_335 p_830->g_339 p_830->g_191 p_830->g_244 p_830->g_382 p_830->g_350 p_830->g_445 p_830->g_300
 * writes: p_830->g_62 p_830->g_68 p_830->g_72 p_830->g_51 p_830->g_21 p_830->g_94 p_830->g_145 p_830->g_148 p_830->g_108 p_830->g_52 p_830->g_176 p_830->g_295 p_830->g_191 p_830->g_300 p_830->g_309 p_830->g_244 p_830->g_325 p_830->g_335 p_830->g_339 p_830->g_348 p_830->g_350 p_830->g_358 p_830->g_208 p_830->g_382 p_830->g_202 p_830->g_445
 */
int32_t * func_45(int16_t ** p_46, int8_t  p_47, uint32_t  p_48, struct S1 * p_830)
{ /* block id: 13 */
    uint64_t *l_61[3][6][9] = {{{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]}},{{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]}},{{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]},{&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0],(void*)0,&p_830->g_62[0],&p_830->g_62[0],&p_830->g_62[0]}}};
    uint32_t *l_67 = &p_830->g_68[1][2][3];
    uint16_t *l_71 = &p_830->g_72;
    int32_t l_474 = 4L;
    int16_t ***l_477 = &p_830->g_51;
    int32_t **l_488 = &p_830->g_300;
    int i, j, k;
    l_474 = (((p_830->g_62[0]--) < ((safe_div_func_uint32_t_u_u(((*l_67) = p_830->g_30), 0x2018FE19L)) | ((safe_lshift_func_uint16_t_u_u(((*l_71)--), 0)) , (p_48 , p_830->g_19)))) > (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_830->g_30, p_830->g_30)), (safe_sub_func_uint32_t_u_u(p_48, (4294967295UL <= func_34((safe_lshift_func_uint8_t_u_s(func_83(p_46, &p_830->g_51, p_830->g_30, p_830), p_47)), p_47, l_71, p_830)))))));
    (*l_488) = func_87(((*l_477) = func_99((safe_lshift_func_uint8_t_u_u((((((1L | (((0x140AL < ((((((*p_830->g_160) == l_477) || ((p_830->g_108[6] & ((l_71 != ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_474, ((((l_474 , (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_830->g_202[1], p_830->g_335)), 0x5AL)), p_830->g_244))) ^ p_830->g_445) , (*p_830->g_52)) < l_474))), l_474)) , (void*)0)) != 1UL)) || 0x2C10L)) < l_474) <= 0x20943533A8F944D3L) >= l_474)) || p_47) <= (-10L))) && 0x73L) & p_47) > l_474) & p_830->g_94), p_48)), p_830)), p_830);
    (*l_488) = (p_830->g_335 , (*l_488));
    return (*l_488);
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_30 p_830->g_19 p_830->g_94 p_830->g_108 p_830->g_21 p_830->g_148 p_830->g_52 p_830->g_160 p_830->g_176 p_830->g_208 p_830->g_161 p_830->g_172 p_830->g_309 p_830->g_325 p_830->g_202 p_830->g_310 p_830->g_295 p_830->g_335 p_830->g_339 p_830->g_191 p_830->g_244 p_830->g_382 p_830->g_350 p_830->g_445
 * writes: p_830->g_51 p_830->g_21 p_830->g_94 p_830->g_145 p_830->g_148 p_830->g_108 p_830->g_52 p_830->g_176 p_830->g_295 p_830->g_191 p_830->g_300 p_830->g_309 p_830->g_244 p_830->g_325 p_830->g_335 p_830->g_339 p_830->g_348 p_830->g_350 p_830->g_358 p_830->g_208 p_830->g_382 p_830->g_202 p_830->g_445
 */
uint8_t  func_83(int16_t ** p_84, int16_t *** p_85, int64_t  p_86, struct S1 * p_830)
{ /* block id: 17 */
    int32_t *l_93 = &p_830->g_94;
    int8_t *l_144 = &p_830->g_145;
    int32_t *l_146 = (void*)0;
    int32_t *l_147 = (void*)0;
    int64_t l_149 = 2L;
    uint64_t l_150 = 2UL;
    int64_t l_196 = 0x3C7C8A45E37A9842L;
    int32_t *l_249 = (void*)0;
    int32_t l_252 = 0x3ADF7E4CL;
    int32_t l_258 = (-10L);
    uint32_t **l_315 = &p_830->g_310;
    int32_t l_337 = 0x3469EF66L;
    int16_t l_421 = 0x46FFL;
    uint8_t l_467 = 9UL;
    uint8_t l_473[7][5][7] = {{{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL}},{{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL}},{{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL}},{{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL}},{{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL}},{{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL}},{{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL},{5UL,0xD0L,4UL,255UL,5UL,0x03L,0x0DL}}};
    int i, j, k;
lbl_306:
    l_93 = func_87(((*p_85) = (void*)0), p_830);
    if (func_95(func_99(p_86, p_830), (((l_149 = (((((p_86 > ((((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(((*l_144) = (+p_830->g_19)))), p_86)) && (((p_830->g_148 ^= p_86) , l_147) == (void*)0)), (*l_93))) || 7UL) || 0xAFL) == p_86)) | p_830->g_19) && 4294967289UL) & (*p_830->g_52)) <= p_86)) < p_830->g_108[0]) , (void*)0), l_150, p_830))
    { /* block id: 48 */
        return (*l_93);
    }
    else
    { /* block id: 50 */
        int64_t l_206 = 0x0B76DA42983A2AA5L;
        int32_t l_242[6][4][3] = {{{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L}},{{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L}},{{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L}},{{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L}},{{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L}},{{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L},{0x542AF56CL,3L,0x1E4480C9L}}};
        int32_t l_246[3][3] = {{(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L)}};
        int16_t ***l_373 = &p_830->g_51;
        int16_t ****l_372 = &l_373;
        int8_t l_443[8][10][3] = {{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}},{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}},{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}},{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}},{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}},{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}},{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}},{{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L},{6L,(-7L),0x07L}}};
        int8_t *l_454 = &l_443[4][4][1];
        int32_t *l_470 = &l_246[2][1];
        int32_t **l_472 = &l_249;
        int i, j, k;
lbl_471:
        for (p_830->g_176 = 0; (p_830->g_176 >= (-17)); p_830->g_176 = safe_sub_func_int16_t_s_s(p_830->g_176, 9))
        { /* block id: 53 */
            int32_t l_199[2];
            int64_t l_219 = (-3L);
            int32_t *l_248 = (void*)0;
            uint32_t *l_294 = &p_830->g_295;
            uint8_t l_296 = 0x58L;
            uint8_t *l_297[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int8_t l_344[10] = {0x60L,0x60L,0x60L,0x60L,0x60L,0x60L,0x60L,0x60L,0x60L,0x60L};
            int32_t l_410 = (-10L);
            int64_t l_465 = (-1L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_199[i] = 0x2B435F6BL;
            for (p_86 = 0; (p_86 <= 9); p_86 += 1)
            { /* block id: 56 */
                uint64_t *l_195 = &p_830->g_172[8][2][2];
                int32_t l_198 = 2L;
                int32_t l_203 = 1L;
                uint64_t l_259 = 0xD988B7A090017A15L;
                int i;
                if (p_830->g_108[p_86])
                    break;
            }
            if (((((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_86, (safe_rshift_func_uint8_t_u_s((+(p_830->g_191 = (l_246[1][1] , ((safe_unary_minus_func_uint32_t_u(((((~(((((safe_div_func_int8_t_s_s(0x75L, (safe_mod_func_int64_t_s_s(p_830->g_208[2][1][1], (((*l_294) = (p_86 , (0x8821L <= (safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(((*p_830->g_160) == (void*)0), (safe_div_func_uint8_t_u_u(p_86, p_86)))) < 0x0D56A654L), 7)) ^ l_246[2][0]) != p_830->g_208[2][1][1]), p_86))))) & p_830->g_30))))) < p_86) != 1UL) >= p_830->g_208[2][1][5]) >= (*p_830->g_52))) <= l_296) && p_830->g_172[1][1][2]) , l_246[2][0]))) || 0x33L)))), p_830->g_94)))), 7)) , p_86) == p_86) | 4294967295UL))
            { /* block id: 110 */
                int32_t *l_298 = (void*)0;
                int32_t **l_299[6][10][4] = {{{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0}},{{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0}},{{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0}},{{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0}},{{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0}},{{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0},{&l_249,&l_93,&l_249,(void*)0}}};
                int i, j, k;
                p_830->g_300 = l_298;
            }
            else
            { /* block id: 112 */
                int32_t **l_303[6][4] = {{&l_248,(void*)0,(void*)0,(void*)0},{&l_248,(void*)0,(void*)0,(void*)0},{&l_248,(void*)0,(void*)0,(void*)0},{&l_248,(void*)0,(void*)0,(void*)0},{&l_248,(void*)0,(void*)0,(void*)0},{&l_248,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (l_252 = 0; (l_252 > 15); l_252++)
                { /* block id: 115 */
                    return p_86;
                }
                l_249 = func_87(&p_830->g_20[5], p_830);
                if (p_86)
                    continue;
            }
            for (p_830->g_191 = (-1); (p_830->g_191 <= 6); p_830->g_191 = safe_add_func_uint64_t_u_u(p_830->g_191, 6))
            { /* block id: 123 */
                int32_t l_336 = 0x1EA8CDBFL;
                int32_t *l_360 = &l_246[1][1];
                int32_t l_425 = 0x3F10B30EL;
                int32_t l_464 = 1L;
                if (p_830->g_176)
                    goto lbl_306;
                for (p_830->g_148 = 0; (p_830->g_148 >= 24); p_830->g_148 = safe_add_func_int8_t_s_s(p_830->g_148, 6))
                { /* block id: 127 */
                    uint32_t ***l_311 = &p_830->g_309;
                    uint32_t ***l_312 = (void*)0;
                    uint32_t **l_314 = (void*)0;
                    uint32_t ***l_313[4] = {&l_314,&l_314,&l_314,&l_314};
                    uint32_t l_316 = 0x97B1DD45L;
                    uint32_t **l_338[6] = {&l_294,&l_294,&l_294,&l_294,&l_294,&l_294};
                    int64_t *l_359 = &l_196;
                    int i;
                    l_315 = ((*l_311) = p_830->g_309);
                    if (l_316)
                        break;
                    for (p_830->g_244 = 0; (p_830->g_244 != 28); p_830->g_244 = safe_add_func_uint16_t_u_u(p_830->g_244, 1))
                    { /* block id: 133 */
                        uint32_t *l_334 = &p_830->g_335;
                        uint32_t *l_347 = &p_830->g_348[0][3];
                        uint32_t *l_349 = &p_830->g_350;
                        int32_t l_357 = (-1L);
                        if (p_830->g_21)
                            goto lbl_306;
                        p_830->g_339 ^= (((safe_lshift_func_uint16_t_u_u(((((*l_311) = (void*)0) == ((!((safe_lshift_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((((++p_830->g_325) > (safe_rshift_func_int16_t_s_s(p_86, ((((safe_lshift_func_int16_t_s_s((((*p_830->g_52) = (((*l_334) ^= ((0xDF9E6AD5141DDC80L || (1L < p_830->g_202[6])) & (*p_830->g_310))) , (0x00562B396DBAAEF4L < ((void*)0 != &p_85)))) > 0xAD6EL), 6)) , (*p_830->g_310)) | l_336) >= 0x8F7EL)))) < p_830->g_172[8][2][2]), 0x6FF6A7A4DC308128L)) && l_337), p_830->g_202[0])) > (-6L))) , l_338[5])) , p_830->g_94), p_86)) ^ 0L) <= 1UL);
                        l_357 &= ((!(safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(l_344[2], 1)) ^ 1L), (safe_div_func_uint16_t_u_u(65526UL, (((*l_349) = (p_86 , ((*l_347) = p_86))) , (safe_div_func_uint16_t_u_u(((p_830->g_208[4][1][2] ^ l_316) > ((safe_add_func_int8_t_s_s((5UL | (((safe_mul_func_uint16_t_u_u(p_830->g_208[4][2][5], l_316)) , 4294967295UL) <= l_242[3][3][0])), 0x68L)) , 0x639C3C8C4852D773L)), p_830->g_21)))))))) != p_86);
                        p_830->g_358[0][1] = (p_830->g_300 = &l_199[1]);
                    }
                    l_360 = func_87(func_99(((*l_359) = l_336), p_830), p_830);
                }
                for (l_206 = 0; (l_206 <= (-1)); l_206 = safe_sub_func_uint64_t_u_u(l_206, 6))
                { /* block id: 151 */
                    int16_t *l_385[3];
                    int8_t *l_416 = (void*)0;
                    int32_t l_419 = 0x536BC6A5L;
                    int32_t *l_423 = &p_830->g_202[6];
                    int32_t *l_424 = (void*)0;
                    int32_t l_466[8][7] = {{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L},{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L},{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L},{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L},{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L},{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L},{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L},{0x1F22E42CL,(-6L),0x4B032A23L,0x1F22E42CL,(-1L),0x4B032A23L,0x4B032A23L}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_385[i] = (void*)0;
                    for (p_830->g_295 = 0; (p_830->g_295 <= 0); p_830->g_295 += 1)
                    { /* block id: 154 */
                        int16_t ****l_368 = (void*)0;
                        int16_t *****l_367 = &l_368;
                        int16_t ***l_371 = (void*)0;
                        int16_t ****l_370 = &l_371;
                        int16_t *****l_369 = &l_370;
                        uint16_t *l_378 = &p_830->g_208[2][1][1];
                        uint16_t *l_381 = &p_830->g_382[2][1];
                        int32_t l_390 = (-1L);
                        int32_t *l_394 = &p_830->g_94;
                        int8_t **l_415[2][6] = {{&l_144,&l_144,&l_144,&l_144,&l_144,&l_144},{&l_144,&l_144,&l_144,&l_144,&l_144,&l_144}};
                        uint32_t *l_420[10][1] = {{&p_830->g_339},{&p_830->g_339},{&p_830->g_339},{&p_830->g_339},{&p_830->g_339},{&p_830->g_339},{&p_830->g_339},{&p_830->g_339},{&p_830->g_339},{&p_830->g_339}};
                        int32_t *l_422[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j, k;
                        l_242[p_830->g_295][(p_830->g_295 + 1)][(p_830->g_295 + 1)] &= ((safe_lshift_func_int16_t_s_s((p_830->g_202[p_830->g_295] < ((*l_360) <= (safe_mul_func_uint8_t_u_u(((l_372 = ((*l_369) = ((*l_367) = &p_85))) != &p_830->g_161[p_830->g_295][p_830->g_295]), p_830->g_191)))), 5)) && ((-1L) <= (((*p_830->g_310) == 0x43B13D28L) < ((0x15L < p_830->g_244) , 0x929073EA4BECD20BL))));
                        l_242[4][3][1] = (safe_lshift_func_uint8_t_u_u(((((*l_381) ^= ((*l_378)++)) < (-5L)) , (p_86 | ((safe_mod_func_int16_t_s_s((l_385[2] != &p_830->g_21), p_86)) | (safe_lshift_func_uint8_t_u_s(p_830->g_172[8][2][2], 7))))), 2));
                        (*l_394) = (safe_add_func_int32_t_s_s(l_390, (safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u((*l_360), (!l_390)))))));
                        l_246[1][1] = (safe_unary_minus_func_uint16_t_u(((p_830->g_339 = ((((!((safe_lshift_func_uint8_t_u_s((l_419 = (safe_mul_func_uint8_t_u_u(p_830->g_325, (l_421 = (p_830->g_244 = ((((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(((safe_mod_func_int64_t_s_s(p_86, l_410)) , ((*l_394) = ((safe_rshift_func_uint16_t_u_s(p_86, 6)) || (&l_196 != &l_149)))), (l_242[0][2][2] = ((safe_rshift_func_uint8_t_u_s(((l_416 = l_144) == (void*)0), 5)) <= (((safe_rshift_func_int16_t_s_u((*p_830->g_52), 14)) || l_419) || p_86))))) < 0xC8L), 6)) <= l_419) < 0x1236L) , 255UL), p_86)), l_419)) == (*l_360)) >= 0UL) <= 1L)))))), 1)) , 0x64DB44F6L)) > 0x362E5C45L) > 6UL) >= (*p_830->g_52))) == p_86)));
                    }
                    l_425 &= ((*l_423) = p_86);
                    for (p_830->g_350 = 1; (p_830->g_350 <= 5); p_830->g_350 += 1)
                    { /* block id: 176 */
                        uint32_t l_442 = 0xB814044BL;
                        int32_t l_444 = 0x71840A26L;
                        uint32_t *l_446 = &l_442;
                        uint32_t *l_447 = &p_830->g_339;
                        int32_t **l_448 = (void*)0;
                        int8_t **l_453 = (void*)0;
                        int32_t *l_463[5][8] = {{&p_830->g_202[4],&p_830->g_202[4],&p_830->g_202[7],&l_425,&p_830->g_30,&l_425,&p_830->g_202[7],&p_830->g_202[4]},{&p_830->g_202[4],&p_830->g_202[4],&p_830->g_202[7],&l_425,&p_830->g_30,&l_425,&p_830->g_202[7],&p_830->g_202[4]},{&p_830->g_202[4],&p_830->g_202[4],&p_830->g_202[7],&l_425,&p_830->g_30,&l_425,&p_830->g_202[7],&p_830->g_202[4]},{&p_830->g_202[4],&p_830->g_202[4],&p_830->g_202[7],&l_425,&p_830->g_30,&l_425,&p_830->g_202[7],&p_830->g_202[4]},{&p_830->g_202[4],&p_830->g_202[4],&p_830->g_202[7],&l_425,&p_830->g_30,&l_425,&p_830->g_202[7],&p_830->g_202[4]}};
                        int i, j;
                        l_360 = ((((((safe_rshift_func_uint16_t_u_s(p_830->g_382[(p_830->g_350 + 1)][p_830->g_350], ((*p_830->g_52) = p_830->g_382[p_830->g_350][p_830->g_350]))) > (((((((*l_447) = (safe_div_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(p_86, (p_86 < (safe_mod_func_uint8_t_u_u((p_86 != ((*l_446) = (((safe_mul_func_int16_t_s_s((((p_830->g_445 ^= (~((p_830->g_208[2][1][1] = (safe_lshift_func_int16_t_s_s(p_86, 7))) == (l_444 ^= (((((((*l_144) = (((((*p_830->g_310) = (((safe_mul_func_int8_t_s_s(p_830->g_202[6], 0x0FL)) ^ (safe_div_func_int64_t_s_s((((255UL && p_86) != (-3L)) && l_442), p_86))) , l_443[4][4][1])) , p_86) , p_86) >= p_86)) & p_86) == 4294967287UL) , p_830->g_172[8][2][2]) == p_830->g_382[3][2]) , 8L))))) , p_830->g_19) || p_830->g_19), 0xFB5BL)) && p_86) < p_830->g_191))), p_86))))) == 1UL) <= p_830->g_176), 4UL))) >= 0x37EA4569L) < 0UL) >= p_830->g_176) , p_830->g_172[8][2][2]) , (-3L))) == l_443[3][6][1]) || 0x6E9EC794L) >= p_86) , &l_246[2][0]);
                        (*l_423) = ((*l_360) >= (safe_rshift_func_uint16_t_u_s(((((safe_mul_func_int8_t_s_s(((l_454 = &l_443[0][6][0]) == (void*)0), (((safe_lshift_func_uint16_t_u_s(((p_86 , &p_830->g_445) == (void*)0), 6)) <= (((0x516394A2L == ((safe_lshift_func_uint16_t_u_u(0UL, 14)) >= (safe_mod_func_uint32_t_u_u((~(*p_830->g_310)), 3L)))) > p_830->g_176) <= p_86)) <= 0UL))) && p_86) & p_830->g_19) != p_86), 8)));
                        l_467++;
                    }
                }
            }
        }
        (*l_470) |= p_86;
        if (p_86)
            goto lbl_471;
        (*l_472) = &l_258;
    }
    return l_473[6][3][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_21 p_830->g_30
 * writes: p_830->g_21
 */
int32_t * func_87(int16_t ** p_88, struct S1 * p_830)
{ /* block id: 19 */
    struct S0 *l_91 = (void*)0;
    int32_t *l_92 = &p_830->g_30;
    for (p_830->g_21 = 0; (p_830->g_21 > (-5)); --p_830->g_21)
    { /* block id: 22 */
        l_91 = (void*)0;
        if (p_830->g_30)
            continue;
    }
    return l_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_94 p_830->g_52 p_830->g_160 p_830->g_21 p_830->g_148 p_830->g_176
 * writes: p_830->g_21 p_830->g_108 p_830->g_94 p_830->g_52 p_830->g_176
 */
int32_t  func_95(int16_t ** p_96, int16_t * p_97, int16_t  p_98, struct S1 * p_830)
{ /* block id: 39 */
    int16_t *l_153 = &p_830->g_21;
    int32_t l_159 = (-1L);
    for (p_830->g_21 = 0; p_830->g_21 < 10; p_830->g_21 += 1)
    {
        p_830->g_108[p_830->g_21] = 0x633AL;
    }
    for (p_830->g_94 = (-26); (p_830->g_94 <= 18); p_830->g_94 = safe_add_func_int16_t_s_s(p_830->g_94, 9))
    { /* block id: 43 */
        uint32_t l_156 = 1UL;
        uint64_t *l_171 = &p_830->g_172[8][2][2];
        int16_t ***l_174 = &p_830->g_51;
        int16_t ****l_173 = &l_174;
        int32_t *l_175 = &p_830->g_176;
        (*l_175) ^= ((!(((p_830->g_52 = (*p_96)) != l_153) && (safe_sub_func_int8_t_s_s(l_156, (safe_mul_func_int8_t_s_s(((l_159 , p_830->g_160) != ((safe_rshift_func_int8_t_s_s(((*p_830->g_52) , (0x8657L == (safe_rshift_func_uint16_t_u_s((l_159 & ((safe_rshift_func_int16_t_s_s((l_171 != (void*)0), (*p_830->g_52))) , p_98)), 5)))), p_98)) , l_173)), p_830->g_148)))))) >= l_159);
    }
    return p_98;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_19 p_830->g_94 p_830->g_108 p_830->g_21 p_830->g_30
 * writes: p_830->g_94
 */
int16_t ** func_99(int64_t  p_100, struct S1 * p_830)
{ /* block id: 28 */
    int32_t *l_101 = &p_830->g_94;
    int32_t *l_102 = &p_830->g_94;
    int32_t *l_103 = &p_830->g_94;
    int32_t *l_104 = &p_830->g_94;
    int32_t *l_105 = &p_830->g_94;
    int32_t *l_106 = &p_830->g_94;
    int32_t *l_107[8] = {&p_830->g_94,&p_830->g_94,&p_830->g_94,&p_830->g_94,&p_830->g_94,&p_830->g_94,&p_830->g_94,&p_830->g_94};
    uint32_t l_109 = 0UL;
    int16_t ***l_120[1];
    int16_t ****l_121 = (void*)0;
    int16_t ***l_123 = (void*)0;
    int16_t ****l_122 = &l_123;
    int16_t ***l_125 = (void*)0;
    int16_t ****l_124 = &l_125;
    int8_t l_138[1];
    int i;
    for (i = 0; i < 1; i++)
        l_120[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_138[i] = 0x6CL;
    l_109++;
    (*l_105) = (-10L);
    (*l_105) = (safe_add_func_uint32_t_u_u((!((safe_lshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((p_830->g_19 >= ((((*l_124) = ((*l_122) = (l_120[0] = l_120[0]))) == &p_830->g_51) && (safe_sub_func_int64_t_s_s(((safe_mod_func_int32_t_s_s(3L, (*l_102))) <= (safe_sub_func_uint64_t_u_u(((void*)0 != &p_830->g_21), (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((!(&p_830->g_30 != (((safe_mul_func_uint8_t_u_u((((((((*l_101) , p_100) <= p_830->g_108[2]) == p_830->g_108[7]) | p_830->g_108[2]) >= 0xB69560C6L) , 0xA3L), 0L)) , (-8L)) , l_106))), 4)), p_830->g_108[2]))))), p_830->g_21)))), 7L)) , 18446744073709551615UL) , l_138[0]), p_100)) <= p_830->g_21), 8)) , p_830->g_30)), p_100));
    return &p_830->g_52;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_831;
    struct S1* p_830 = &c_831;
    struct S1 c_832 = {
        3L, // p_830->g_5
        0x26C12A7BL, // p_830->g_18
        0x7BC8B421DD2EB2FCL, // p_830->g_19
        0x7319L, // p_830->g_21
        {&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21}, // p_830->g_20
        0x0D6DB9E5L, // p_830->g_30
        &p_830->g_21, // p_830->g_52
        &p_830->g_52, // p_830->g_51
        {0x64C7F453ACC8D4E5L}, // p_830->g_62
        {{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}},{{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL},{0xC1E39B24L,8UL,0x4E318651L,0xF7BC9C4DL}}}, // p_830->g_68
        65526UL, // p_830->g_72
        1L, // p_830->g_94
        {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}, // p_830->g_108
        0x4EL, // p_830->g_145
        0x4563L, // p_830->g_148
        {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}}, // p_830->g_164
        &p_830->g_164[4][4][1], // p_830->g_163
        &p_830->g_163, // p_830->g_162
        {{&p_830->g_162,&p_830->g_162}}, // p_830->g_161
        &p_830->g_161[0][0], // p_830->g_160
        {{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}},{{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL},{0xD3D32A36E6C8BF41L,0xF835AF25848B5D35L,0x38C8DFBF4EFD3873L,0xC2692D651C6119FCL}}}, // p_830->g_172
        0L, // p_830->g_176
        0xCAL, // p_830->g_191
        {(-1L),0x15909B31L,(-1L),(-1L),0x15909B31L,(-1L),(-1L),0x15909B31L}, // p_830->g_202
        {{{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L}},{{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L}},{{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L}},{{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L}},{{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L},{0x7B92L,1UL,0xD31DL,0UL,0xD31DL,1UL,0x7B92L}}}, // p_830->g_208
        {0x75937EDC5DE54D68L,0xA6B44293L,0x1F13FC4F8BCC3EDEL,1L,6UL,4UL,-1L,0x2A532D31L,2L}, // p_830->g_239
        &p_830->g_239, // p_830->g_238
        0xDAL, // p_830->g_244
        1UL, // p_830->g_295
        &p_830->g_202[4], // p_830->g_300
        &p_830->g_295, // p_830->g_310
        &p_830->g_310, // p_830->g_309
        0x96008A2179DD76B7L, // p_830->g_325
        0xC6EB257AL, // p_830->g_335
        0x7D9501DDL, // p_830->g_339
        {{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL},{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL},{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL},{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL},{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL},{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL},{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL},{4294967295UL,0x51B67495L,4294967290UL,0UL,4294967290UL,0x51B67495L,4294967295UL}}, // p_830->g_348
        4294967295UL, // p_830->g_350
        {{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_830->g_358
        {{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL},{65530UL,0x7761L,1UL,0x4164L,1UL,0xBE6CL}}, // p_830->g_382
        1UL, // p_830->g_445
        &p_830->g_108[5], // p_830->g_519
        (void*)0, // p_830->g_537
        0x41F23A4D71A5D7CBL, // p_830->g_548
        1L, // p_830->g_559
        &p_830->g_559, // p_830->g_560
        0xAAB87760L, // p_830->g_571
        {0x05B77AE02D1406AAL,0xFEB24F72L,0x3527C7B3ACF59E6DL,0x4258317CL,0x0F3B7C064F217653L,1UL,6L,1L,2L}, // p_830->g_612
        (void*)0, // p_830->g_622
        {0x0E51A3EB0AF50D6BL,5UL,0x0FD2900D85FFB0D1L,2L,0x334E586BB4CE5DAAL,0x9F215618L,0x075CF198L,0x43AC5217L,-3L}, // p_830->g_627
        (void*)0, // p_830->g_659
        &p_830->g_659, // p_830->g_658
        {&p_830->g_658,&p_830->g_658,&p_830->g_658,&p_830->g_658,&p_830->g_658,&p_830->g_658,&p_830->g_658,&p_830->g_658}, // p_830->g_657
        {&p_830->g_657[0],(void*)0,&p_830->g_657[0],&p_830->g_657[0],(void*)0,&p_830->g_657[0]}, // p_830->g_656
        0UL, // p_830->g_673
        {0xB3A7514FFA538F85L,0x357E7017L,-7L,0x5D88EBFBL,0UL,0xB7E6E56BL,0x4C92B778L,-1L,-5L}, // p_830->g_677
        &p_830->g_145, // p_830->g_723
        (void*)0, // p_830->g_733
        {&p_830->g_733}, // p_830->g_732
        65535UL, // p_830->g_737
        {0UL,4294967295UL,-10L,0x64BC0F12L,18446744073709551615UL,0xAA7B827BL,0x4E913468L,0x68A37F1FL,0x6250579BL}, // p_830->g_767
    };
    c_831 = c_832;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_830);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_830->g_5, "p_830->g_5", print_hash_value);
    transparent_crc(p_830->g_18, "p_830->g_18", print_hash_value);
    transparent_crc(p_830->g_19, "p_830->g_19", print_hash_value);
    transparent_crc(p_830->g_21, "p_830->g_21", print_hash_value);
    transparent_crc(p_830->g_30, "p_830->g_30", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_830->g_62[i], "p_830->g_62[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_830->g_68[i][j][k], "p_830->g_68[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_830->g_72, "p_830->g_72", print_hash_value);
    transparent_crc(p_830->g_94, "p_830->g_94", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_830->g_108[i], "p_830->g_108[i]", print_hash_value);

    }
    transparent_crc(p_830->g_145, "p_830->g_145", print_hash_value);
    transparent_crc(p_830->g_148, "p_830->g_148", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_830->g_164[i][j][k], "p_830->g_164[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_830->g_172[i][j][k], "p_830->g_172[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_830->g_176, "p_830->g_176", print_hash_value);
    transparent_crc(p_830->g_191, "p_830->g_191", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_830->g_202[i], "p_830->g_202[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_830->g_208[i][j][k], "p_830->g_208[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_830->g_239.f0, "p_830->g_239.f0", print_hash_value);
    transparent_crc(p_830->g_239.f1, "p_830->g_239.f1", print_hash_value);
    transparent_crc(p_830->g_239.f2, "p_830->g_239.f2", print_hash_value);
    transparent_crc(p_830->g_239.f3, "p_830->g_239.f3", print_hash_value);
    transparent_crc(p_830->g_239.f4, "p_830->g_239.f4", print_hash_value);
    transparent_crc(p_830->g_239.f5, "p_830->g_239.f5", print_hash_value);
    transparent_crc(p_830->g_239.f6, "p_830->g_239.f6", print_hash_value);
    transparent_crc(p_830->g_239.f7, "p_830->g_239.f7", print_hash_value);
    transparent_crc(p_830->g_239.f8, "p_830->g_239.f8", print_hash_value);
    transparent_crc(p_830->g_244, "p_830->g_244", print_hash_value);
    transparent_crc(p_830->g_295, "p_830->g_295", print_hash_value);
    transparent_crc(p_830->g_325, "p_830->g_325", print_hash_value);
    transparent_crc(p_830->g_335, "p_830->g_335", print_hash_value);
    transparent_crc(p_830->g_339, "p_830->g_339", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_830->g_348[i][j], "p_830->g_348[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_830->g_350, "p_830->g_350", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_830->g_382[i][j], "p_830->g_382[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_830->g_445, "p_830->g_445", print_hash_value);
    transparent_crc(p_830->g_548, "p_830->g_548", print_hash_value);
    transparent_crc(p_830->g_559, "p_830->g_559", print_hash_value);
    transparent_crc(p_830->g_571, "p_830->g_571", print_hash_value);
    transparent_crc(p_830->g_612.f0, "p_830->g_612.f0", print_hash_value);
    transparent_crc(p_830->g_612.f1, "p_830->g_612.f1", print_hash_value);
    transparent_crc(p_830->g_612.f2, "p_830->g_612.f2", print_hash_value);
    transparent_crc(p_830->g_612.f3, "p_830->g_612.f3", print_hash_value);
    transparent_crc(p_830->g_612.f4, "p_830->g_612.f4", print_hash_value);
    transparent_crc(p_830->g_612.f5, "p_830->g_612.f5", print_hash_value);
    transparent_crc(p_830->g_612.f6, "p_830->g_612.f6", print_hash_value);
    transparent_crc(p_830->g_612.f7, "p_830->g_612.f7", print_hash_value);
    transparent_crc(p_830->g_612.f8, "p_830->g_612.f8", print_hash_value);
    transparent_crc(p_830->g_627.f0, "p_830->g_627.f0", print_hash_value);
    transparent_crc(p_830->g_627.f1, "p_830->g_627.f1", print_hash_value);
    transparent_crc(p_830->g_627.f2, "p_830->g_627.f2", print_hash_value);
    transparent_crc(p_830->g_627.f3, "p_830->g_627.f3", print_hash_value);
    transparent_crc(p_830->g_627.f4, "p_830->g_627.f4", print_hash_value);
    transparent_crc(p_830->g_627.f5, "p_830->g_627.f5", print_hash_value);
    transparent_crc(p_830->g_627.f6, "p_830->g_627.f6", print_hash_value);
    transparent_crc(p_830->g_627.f7, "p_830->g_627.f7", print_hash_value);
    transparent_crc(p_830->g_627.f8, "p_830->g_627.f8", print_hash_value);
    transparent_crc(p_830->g_673, "p_830->g_673", print_hash_value);
    transparent_crc(p_830->g_677.f0, "p_830->g_677.f0", print_hash_value);
    transparent_crc(p_830->g_677.f1, "p_830->g_677.f1", print_hash_value);
    transparent_crc(p_830->g_677.f2, "p_830->g_677.f2", print_hash_value);
    transparent_crc(p_830->g_677.f3, "p_830->g_677.f3", print_hash_value);
    transparent_crc(p_830->g_677.f4, "p_830->g_677.f4", print_hash_value);
    transparent_crc(p_830->g_677.f5, "p_830->g_677.f5", print_hash_value);
    transparent_crc(p_830->g_677.f6, "p_830->g_677.f6", print_hash_value);
    transparent_crc(p_830->g_677.f7, "p_830->g_677.f7", print_hash_value);
    transparent_crc(p_830->g_677.f8, "p_830->g_677.f8", print_hash_value);
    transparent_crc(p_830->g_737, "p_830->g_737", print_hash_value);
    transparent_crc(p_830->g_767.f0, "p_830->g_767.f0", print_hash_value);
    transparent_crc(p_830->g_767.f1, "p_830->g_767.f1", print_hash_value);
    transparent_crc(p_830->g_767.f2, "p_830->g_767.f2", print_hash_value);
    transparent_crc(p_830->g_767.f3, "p_830->g_767.f3", print_hash_value);
    transparent_crc(p_830->g_767.f4, "p_830->g_767.f4", print_hash_value);
    transparent_crc(p_830->g_767.f5, "p_830->g_767.f5", print_hash_value);
    transparent_crc(p_830->g_767.f6, "p_830->g_767.f6", print_hash_value);
    transparent_crc(p_830->g_767.f7, "p_830->g_767.f7", print_hash_value);
    transparent_crc(p_830->g_767.f8, "p_830->g_767.f8", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
