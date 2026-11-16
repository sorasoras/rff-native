#include "tc_rt.h"

f64 fn_801f81f0(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = (f64)rdf32(0x8057663cu);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801f8428u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d56bcu, &a);
        r31 = r3;
        r30 = 0u;
        while (r30 < r31) {
            a.r[0] = (u32)param_1;
            a.r[1] = r30;
            f1 = tc_callf(0x801f8054u, &a);
            r4 = tc_lastr4();
            f30 = (f64)(f32)(f30 + f1);
            if ((r30 + 1u) < r31) {
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32((u32)param_1 + 0x738u) + 0x1cu), &a);
                f30 = (f64)(f32)(f30 + f1);
            }
            r30 = r30 + 1u;
        }
    } else {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x801f80f8u, &a);
        f30 = f1;
    }
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800d5a2cu, &a);
    f31 = f1;
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800d5a40u, &a);
    f1 = (f64)(f32)(f1 - f30);
    f1 = ppc_fmadds(f1, (f64)rdf32(0x80576640u), f31);
    return f1;
}
