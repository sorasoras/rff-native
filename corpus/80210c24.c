#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80210c24(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    r6 = rd32(param_2);
    r5 = rd32(param_2 + 4u);
    c0eq = rd32(0x80571100u) == 1u;
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdfe8u, r6);
    wr32(0x817fdff0u, r0);
    if (c0eq) {
        f2 = (f64)rdf32(0x80576894u);
        wrf32d(0x817fdfe8u, (f64)(f32)((f64)px_w2f(r6) * f2));
        wrf32d(0x817fdff0u, (f64)(f32)((f64)px_w2f(r0) * f2));
    }
    f0 = (f64)rdf32(0x817fdff0u);
    wrf32d((u32)param_1 + 0x270u, (f64)rdf32(0x817fdfe8u));
    wrf32d((u32)param_1 + 0x274u, (f64)px_w2f(r5));
    wrf32d((u32)param_1 + 0x278u, f0);
    return;
}
