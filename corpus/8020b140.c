#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_8020b140(f64 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_2 + 0xcu);
    a.r[0] = r3;
    a.r[1] = param_3;
    a.f[0] = param_1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r4 = rd32(r3);
    f5 = (f64)(f32)(param_1 * param_1);
    r0 = rd32(r3 + 8u);
    r3 = rd32(r3 + 4u);
    f2 = (f64)rdf32((u32)param_2 + 0x30u);
    f6 = (f64)rdf32(0x80576784u);
    f3 = (f64)px_w2f(r4);
    wr32(0x817fdfd8u, r3);
    f8 = ppc_fmadds((f64)rdf32(rd32((u32)param_2 + 0xcu) + 0xb4u), (f64)rdf32(0x8057677cu), (f64)rdf32(0x817fdfd8u));
    f7 = (f64)rdf32(0x80576780u);
    wr32(0x817fdfd0u, r0);
    wrf32d(0x817fdfd8u, f8);
    f1 = ppc_fmadds(param_1, (f64)(f32)(f6 * (f64)(f32)(f3 - f2)), (f64)(f32)(ppc_fnmsubs(f6, f3, (f64)(f32)(f2 + (f64)px_w2f(r4))) * f5));
    f3 = (f64)rdf32(0x817fdfd0u);
    f1 = (f64)(f32)(f2 + f1);
    wrf32d(param_3, f1);
    f4 = (f64)rdf32((u32)param_2 + 0x34u);
    f7 = (f64)(f32)((f64)px_w2f(ppc_single_bits(f8)) + f7);
    wrf32d(param_3 + 4u, (f64)(f32)(f4 + ppc_fmadds(param_1, (f64)(f32)(f6 * (f64)(f32)(f7 - f4)), (f64)(f32)(ppc_fnmsubs(f6, f7, (f64)(f32)(f4 + f8)) * f5))));
    f2 = (f64)rdf32((u32)param_2 + 0x38u);
    wrf32d(param_3 + 8u, (f64)(f32)(f2 + ppc_fmadds(param_1, (f64)(f32)(f6 * (f64)(f32)(f3 - f2)), (f64)(f32)(ppc_fnmsubs(f6, f3, (f64)(f32)(f2 + (f64)px_w2f(r0))) * f5))));
    return;
}
