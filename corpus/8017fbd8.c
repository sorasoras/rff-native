#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8017fbd8(f64 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_2 + 0x80u);
    a.r[1] = 1u;
    (void)tc_call(0x8017fde4u, &a);
    wr32(param_2 + 0x80u, 5u);
    a.r[0] = 5u;
    a.r[1] = 1u;
    f1 = tc_callf(0x8017fdc8u, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    a.r[0] = param_2 + 0xb4u;
    a.r[1] = r3;
    a.r[2] = param_3;
    (void)tc_call(0x8017dd7cu, &a);
    f0 = (f64)(f32)px_fdiv((f64)rdf32(0x80575058u), param_1);
    wrf32d(param_2 + 0x88u, (f64)rdf32(0x80575048u));
    wrf32d(param_2 + 0xa8u, f0);
    return;
}
