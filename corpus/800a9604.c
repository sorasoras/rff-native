#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800a9604(f64 param_1, f64 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_3 + 0x1a4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = param_1;
        a.f[1] = param_2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
        f1 = tc_lastf();
        a.r[0] = param_3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(param_3) + 0x2cu), &a);
        f31 = f1;
        f1 = tc_callf(0x80040a00u, &a);
        f1 = ppc_fmadds((f64)rdf32(0x80572bacu), f1, (f64)rdf32(0x80572ba8u));
        f1 = (f64)(f32)((f64)rdf32(0x80572b90u) * f1);
        f1 = (f64)(f32)(f31 + (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80572bb0u)));
        a.f[0] = f1;
        f1 = tc_callf(0x8007edd4u, &a);
        a.f[0] = param_2;
        a.f[1] = f1;
        a.f[2] = (f64)rdf32(0x80572ba4u);
        a.f[3] = param_1;
        a.r[0] = param_3;
        a.r[1] = param_4;
        a.r[2] = r3;
        a.r[3] = 3u;
        (void)tc_call(0x800a9298u, &a);
    }
    return;
}
