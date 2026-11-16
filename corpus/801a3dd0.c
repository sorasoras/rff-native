#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801a3dd0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 8u;
    (void)tc_call(0x801a37d0u, &a);
    r4 = rd32(param_1 + 0xdd0u) + 1u;
    r3 = r4 ^ 0x80000000u;
    f3 = rdf64(0x805758a8u);
    f1 = (f64)(f32)((f64)rdf32(0x80575920u) * (f64)(f32)((f64)rdf32(0x8057587cu) * (f64)rdf32(param_1 + 0xda8u)));
    wr32(param_1 + 0xdd0u, r4);
    f0 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3);
    if ((f0 < f1) || (f0 == f1)) {
        wrf32d(param_1 + 0xdf4u, (f64)(f32)((f64)rdf32(param_1 + 0xdf4u) - (f64)rdf32(0x8057592cu)));
    } else {
        if ((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3) > f1) {
            wrf32d(param_1 + 0xdf4u, (f64)(f32)((f64)rdf32(param_1 + 0xdf4u) + (f64)rdf32(0x8057592cu)));
        }
    }
    f2 = (f64)rdf32(param_2 + 8u);
    f1 = (f64)rdf32(param_2);
    wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) + (f64)rdf32(param_1 + 0xdf4u)));
    a.f[0] = f1;
    a.f[1] = f2;
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f0 = (f64)rdf32(0x80575930u);
    if ((f1 > f0) || (f1 == f0)) {
        f1 = (f64)rdf32(0x80575868u);
    }
    f2 = (f64)rdf32(0x8057588cu);
    f1 = (f64)(f32)(f1 + f2);
    if ((f64)rdf32(param_2 + 4u) < f1) {
        wrf32d(param_2 + 4u, f1);
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    return;
}
