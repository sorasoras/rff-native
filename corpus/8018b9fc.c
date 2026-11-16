#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_8018b9fc(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801a0d1cu, &a);
    f1 = (f64)rdf32(0x805752dcu);
    f0 = (f64)(f32)((f64)rdf32(0x805752e4u) * (f64)rdf32(0x805752e0u));
    f2 = (f64)rdf32(0x805752d8u);
    wr32(param_1, 0x8036fef0u);
    f0 = (f64)(f32)px_fdiv(f0, f1);
    wrf32d(param_1 + 0x50u, f2);
    wrf32d(param_1 + 0x58u, f1);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0x60u, 0u);
    wrf32d(param_1 + 0x54u, f0);
    return param_1;
}
