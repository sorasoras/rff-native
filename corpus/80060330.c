#include "tc_rt.h"

void fn_80060330(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(0x804863d8u);
    (void)tc_call(0x8014660cu, &a);
    a.r[0] = rd32(0x804863d8u);
    (void)tc_call(0x8006c418u, &a);
    a.f[0] = (f64)rdf32(0x80572434u);
    a.r[0] = 1u;
    a.r[1] = 6u;
    (void)tc_call(0x800523b0u, &a);
    r5 = rd32(0x804863d8u);
    wr32(0x805710d8u, 0u);
    wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x40000000u);
    wr32((u32)param_1 + 0xcu, 9u);
    wr32(0x80571184u, 2u);
    return;
}
