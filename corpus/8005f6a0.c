#include "tc_rt.h"

u32 fn_8005f6a0(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0x80480000u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x70u), &a);
    if (r3 != 0u) {
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        (void)tc_call(0x801e6900u, &a);
        wr32(0x80571174u, 0x16u);
        f1 = (f64)rdf32(0x80572434u);
        wr32(0x8057115cu, 0x16u);
        wr32((u32)param_1 + 0xcu, 0xau);
        a.f[0] = f1;
        a.r[0] = 1u;
        a.r[1] = 6u;
        (void)tc_call(0x800523b0u, &a);
        r0 = rd32(0x8057118cu);
        wr32(0x805710d8u, 0u);
        r0 = r0 | 0x1001u;
        wr32(0x8057118cu, r0);
    } else {
        wr32((u32)param_1 + 0xcu, 6u);
    }
    return 1u;
}
