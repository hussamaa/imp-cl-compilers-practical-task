// -g 96,26,4 -l 4,13,1
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


// Seed: 697402202

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
   int16_t  f1;
};

struct S1 {
    int16_t g_3;
    int32_t g_41;
    int32_t *g_43;
    uint32_t g_69;
    union U0 g_72[4];
    int32_t g_83;
    int16_t g_95;
    int32_t g_108;
    uint64_t g_125[4];
    uint16_t g_147;
    uint8_t g_170;
    uint16_t g_180;
    int64_t g_186;
    int32_t ** volatile g_214;
    uint8_t g_245;
    uint32_t *g_253;
    uint32_t **g_252;
    int64_t g_305;
    int64_t g_306[3];
    int16_t g_335;
    volatile uint32_t g_338;
    volatile int8_t g_360[1][7][1];
    volatile int32_t g_361;
    uint64_t g_363;
    volatile union U0 g_377[1][1];
    int16_t g_400;
    volatile int8_t * volatile *g_427;
    volatile uint16_t g_430;
    volatile uint16_t * volatile g_429;
    volatile uint16_t * volatile * volatile g_428;
    uint8_t g_461[5];
    int8_t g_489;
    int8_t *g_488;
    int8_t **g_487;
    int32_t g_531[4];
    int32_t g_568[7][8];
    volatile uint16_t g_569;
    int32_t ** volatile g_592;
    union U0 g_660;
    int16_t g_722[7];
    uint16_t *g_730;
    uint16_t **g_729[8];
    uint16_t ***g_728;
    uint16_t ****g_727;
    uint8_t * volatile *g_752;
    volatile int32_t g_767;
    volatile int32_t g_769;
    int16_t g_772;
    uint16_t g_773;
    volatile uint32_t g_781[8][8][2];
    int32_t ** volatile g_784;
    int32_t * volatile g_785[3][3];
    int32_t ** volatile g_823;
    uint64_t g_865;
    int32_t * volatile g_873;
    int32_t g_900;
};


/* --- FORWARD DECLARATIONS --- */
uint8_t  func_1(struct S1 * p_915);
int32_t  func_6(int64_t  p_7, uint64_t  p_8, int16_t  p_9, struct S1 * p_915);
int64_t  func_11(uint32_t  p_12, int32_t  p_13, struct S1 * p_915);
int8_t  func_16(uint32_t  p_17, uint64_t  p_18, uint32_t  p_19, int16_t  p_20, uint64_t  p_21, struct S1 * p_915);
int8_t  func_23(int64_t  p_24, uint8_t  p_25, struct S1 * p_915);
uint16_t  func_30(int32_t  p_31, uint32_t  p_32, uint32_t  p_33, int64_t  p_34, struct S1 * p_915);
int32_t * func_36(int64_t  p_37, int64_t  p_38, struct S1 * p_915);
uint64_t  func_47(int32_t * p_48, int32_t * p_49, int32_t * p_50, uint8_t  p_51, struct S1 * p_915);
uint32_t  func_53(uint32_t  p_54, uint64_t  p_55, int32_t * p_56, int32_t * p_57, int32_t * p_58, struct S1 * p_915);
int8_t  func_59(int32_t  p_60, int32_t * p_61, int32_t  p_62, struct S1 * p_915);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_915->g_3 p_915->g_377.f0 p_915->g_487 p_915->g_488 p_915->g_489 p_915->g_461 p_915->g_722 p_915->g_83 p_915->g_306
 * writes: p_915->g_3 p_915->g_489
 */
