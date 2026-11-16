#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800d12a0(f64 param_1, f64 param_2)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    r30 = 0u;
    r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    f0 = (f64)rdf32(r3 + 0x1d8u);
    c0lt = param_1 < f0;
    f3 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(r3 + 0x1d0u) - (f64)rdf32(r3 + 0x1d4u)), f0);
    if (!(param_1 > f0)) {
        if (!c0lt) {
            r30 = 1u;
        } else {
            f0 = (f64)(f32)(f0 - param_2);
            if (!(param_1 > f0)) {
                f1 = f0;
            }
            wrf32d(r3 + 0x1d8u, f1);
        }
    } else {
        f0 = (f64)(f32)(f0 + param_2);
        if (!(param_1 < f0)) {
            f1 = f0;
        }
        wrf32d(r3 + 0x1d8u, f1);
    }
    r29 = 0u;
    r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    wrf32d(r3 + 0x1d0u, ppc_fmadds(f3, (f64)rdf32(r3 + 0x1d8u), (f64)rdf32(r3 + 0x1d4u)));
    do {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80056604u, &a);
        r29 = r29 + 1u;
    } while (r29 < 0x14u);
    return r30;
}
