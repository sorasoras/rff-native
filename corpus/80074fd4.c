#include "tc_rt.h"

void fn_80074fd4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x803d29f8u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x80097234u, &a);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x100u);
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x8057272cu);
    f1 = tc_callf(rd32(rd32(r3) + 0x54u), &a);
    r4 = rd32(0x804863d8u);
    r3 = rd32(r4 + 0x9cu);
    r0 = r3 | 0x40000000u;
    r3 = (r3 << 1u) & 0xc0000000u;
    wr32(r4 + 0x9cu, r0);
    r30 = (u32)((s32)r3 >> 31);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
    r3 = rd32(0x804863d8u);
    wr32(r3 + 0x9cu, (rd32(r3 + 0x9cu) & 0xbfffffffu) | ((r30 << 0x1eu) & 0x40000000u));
    (void)tc_call(0x80074eb8u, &a);
    return;
}