uint8_t  func_1(struct S1 * p_915)
{ /* block id: 4 */
    int64_t l_2 = 0x748F69F7FD1E814BL;
    uint8_t l_35 = 0xB9L;
    uint32_t l_45 = 0x28CBD6CDL;
    int32_t l_883 = 0x1CC3A9BBL;
    uint32_t *l_904 = &l_45;
    int32_t *l_911 = &l_883;
    int8_t l_912 = 0x36L;
    uint64_t **l_913 = (void*)0;
    uint64_t ***l_914 = &l_913;
    p_915->g_3 = l_2;
    for (p_915->g_3 = 0; (p_915->g_3 > 26); ++p_915->g_3)
    { /* block id: 8 */
        int8_t l_10 = 0x3BL;
        int32_t l_850 = 0x2CBA295CL;
        int32_t l_881 = 0x7DDB5F81L;
        int32_t l_882[1];
        int32_t l_884 = 0x1AA9962EL;
        uint8_t l_885 = 252UL;
        int64_t l_902 = 0L;
        int32_t *l_903 = &l_884;
        int i;
        for (i = 0; i < 1; i++)
            l_882[i] = 0x352837E2L;
        (1 + 1);
    }
    l_912 ^= ((*l_911) = (((*l_904) = 0x7AFC0374L) && (l_45 && (~(p_915->g_377[0][0].f0 < (((4294967286UL | (l_35 , (((safe_sub_func_int64_t_s_s(((((((safe_rshift_func_int8_t_s_s(((**p_915->g_487) = (**p_915->g_487)), (p_915->g_461[4] == (safe_sub_func_int64_t_s_s(l_35, p_915->g_722[4]))))) && l_883) & 0x30BEL) & l_45) < 0x1AB9L) < l_45), 0x685E1B21C6ECB169L)) | l_2) || l_883))) < p_915->g_83) || 0xB713C123L))))));
    (*l_914) = l_913;
    return p_915->g_306[2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_6(int64_t  p_7, uint64_t  p_8, int16_t  p_9, struct S1 * p_915)
{ /* block id: 344 */
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_873
 * writes: p_915->g_83
 */
int64_t  func_11(uint32_t  p_12, int32_t  p_13, struct S1 * p_915)
{ /* block id: 341 */
    int32_t l_872 = (-1L);
    (*p_915->g_873) = l_872;
    return l_872;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_773 p_915->g_461 p_915->g_487 p_915->g_488 p_915->g_489 p_915->g_722 p_915->g_41 p_915->g_186 p_915->g_660.f1 p_915->g_43 p_915->g_428 p_915->g_429 p_915->g_430 p_915->g_363
 * writes: p_915->g_773 p_915->g_41 p_915->g_43 p_915->g_186 p_915->g_660.f1 p_915->g_489 p_915->g_865
 */
int8_t  func_16(uint32_t  p_17, uint64_t  p_18, uint32_t  p_19, int16_t  p_20, uint64_t  p_21, struct S1 * p_915)
{ /* block id: 309 */
    uint32_t l_853[6];
    int i;
    for (i = 0; i < 6; i++)
        l_853[i] = 4294967295UL;
lbl_871:
    for (p_915->g_773 = 0; (p_915->g_773 <= 0); p_915->g_773 += 1)
    { /* block id: 312 */
        int i;
        if (p_915->g_461[p_915->g_773])
            break;
        return (**p_915->g_487);
    }
    for (p_18 = (-11); (p_18 != 34); p_18 = safe_add_func_int32_t_s_s(p_18, 2))
    { /* block id: 318 */
        int32_t **l_856 = &p_915->g_43;
        l_853[0]++;
        (*l_856) = func_36(p_18, p_915->g_722[3], p_915);
        for (p_915->g_186 = 0; (p_915->g_186 >= 28); p_915->g_186++)
        { /* block id: 323 */
            for (p_20 = 6; (p_20 != (-2)); p_20--)
            { /* block id: 326 */
                int8_t l_870 = 0x3FL;
                for (p_915->g_660.f1 = 23; (p_915->g_660.f1 > (-30)); p_915->g_660.f1--)
                { /* block id: 329 */
                    uint16_t l_863 = 65535UL;
                    uint64_t *l_864 = &p_915->g_865;
                    l_870 = ((255UL > l_863) > (((**p_915->g_487) ^= p_17) , ((((*l_864) = p_19) , ((safe_div_func_uint8_t_u_u(0x64L, (safe_rshift_func_int8_t_s_u(((p_17 != ((**l_856) = 4UL)) <= ((((0x3E9DL >= p_19) ^ (**p_915->g_428)) >= p_18) , p_915->g_363)), p_17)))) == p_19)) & l_863)));
                }
            }
            if (p_19)
                continue;
        }
    }
    if (p_915->g_186)
        goto lbl_871;
    return (*p_915->g_488);
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_41 p_915->g_3 p_915->g_43 p_915->g_69 p_915->g_72 p_915->g_72.f0 p_915->g_83 p_915->g_95 p_915->g_125 p_915->g_108 p_915->g_363 p_915->g_660.f0
 * writes: p_915->g_69 p_915->g_83 p_915->g_108 p_915->g_125 p_915->g_41 p_915->g_95 p_915->g_147 p_915->g_363 p_915->g_43
 */
int8_t  func_23(int64_t  p_24, uint8_t  p_25, struct S1 * p_915)
{ /* block id: 16 */
    int32_t l_46[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t *l_52[5][7][2] = {{{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41}},{{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41}},{{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41}},{{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41}},{{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41}}};
    uint32_t l_847 = 1UL;
    int i, j, k;
    for (p_24 = 5; (p_24 >= 0); p_24 -= 1)
    { /* block id: 19 */
        uint8_t l_115 = 0x72L;
        int32_t *l_116 = &p_915->g_41;
        uint32_t *l_139 = (void*)0;
        uint32_t *l_140[2];
        int32_t **l_846 = &p_915->g_43;
        int i;
        for (i = 0; i < 2; i++)
            l_140[i] = &p_915->g_69;
        (*l_846) = func_36(l_46[p_24], (func_47(l_52[0][6][0], l_52[2][3][0], (((*l_116) = func_53(p_915->g_41, (func_59(p_915->g_3, &p_915->g_41, (*p_915->g_43), p_915) != ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(l_46[p_24], p_915->g_3)), l_46[p_24])), l_115)) < (-8L))), &p_915->g_41, &p_915->g_41, l_116, p_915)) , l_140[0]), p_25, p_915) , p_915->g_660.f0), p_915);
    }
    l_847--;
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_3 p_915->g_41
 * writes: p_915->g_41 p_915->g_43
 */
uint16_t  func_30(int32_t  p_31, uint32_t  p_32, uint32_t  p_33, int64_t  p_34, struct S1 * p_915)
{ /* block id: 9 */
    int64_t l_44[1];
    int i;
    for (i = 0; i < 1; i++)
        l_44[i] = 0x5EDC87A9B65CAB43L;
    p_915->g_43 = func_36(p_31, p_915->g_3, p_915);
    return l_44[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_41
 * writes: p_915->g_41
 */
int32_t * func_36(int64_t  p_37, int64_t  p_38, struct S1 * p_915)
{ /* block id: 10 */
    int32_t l_39 = 0x4A2C930FL;
    int32_t *l_40 = &p_915->g_41;
    int32_t *l_42 = &p_915->g_41;
    (*l_40) ^= l_39;
    p_915->g_41 = (*l_40);
    return l_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_43 p_915->g_83 p_915->g_108 p_915->g_125 p_915->g_41 p_915->g_69 p_915->g_363
 * writes: p_915->g_41 p_915->g_83 p_915->g_95 p_915->g_108 p_915->g_147 p_915->g_69 p_915->g_363
 */
uint64_t  func_47(int32_t * p_48, int32_t * p_49, int32_t * p_50, uint8_t  p_51, struct S1 * p_915)
{ /* block id: 42 */
    uint32_t l_141[4][8][1] = {{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}};
    uint32_t l_182 = 4294967294UL;
    int32_t l_183 = (-1L);
    uint32_t l_211 = 0x117DD735L;
    int32_t *l_215 = &l_183;
    int32_t l_222[10] = {0x239324AFL,0L,0x239324AFL,0x239324AFL,0L,0x239324AFL,0x239324AFL,0L,0x239324AFL,0x239324AFL};
    uint32_t l_223 = 4294967295UL;
    uint64_t l_247[3][3][9] = {{{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL},{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL},{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL}},{{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL},{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL},{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL}},{{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL},{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL},{0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL,0xEBE3635EDB8BE2EDL,1UL,5UL,1UL,0xEBE3635EDB8BE2EDL,0x4DF9118A8F1D4CABL,0x4DF9118A8F1D4CABL}}};
    uint32_t *l_342 = &l_211;
    uint32_t **l_341 = &l_342;
    uint32_t l_424 = 8UL;
    volatile uint16_t * volatile * volatile l_434 = &p_915->g_429;/* VOLATILE GLOBAL l_434 */
    int8_t *l_473 = (void*)0;
    int16_t l_484 = (-5L);
    uint32_t ***l_546[8] = {&p_915->g_252,&p_915->g_252,&p_915->g_252,&p_915->g_252,&p_915->g_252,&p_915->g_252,&p_915->g_252,&p_915->g_252};
    int32_t l_547 = (-6L);
    int32_t *l_550 = &l_222[0];
    uint64_t l_626 = 0UL;
    uint16_t l_816[7][2] = {{1UL,0x8B7DL},{1UL,0x8B7DL},{1UL,0x8B7DL},{1UL,0x8B7DL},{1UL,0x8B7DL},{1UL,0x8B7DL},{1UL,0x8B7DL}};
    int32_t *l_822 = &p_915->g_41;
    int32_t l_844 = 1L;
    int64_t *l_845[4] = {&p_915->g_306[2],&p_915->g_306[2],&p_915->g_306[2],&p_915->g_306[2]};
    int i, j, k;
    (*p_915->g_43) = l_141[0][3][0];
    for (p_915->g_83 = 0; (p_915->g_83 != 11); p_915->g_83 = safe_add_func_uint64_t_u_u(p_915->g_83, 4))
    { /* block id: 46 */
        int64_t l_185 = (-9L);
        int8_t l_219 = 0L;
        int8_t l_329 = 0x4CL;
        int32_t l_331 = 0x6D81015BL;
        int32_t l_334 = 0x040539E5L;
        int32_t l_359 = 0L;
        int32_t l_362 = 0x4C52C017L;
        uint32_t **l_517 = &p_915->g_253;
        uint8_t *l_600[9];
        int16_t l_631[10] = {6L,1L,4L,1L,6L,6L,1L,4L,1L,6L};
        uint32_t **l_658 = &p_915->g_253;
        int32_t *l_679 = &l_183;
        uint32_t l_755 = 0x5C517889L;
        int32_t l_779 = 0x485CA4DAL;
        int32_t l_780 = 1L;
        uint16_t l_819 = 0UL;
        int i;
        for (i = 0; i < 9; i++)
            l_600[i] = &p_915->g_245;
        for (p_915->g_95 = 29; (p_915->g_95 == (-6)); p_915->g_95 = safe_sub_func_uint8_t_u_u(p_915->g_95, 1))
        { /* block id: 49 */
            uint32_t l_181 = 0xA12BE6C4L;
            int32_t l_217 = 0x03BAE3D2L;
            int32_t l_218[5][6] = {{(-1L),0x68D167BAL,0x29261D21L,(-6L),0x68D167BAL,(-6L)},{(-1L),0x68D167BAL,0x29261D21L,(-6L),0x68D167BAL,(-6L)},{(-1L),0x68D167BAL,0x29261D21L,(-6L),0x68D167BAL,(-6L)},{(-1L),0x68D167BAL,0x29261D21L,(-6L),0x68D167BAL,(-6L)},{(-1L),0x68D167BAL,0x29261D21L,(-6L),0x68D167BAL,(-6L)}};
            int64_t l_300 = 0x45A7F0FC9F82F56FL;
            uint32_t **l_328 = &p_915->g_253;
            int32_t *l_344 = &l_222[0];
            int32_t *l_345 = (void*)0;
            int32_t *l_346 = &l_183;
            int32_t *l_347 = (void*)0;
            int32_t *l_348 = &l_331;
            int32_t *l_349 = &l_222[0];
            int32_t *l_350 = &l_331;
            int32_t *l_351 = &l_217;
            int32_t *l_352 = &l_218[1][5];
            int32_t *l_353 = &p_915->g_41;
            int32_t *l_354 = &l_218[1][1];
            int32_t *l_355 = &l_331;
            int32_t *l_356 = (void*)0;
            int32_t *l_357 = &l_222[2];
            int32_t *l_358[4][3] = {{(void*)0,&l_217,(void*)0},{(void*)0,&l_217,(void*)0},{(void*)0,&l_217,(void*)0},{(void*)0,&l_217,(void*)0}};
            int i, j;
            for (p_915->g_108 = 0; (p_915->g_108 <= 3); p_915->g_108 += 1)
            { /* block id: 52 */
                uint16_t *l_146 = &p_915->g_147;
                int32_t l_184 = (-4L);
                int32_t *l_212[8][10] = {{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83},{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83},{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83},{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83},{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83},{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83},{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83},{&l_183,&l_183,&p_915->g_83,(void*)0,(void*)0,&p_915->g_83,&p_915->g_41,&l_183,&p_915->g_41,&p_915->g_83}};
                int i, j;
                (*p_915->g_43) |= p_915->g_125[p_915->g_108];
                (*p_50) &= (((*l_146) = p_915->g_125[p_915->g_108]) <= p_51);
            }
            p_915->g_363--;
        }
    }
    return (*l_822);
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_125 p_915->g_83 p_915->g_43 p_915->g_41 p_915->g_72.f0
 * writes: p_915->g_125 p_915->g_41 p_915->g_83
 */
uint32_t  func_53(uint32_t  p_54, uint64_t  p_55, int32_t * p_56, int32_t * p_57, int32_t * p_58, struct S1 * p_915)
{ /* block id: 35 */
    uint16_t l_121 = 65535UL;
    uint64_t *l_124 = &p_915->g_125[3];
    int32_t **l_129 = &p_915->g_43;
    int32_t ***l_128 = &l_129;
    int32_t ***l_130 = &l_129;
    p_915->g_83 = ((***l_128) = (((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((1L ^ (+l_121)), 1)), (safe_mul_func_int16_t_s_s((+((++(*l_124)) , (((l_128 == l_130) >= p_54) <= ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s(p_915->g_83, (((*l_124)++) != (safe_rshift_func_int16_t_s_u(p_55, 4))))) != 0xF823L) && (***l_130)), p_54)) >= (***l_128))))), p_55)))) && p_54) != 0xA84C6C14L));
    return p_915->g_72[2].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_915->g_69 p_915->g_72 p_915->g_72.f0 p_915->g_43 p_915->g_41 p_915->g_83 p_915->g_3 p_915->g_95
 * writes: p_915->g_69 p_915->g_83 p_915->g_108
 */
