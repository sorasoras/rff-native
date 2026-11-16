#include "tc_rt.h"

f64 fn_80215c58(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu)) + 4u;
    r3 = r4 + ((u32)param_3 * 0xcu);
    r0 = (u32)param_4 * 0xcu;
    f0 = (f64)(f32)((f64)rdf32(r4 + r0 + 8u) - (f64)rdf32(r3 + 8u));
    f1 = (f64)(f32)((f64)rdf32(r4 + r0) - (f64)rdf32(r3));
    f0 = (f64)(f32)(f0 * f0);
    f1 = ppc_fmadds(f1, f1, f0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262ec0u, &a);
    f1 = (f64)(f32)f1;
    return f1;
}
