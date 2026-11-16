#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

f64 fn_80152a04(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0, t1 = 0.0, t2 = 0.0, t4 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_2 + 4u) + 0x70u);
    a.r[1] = rd32((u32)param_2 + 8u);
    r3 = tc_call(0x80031cf8u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x50u);
        t1 = (f64)px_w2f(ppc_single_bits((f64)rdf32(r3 + 0xcu)));
        t2 = (f64)px_w2f(ppc_single_bits((f64)rdf32(r3 + 0x1cu)));
        f1 = t1;
        t4 = (f64)px_w2f(ppc_single_bits((f64)rdf32(r3 + 0x2cu)));
        wrf32d(param_1, t1);
        wrf32d(param_1 + 4u, t2);
        wrf32d(param_1 + 8u, t4);
    } else {
        r4 = rd32((u32)param_2 + 4u);
        r0 = rd32(r4 + 0xcf8u);
        wr32(param_1, rd32(r4 + 0xcf4u));
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(r4 + 0xcfcu));
    }
    return f1;
}