int8_t  func_59(int32_t  p_60, int32_t * p_61, int32_t  p_62, struct S1 * p_915)
{ /* block id: 20 */
    int32_t **l_63 = &p_915->g_43;
    int32_t ***l_64 = &l_63;
    uint32_t *l_67 = (void*)0;
    uint32_t *l_68 = &p_915->g_69;
    uint8_t l_79[3];
    int32_t l_80 = (-1L);
    int32_t *l_81 = &l_80;
    int32_t *l_82 = &p_915->g_83;
    uint32_t **l_87 = &l_68;
    int8_t *l_88 = (void*)0;
    int8_t *l_89[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t *l_94[3][7] = {{&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1]},{&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1]},{&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1],&l_79[1]}};
    uint16_t l_96[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int i, j;
    for (i = 0; i < 3; i++)
        l_79[i] = 0x90L;
    (*l_64) = ((+0xE3C77D98A9A26275L) , (p_60 , l_63));
    if (p_60)
        goto lbl_86;
    (*l_82) ^= (((*l_81) = (safe_add_func_int32_t_s_s((((*l_68) = (((*l_64) = &p_915->g_43) != &p_915->g_43)) , (l_79[1] &= (safe_lshift_func_int16_t_s_u(p_915->g_69, ((p_61 == (((p_915->g_72[2] , ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((p_60 , p_915->g_69) & (safe_div_func_int8_t_s_s((p_915->g_72[2].f0 , (p_62 > (**l_63))), 0x73L))), p_915->g_69)), 9L)) & 65527UL)) | p_60) , &p_915->g_69)) && p_62))))), l_80))) < p_60);
