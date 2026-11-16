#include "tc_rt.h"

void fn_8026bb0c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    do {
        a.r[0] = 0x34000000u;
        a.r[1] = 0x817fdfdau;
        a.r[2] = 1u;
        (void)tc_call(0x8026bfc8u, &a);
    } while (((u32)rd8(0x817fdfdau) & 4u) != 0u);
    r29 = (param_r4 + 3u) & 0xfffffffcu;
    r3 = (u32)rd8(0x80570c20u) + 1u;
    wr8(0x80570c20u, (u8)r3);
    r3 = (0u - (r3 & 1u)) & 0x800u;
    r30 = (((r3 + 0xd10000u) << 6u) & 0x3fffff00u) | 0x80000000u;
    do {
        a.r[0] = r30;
        a.r[1] = param_r3;
        a.r[2] = r29;
        r3 = tc_call(0x8026c2d0u, &a);
    } while (r3 == 0u);
    do {
        a.r[0] = 0x34000000u;
        a.r[1] = 0x817fdfd9u;
        a.r[2] = 1u;
        (void)tc_call(0x8026bfc8u, &a);
    } while (((u32)rd8(0x817fdfd9u) & 4u) != 0u);
    r29 = (((param_r4 & 0x1fffu) | 0x1f000000u) & 0xff00ffffu) | (((u32)rd8(0x80570c20u) << 0x10u) & 0xff0000u);
    do {
        wr32(0x817fdfdcu, r29);
        a.r[0] = 0xb4000100u;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = 4u;
        r3 = tc_call(0x8026c0ecu, &a);
    } while (r3 == 0u);
    do {
        a.r[0] = 0x34000000u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 1u;
        (void)tc_call(0x8026bfc8u, &a);
    } while (((u32)rd8(0x817fdfd8u) & 4u) != 0u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
