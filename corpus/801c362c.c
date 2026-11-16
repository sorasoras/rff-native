#include "tc_rt.h"

void fn_801c362c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = 0x804dc998u;
    r6 = rd32(param_1);
    wrf32d(r6 + 0xd3cu, (f64)rdf32(0x80575cfcu));
    r3 = rd32(param_1 + 0x10u);
    r31 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb23668u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32(param_1);
        a.r[2] = 0x804dc998u;
        a.r[3] = r6;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
        r5 = 0u;
        r6 = 0u;
    }
    a.r[0] = r31;
    a.r[1] = rd32(param_1);
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r31) + 0xcu), &a);
    wr32(param_1 + 0x10u, r31);
    wr32(param_1 + 0x14u, 0u);
    return;
}
