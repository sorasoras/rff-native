#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801618ec(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0;
    r5 = rd32((u32)param_1 + 0x5cu);
    if (r5 != 0u) {
        f3 = (f64)rdf32(0x80574af8u);
        r4 = ((u32)rd16((u32)param_1 + 0xbcu) * 0x34u) - 0x7fb60e50u;
        r3 = rd32(r4 + 0x2878u);
        wr32(0x817fdfe8u, rd32(r4 + 0x2874u));
        f2 = (f64)(f32)(f3 * (f64)rdf32(0x817fdfe8u));
        f0 = (f64)px_w2f(rd32(r4 + 0x287cu));
        wrf32d(r5 + 0x10u, f2);
        f0 = (f64)(f32)(f3 * f0);
        wrf32d(r5 + 0x14u, (f64)(f32)(f3 * (f64)px_w2f(r3)));
        wrf32d(0x817fdfe8u, f2);
        wrf32d(r5 + 0x18u, f0);
    }
    return;
}
