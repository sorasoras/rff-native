#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801bfc68(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    r4 = rd32(param_1);
    wr32(0x805710e8u, r4);
    a.r[0] = (((0u - r4) | r4) >> 0x1fu) & 1u;
    (void)tc_call(0x8004e22cu, &a);
    r3 = rd32(param_1 + 4u);
    wr32(0x805710ecu, r3);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    a.r[0] = r3;
    (void)tc_call(0x8003d790u, &a);
    f4 = (f64)rdf32(param_1 + 0x14u);
    f3 = (f64)rdf32(param_1 + 0x10u);
    f2 = (f64)rdf32(param_1 + 0xcu);
    f1 = (f64)rdf32(param_1 + 8u);
    wrf32d(0x803d2780u, f1);
    wrf32d(0x803d2784u, f2);
    wrf32d(0x803d2788u, f3);
    wrf32d(0x803d278cu, f4);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    (void)tc_call(0x8003d7fcu, &a);
    f4 = (f64)rdf32(param_1 + 0x24u);
    f3 = (f64)rdf32(param_1 + 0x20u);
    f2 = (f64)rdf32(param_1 + 0x1cu);
    f1 = (f64)rdf32(param_1 + 0x18u);
    wrf32d(0x803d2790u, f1);
    wrf32d(0x803d2794u, f2);
    wrf32d(0x803d2798u, f3);
    wrf32d(0x803d279cu, f4);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    (void)tc_call(0x8003d818u, &a);
    f2 = (f64)px_w2f(rd32(param_1 + 0x2cu));
    f1 = (f64)px_w2f(rd32(param_1 + 0x30u));
    f0 = (f64)px_w2f(rd32(param_1 + 0x34u));
    wrf32d(0x803d27a0u, (f64)px_w2f(rd32(param_1 + 0x28u)));
    wrf32d(0x803d27a4u, f2);
    wrf32d(0x803d27a8u, f1);
    wrf32d(0x803d27acu, f0);
    a.r[0] = 0x803d27a0u;
    (void)tc_call(0x8004a4fcu, &a);
    return;
}
