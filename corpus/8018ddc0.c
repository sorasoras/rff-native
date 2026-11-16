#include "tc_rt.h"

void fn_8018ddc0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
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
    a.r[0] = param_1;
    a.r[1] = 0u;
    f1 = tc_callf(0x8018f750u, &a);
    r6 = rd32(param_1 + 0x218u);
    r5 = rd32(0x804863d8u);
    wr32(r5 + 0x9cu, (rd32(r5 + 0x9cu) & 0xf7ffffffu) | ((r6 << 0x1bu) & 0x8000000u));
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x40u), &a);
    a.r[0] = 2u;
    a.r[1] = 0x27u;
    (void)tc_call(0x800a6d5cu, &a);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 4u;
    (void)tc_call(0x800a2d2cu, &a);
    r3 = rd32(0x804863d8u);
    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
    return;
}
