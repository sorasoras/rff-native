#include "tc_rt.h"

void fn_801647f8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_1 + 0x11cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_1;
        a.r[2] = 5u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r0) + 0x7cu), &a);
    }
    r4 = rd32(param_1 + 0x14cu);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = r4;
        f1 = tc_callf(0x8010a74cu, &a);
        r4 = tc_lastr4();
    }
    if (rd32(param_1 + 0x150u) != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        f1 = (f64)rdf32(0x80574b10u);
        wr32(0x817fdfe8u, rd32(r3));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        a.f[0] = f1;
        a.r[0] = rd32(param_1 + 0x150u);
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    return;
}
