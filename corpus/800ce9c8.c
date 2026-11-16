#include "tc_rt.h"

void fn_800ce9c8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    r6 = rd32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r5 = rd32(param_2 + 4u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdff4u, r6);
    r3 = rd32(0x804863d8u);
    wr32(0x817fdff8u, r5);
    wr32(0x817fdffcu, r0);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    f0 = (f64)rdf32(0x80573054u);
    wr32(0x817fdfe8u, rd32(r3));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32(r3 + 8u));
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdff8u, f0);
    a.r[0] = 0x817fdff4u;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802344e8u, &a);
    return;
}
