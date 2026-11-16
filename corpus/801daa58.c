#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_801daa58(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80576090u);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = rd32(param_3);
    r6 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 8u);
    wrf32d(0x817fdffcu, f0);
    wrf32d(0x817fdff8u, f0);
    wrf32d(0x817fdff4u, f0);
    wr32(0x817fdfe8u, r7);
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802343a4u, &a);
    f2 = (f64)rdf32(0x817fdfecu);
    f3 = (f64)rdf32(0x817fdfe8u);
    f1 = (f64)rdf32(0x817fdff0u);
    wrf32d(0x817fdff4u, f3);
    wrf32d(0x817fdffcu, f1);
    wrf32d(0x817fdff8u, f2);
    f1 = ppc_fmadds(f1, f1, ppc_fmadds(f3, f3, (f64)(f32)(f2 * f2)));
    a.f[0] = f1;
    f1 = tc_callf(0x80262ec0u, &a);
    f1 = (f64)(f32)f1;
    f1 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80576128u) * (f64)rdf32(0x817fdff8u)), f1);
    a.f[0] = f1;
    f1 = tc_callf(0x80262c60u, &a);
    f1 = (f64)(f32)f1;
    f1 = rdf64(0x80576178u) - f1;
    f1 = (f64)(f32)f1;
    return f1;
}
