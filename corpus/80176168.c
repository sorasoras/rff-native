#include "tc_rt.h"

void fn_80176168(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_1 + 0x14cu) == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80574f5cu);
        a.r[0] = 0x11u;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wr32(param_1 + 0x14cu, r3);
    }
    if (rd32(param_1 + 0x13cu) == 0xffffffffu && rd32(param_1 + 0x130u) != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe8u, rd32(r3));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(param_1 + 0x130u);
        a.r[2] = 0x817fdfe8u;
        r3 = tc_call(0x8010a85cu, &a);
        wr32(param_1 + 0x13cu, r3);
    }
    return;
}
