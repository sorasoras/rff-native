#include "tc_rt.h"

void fn_801a680c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0xdcu);
    if (r0 != 0u) {
        a.r[0] = r0;
        f1 = tc_callf(0x80157e6cu, &a);
        r4 = tc_lastr4();
        wr32(param_1 + 0xdcu, 0u);
    }
    if (rd32(0x803562e4u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x805759acu);
        a.r[0] = 0x5eu;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1 + 0xdcu, r3);
    } else {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x805759acu);
        a.r[0] = 0x5eu;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d783cu, &a);
        wr32(param_1 + 0xdcu, r3);
    }
    return;
}
