// -g 57,90,1 -l 1,10,1
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


// Seed: 29844185

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint16_t  f0;
   volatile uint32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   uint64_t  f5;
   int32_t  f6;
};

struct S1 {
   volatile uint64_t  f0;
   volatile int8_t  f1;
   int64_t  f2;
   volatile int32_t  f3;
   uint8_t  f4;
   uint32_t  f5;
   int16_t  f6;
   uint32_t  f7;
   int32_t  f8;
};

struct S2 {
   uint32_t  f0;
   volatile uint64_t  f1;
   volatile uint16_t  f2;
   struct S0  f3;
   uint32_t  f4;
   volatile int64_t  f5;
   volatile uint16_t  f6;
   struct S0  f7;
   struct S1  f8;
   volatile int32_t  f9;
};

struct S7 {
    struct S2 g_2[10];
};


/* --- FORWARD DECLARATIONS --- */
struct S2  func_1(struct S7 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_3->g_2
 * writes:
 */
struct S2  func_1(struct S7 * p_3)
{ /* block id: 4 */
    return p_3->g_2[7];
}


__kernel void entry(__global ulong *result) {
    int i;
    struct S7 c_4;
    struct S7* p_3 = &c_4;
    struct S7 c_5 = {
        {{0xEAB385FAL,0x11B4C5108D7EBC4DL,1UL,{0UL,7UL,0xA1L,4294967290UL,0xA4F1DFBAL,0x08D5B94995FB43C6L,-1L},4294967295UL,0x511E9056FF37E3B5L,0UL,{0xB39DL,0x0DC6CE91L,0x41L,0UL,0UL,0xEA8F4439D3FD5B12L,1L},{0xC7EEBEAAF72A6DD7L,0x47L,0x17E38F94618C4560L,5L,246UL,0xD4B89D53L,0x4A2FL,0xAA6DCE64L,0L},0x230D26BCL},{4294967295UL,0xCDE22F50FADE0F7FL,5UL,{9UL,0x9CF818A8L,0xC8L,0x62BAD2CCL,0x1E3B40BBL,0xB6FEB77EBEE99B4DL,0x14858521L},0xB7CCD031L,0x40D400C683D18CDAL,0x7519L,{1UL,0x4BFA3C5BL,0xE9L,0UL,0xCA618944L,0UL,0x0E375BC5L},{0UL,0x73L,1L,0x46A2B7F3L,1UL,1UL,1L,0x6624E94FL,0x1F1E5685L},0x08201085L},{0xEAB385FAL,0x11B4C5108D7EBC4DL,1UL,{0UL,7UL,0xA1L,4294967290UL,0xA4F1DFBAL,0x08D5B94995FB43C6L,-1L},4294967295UL,0x511E9056FF37E3B5L,0UL,{0xB39DL,0x0DC6CE91L,0x41L,0UL,0UL,0xEA8F4439D3FD5B12L,1L},{0xC7EEBEAAF72A6DD7L,0x47L,0x17E38F94618C4560L,5L,246UL,0xD4B89D53L,0x4A2FL,0xAA6DCE64L,0L},0x230D26BCL},{0xEAB385FAL,0x11B4C5108D7EBC4DL,1UL,{0UL,7UL,0xA1L,4294967290UL,0xA4F1DFBAL,0x08D5B94995FB43C6L,-1L},4294967295UL,0x511E9056FF37E3B5L,0UL,{0xB39DL,0x0DC6CE91L,0x41L,0UL,0UL,0xEA8F4439D3FD5B12L,1L},{0xC7EEBEAAF72A6DD7L,0x47L,0x17E38F94618C4560L,5L,246UL,0xD4B89D53L,0x4A2FL,0xAA6DCE64L,0L},0x230D26BCL},{4294967295UL,0xCDE22F50FADE0F7FL,5UL,{9UL,0x9CF818A8L,0xC8L,0x62BAD2CCL,0x1E3B40BBL,0xB6FEB77EBEE99B4DL,0x14858521L},0xB7CCD031L,0x40D400C683D18CDAL,0x7519L,{1UL,0x4BFA3C5BL,0xE9L,0UL,0xCA618944L,0UL,0x0E375BC5L},{0UL,0x73L,1L,0x46A2B7F3L,1UL,1UL,1L,0x6624E94FL,0x1F1E5685L},0x08201085L},{0xEAB385FAL,0x11B4C5108D7EBC4DL,1UL,{0UL,7UL,0xA1L,4294967290UL,0xA4F1DFBAL,0x08D5B94995FB43C6L,-1L},4294967295UL,0x511E9056FF37E3B5L,0UL,{0xB39DL,0x0DC6CE91L,0x41L,0UL,0UL,0xEA8F4439D3FD5B12L,1L},{0xC7EEBEAAF72A6DD7L,0x47L,0x17E38F94618C4560L,5L,246UL,0xD4B89D53L,0x4A2FL,0xAA6DCE64L,0L},0x230D26BCL},{0xEAB385FAL,0x11B4C5108D7EBC4DL,1UL,{0UL,7UL,0xA1L,4294967290UL,0xA4F1DFBAL,0x08D5B94995FB43C6L,-1L},4294967295UL,0x511E9056FF37E3B5L,0UL,{0xB39DL,0x0DC6CE91L,0x41L,0UL,0UL,0xEA8F4439D3FD5B12L,1L},{0xC7EEBEAAF72A6DD7L,0x47L,0x17E38F94618C4560L,5L,246UL,0xD4B89D53L,0x4A2FL,0xAA6DCE64L,0L},0x230D26BCL},{4294967295UL,0xCDE22F50FADE0F7FL,5UL,{9UL,0x9CF818A8L,0xC8L,0x62BAD2CCL,0x1E3B40BBL,0xB6FEB77EBEE99B4DL,0x14858521L},0xB7CCD031L,0x40D400C683D18CDAL,0x7519L,{1UL,0x4BFA3C5BL,0xE9L,0UL,0xCA618944L,0UL,0x0E375BC5L},{0UL,0x73L,1L,0x46A2B7F3L,1UL,1UL,1L,0x6624E94FL,0x1F1E5685L},0x08201085L},{0xEAB385FAL,0x11B4C5108D7EBC4DL,1UL,{0UL,7UL,0xA1L,4294967290UL,0xA4F1DFBAL,0x08D5B94995FB43C6L,-1L},4294967295UL,0x511E9056FF37E3B5L,0UL,{0xB39DL,0x0DC6CE91L,0x41L,0UL,0UL,0xEA8F4439D3FD5B12L,1L},{0xC7EEBEAAF72A6DD7L,0x47L,0x17E38F94618C4560L,5L,246UL,0xD4B89D53L,0x4A2FL,0xAA6DCE64L,0L},0x230D26BCL},{0xEAB385FAL,0x11B4C5108D7EBC4DL,1UL,{0UL,7UL,0xA1L,4294967290UL,0xA4F1DFBAL,0x08D5B94995FB43C6L,-1L},4294967295UL,0x511E9056FF37E3B5L,0UL,{0xB39DL,0x0DC6CE91L,0x41L,0UL,0UL,0xEA8F4439D3FD5B12L,1L},{0xC7EEBEAAF72A6DD7L,0x47L,0x17E38F94618C4560L,5L,246UL,0xD4B89D53L,0x4A2FL,0xAA6DCE64L,0L},0x230D26BCL}}, // p_3->g_2
    };
    c_4 = c_5;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_3->g_2[i].f0, "p_3->g_2[i].f0", print_hash_value);
        transparent_crc(p_3->g_2[i].f1, "p_3->g_2[i].f1", print_hash_value);
        transparent_crc(p_3->g_2[i].f2, "p_3->g_2[i].f2", print_hash_value);
        transparent_crc(p_3->g_2[i].f3.f0, "p_3->g_2[i].f3.f0", print_hash_value);
        transparent_crc(p_3->g_2[i].f3.f1, "p_3->g_2[i].f3.f1", print_hash_value);
        transparent_crc(p_3->g_2[i].f3.f2, "p_3->g_2[i].f3.f2", print_hash_value);
        transparent_crc(p_3->g_2[i].f3.f3, "p_3->g_2[i].f3.f3", print_hash_value);
        transparent_crc(p_3->g_2[i].f3.f4, "p_3->g_2[i].f3.f4", print_hash_value);
        transparent_crc(p_3->g_2[i].f3.f5, "p_3->g_2[i].f3.f5", print_hash_value);
        transparent_crc(p_3->g_2[i].f3.f6, "p_3->g_2[i].f3.f6", print_hash_value);
        transparent_crc(p_3->g_2[i].f4, "p_3->g_2[i].f4", print_hash_value);
        transparent_crc(p_3->g_2[i].f5, "p_3->g_2[i].f5", print_hash_value);
        transparent_crc(p_3->g_2[i].f6, "p_3->g_2[i].f6", print_hash_value);
        transparent_crc(p_3->g_2[i].f7.f0, "p_3->g_2[i].f7.f0", print_hash_value);
        transparent_crc(p_3->g_2[i].f7.f1, "p_3->g_2[i].f7.f1", print_hash_value);
        transparent_crc(p_3->g_2[i].f7.f2, "p_3->g_2[i].f7.f2", print_hash_value);
        transparent_crc(p_3->g_2[i].f7.f3, "p_3->g_2[i].f7.f3", print_hash_value);
        transparent_crc(p_3->g_2[i].f7.f4, "p_3->g_2[i].f7.f4", print_hash_value);
        transparent_crc(p_3->g_2[i].f7.f5, "p_3->g_2[i].f7.f5", print_hash_value);
        transparent_crc(p_3->g_2[i].f7.f6, "p_3->g_2[i].f7.f6", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f0, "p_3->g_2[i].f8.f0", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f1, "p_3->g_2[i].f8.f1", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f2, "p_3->g_2[i].f8.f2", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f3, "p_3->g_2[i].f8.f3", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f4, "p_3->g_2[i].f8.f4", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f5, "p_3->g_2[i].f8.f5", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f6, "p_3->g_2[i].f8.f6", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f7, "p_3->g_2[i].f8.f7", print_hash_value);
        transparent_crc(p_3->g_2[i].f8.f8, "p_3->g_2[i].f8.f8", print_hash_value);
        transparent_crc(p_3->g_2[i].f9, "p_3->g_2[i].f9", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