lbl_86:
    (*l_81) = (4294967295UL > ((safe_lshift_func_int8_t_s_u(p_915->g_3, 7)) >= p_62));
    (*l_81) = ((((*l_82) = (p_60 , (&p_915->g_69 == ((*l_87) = &p_915->g_69)))) & (safe_mul_func_uint8_t_u_u(0UL, (safe_mod_func_uint8_t_u_u((((0xD7L ^ p_62) , (--l_96[7])) || (p_915->g_108 = (safe_lshift_func_uint16_t_u_u(p_915->g_95, (safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((+(safe_mul_func_uint8_t_u_u(p_915->g_41, (~((p_915->g_72[2].f0 , (*l_63)) != &p_62))))), p_915->g_41)), (***l_64))))))))), 0x7AL))))) , (*l_81));
    return p_915->g_72[2].f0;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_916;
    struct S1* p_915 = &c_916;
    struct S1 c_917 = {
        9L, // p_915->g_3
        0x0FFF0698L, // p_915->g_41
        (void*)0, // p_915->g_43
        0UL, // p_915->g_69
        {{4UL},{4UL},{4UL},{4UL}}, // p_915->g_72
        (-1L), // p_915->g_83
        (-1L), // p_915->g_95
        0x3599DBF4L, // p_915->g_108
        {0x8654C91E54705616L,0x8654C91E54705616L,0x8654C91E54705616L,0x8654C91E54705616L}, // p_915->g_125
        0xC8B3L, // p_915->g_147
        0x3DL, // p_915->g_170
        0UL, // p_915->g_180
        1L, // p_915->g_186
        (void*)0, // p_915->g_214
        1UL, // p_915->g_245
        &p_915->g_69, // p_915->g_253
        &p_915->g_253, // p_915->g_252
        0x1F5D12AF678EF2C2L, // p_915->g_305
        {5L,5L,5L}, // p_915->g_306
        0x6417L, // p_915->g_335
        0xAE0362B4L, // p_915->g_338
        {{{0x20L},{0x20L},{0x20L},{0x20L},{0x20L},{0x20L},{0x20L}}}, // p_915->g_360
        0x539A5530L, // p_915->g_361
        18446744073709551610UL, // p_915->g_363
        {{{0x5786D4CBL}}}, // p_915->g_377
        0x290DL, // p_915->g_400
        (void*)0, // p_915->g_427
        65532UL, // p_915->g_430
        &p_915->g_430, // p_915->g_429
        &p_915->g_429, // p_915->g_428
        {7UL,7UL,7UL,7UL,7UL}, // p_915->g_461
        (-1L), // p_915->g_489
        &p_915->g_489, // p_915->g_488
        &p_915->g_488, // p_915->g_487
        {0x65DFAA98L,0x65DFAA98L,0x65DFAA98L,0x65DFAA98L}, // p_915->g_531
        {{1L,(-7L),0x6A538DCDL,(-7L),1L,1L,(-7L),0x6A538DCDL},{1L,(-7L),0x6A538DCDL,(-7L),1L,1L,(-7L),0x6A538DCDL},{1L,(-7L),0x6A538DCDL,(-7L),1L,1L,(-7L),0x6A538DCDL},{1L,(-7L),0x6A538DCDL,(-7L),1L,1L,(-7L),0x6A538DCDL},{1L,(-7L),0x6A538DCDL,(-7L),1L,1L,(-7L),0x6A538DCDL},{1L,(-7L),0x6A538DCDL,(-7L),1L,1L,(-7L),0x6A538DCDL},{1L,(-7L),0x6A538DCDL,(-7L),1L,1L,(-7L),0x6A538DCDL}}, // p_915->g_568
        0xC6AAL, // p_915->g_569
        &p_915->g_43, // p_915->g_592
        {3UL}, // p_915->g_660
        {0x7CDCL,0x7CDCL,0x7CDCL,0x7CDCL,0x7CDCL,0x7CDCL,0x7CDCL}, // p_915->g_722
        (void*)0, // p_915->g_730
        {&p_915->g_730,&p_915->g_730,&p_915->g_730,&p_915->g_730,&p_915->g_730,&p_915->g_730,&p_915->g_730,&p_915->g_730}, // p_915->g_729
        &p_915->g_729[2], // p_915->g_728
        &p_915->g_728, // p_915->g_727
        (void*)0, // p_915->g_752
        0L, // p_915->g_767
        0x07E92F90L, // p_915->g_769
        0x2BDCL, // p_915->g_772
        1UL, // p_915->g_773
        {{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}},{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}},{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}},{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}},{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}},{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}},{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}},{{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL},{0x9A704AB6L,6UL}}}, // p_915->g_781
        &p_915->g_43, // p_915->g_784
        {{&p_915->g_41,&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41,&p_915->g_41},{&p_915->g_41,&p_915->g_41,&p_915->g_41}}, // p_915->g_785
        (void*)0, // p_915->g_823
        0x670B65781A97BDB5L, // p_915->g_865
        &p_915->g_83, // p_915->g_873
        0L, // p_915->g_900
    };
    c_916 = c_917;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_915);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_915->g_3, "p_915->g_3", print_hash_value);
    transparent_crc(p_915->g_41, "p_915->g_41", print_hash_value);
    transparent_crc(p_915->g_69, "p_915->g_69", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_915->g_72[i].f0, "p_915->g_72[i].f0", print_hash_value);

    }
    transparent_crc(p_915->g_83, "p_915->g_83", print_hash_value);
    transparent_crc(p_915->g_95, "p_915->g_95", print_hash_value);
    transparent_crc(p_915->g_108, "p_915->g_108", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_915->g_125[i], "p_915->g_125[i]", print_hash_value);

    }
    transparent_crc(p_915->g_147, "p_915->g_147", print_hash_value);
    transparent_crc(p_915->g_170, "p_915->g_170", print_hash_value);
    transparent_crc(p_915->g_180, "p_915->g_180", print_hash_value);
    transparent_crc(p_915->g_186, "p_915->g_186", print_hash_value);
    transparent_crc(p_915->g_245, "p_915->g_245", print_hash_value);
    transparent_crc(p_915->g_305, "p_915->g_305", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_915->g_306[i], "p_915->g_306[i]", print_hash_value);

    }
    transparent_crc(p_915->g_335, "p_915->g_335", print_hash_value);
    transparent_crc(p_915->g_338, "p_915->g_338", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_915->g_360[i][j][k], "p_915->g_360[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_915->g_361, "p_915->g_361", print_hash_value);
    transparent_crc(p_915->g_363, "p_915->g_363", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_915->g_377[i][j].f0, "p_915->g_377[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_915->g_400, "p_915->g_400", print_hash_value);
    transparent_crc(p_915->g_430, "p_915->g_430", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_915->g_461[i], "p_915->g_461[i]", print_hash_value);

    }
    transparent_crc(p_915->g_489, "p_915->g_489", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_915->g_531[i], "p_915->g_531[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_915->g_568[i][j], "p_915->g_568[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_915->g_569, "p_915->g_569", print_hash_value);
    transparent_crc(p_915->g_660.f0, "p_915->g_660.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_915->g_722[i], "p_915->g_722[i]", print_hash_value);

    }
    transparent_crc(p_915->g_767, "p_915->g_767", print_hash_value);
    transparent_crc(p_915->g_769, "p_915->g_769", print_hash_value);
    transparent_crc(p_915->g_772, "p_915->g_772", print_hash_value);
    transparent_crc(p_915->g_773, "p_915->g_773", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_915->g_781[i][j][k], "p_915->g_781[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_915->g_865, "p_915->g_865", print_hash_value);
    transparent_crc(p_915->g_900, "p_915->g_900", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
