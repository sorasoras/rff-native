#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_802d0c84(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, c0gt = 0, c0lt = 0, c0so = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80348a58u);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 4u, f0);
    wrf32d(param_1 + 8u, f0);
    wrf32d(param_1 + 0xcu, f0);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x802d1834u, &a);
    f1 = (f64)(f32)((f64)rdf32((u32)param_3 + 0x40u) - (f64)rdf32((u32)param_3 + 0x38u));
    f0 = (f64)rdf32(0x80348a58u);
    f3 = (f64)px_w2f(r3);
    c0lt = f1 < f0;
    c0gt = f1 > f0;
    c0eq = f1 == f0;
    c0so = (f1 != f1) || (f0 != f0);
    f2 = (f64)px_w2f(tc_lastr4());
    f1 = (f64)(f32)(f3 + (f64)rdf32((u32)param_2 + 0x4cu));
    f0 = (f64)(f32)(f2 + (f64)rdf32((u32)param_2 + 0x50u));
    wrf32d(param_1, f3);
    wrf32d(param_1 + 4u, f2);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 0xcu, f0);
    c0eq = ((((c0lt << 0x1fu) | (c0gt << 0x1eu) | (c0eq << 0x1du) | (c0so << 0x1cu)) >> 0x1fu) & 1u) == 0u;
    if (!c0eq) {
        f0 = -f0;
        wrf32d(param_1 + 4u, -f2);
        wrf32d(param_1 + 0xcu, f0);
    }
    return;
}
