#include "tc_rt.h"

void fn_801b16f4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32(0x804863d8u);
    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
    wr32(0x8057118cu, rd32(0x8057118cu) | 8u);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
    r0 = rd32(0x8057118cu);
    r3 = r0 & 0xffffffdfu;
    if (rd32(param_1 + 0x30u) != 0u) {
        r3 = r0 | 0x20u;
    }
    wr32(0x8057118cu, r3);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 0x36u;
    a.r[2] = rd32(param_1 + 0x34u);
    (void)tc_call(0x800a31c0u, &a);
    a.r[0] = 2u;
    a.r[1] = 0x3bu;
    (void)tc_call(0x800a6d5cu, &a);
    return;
}
