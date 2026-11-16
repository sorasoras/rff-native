#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

f64 fn_800f1730(s32 param_1)
{
    u32 r5 = 0, r7 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r7 = rd32((u32)param_1 + 0x18u);
    r5 = rd32(r7 + 0xcf8u);
    a.r[0] = r7;
    a.r[1] = r7 + 0xcf4u;
    f1 = tc_callf(0x800b42e4u, &a);
    f3 = (f64)rdf32(0x80573b2cu);
    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x78u) + f1);
    f1 = (f64)px_w2f(r5);
    if (f1 < (f64)(f32)(f2 - f3)) {
        f1 = (f64)rdf32(0x80573b30u);
    } else {
        if (f1 > (f64)(f32)(f2 + f3)) {
            f1 = (f64)rdf32(0x80573b34u);
        } else {
            f1 = (f64)rdf32(0x80573ad8u);
        }
    }
    return f1;
}
