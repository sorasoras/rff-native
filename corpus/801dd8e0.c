#include "tc_rt.h"

void fn_801dd8e0(u32 param_1)
{
    u32 c0lt = 0, r4 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        f31 = (f64)rdf32(param_1 + 0x10u);
        f1 = tc_callf(0x801dc328u, &a);
        r4 = tc_lastr4();
        f1 = (f64)(f32)(f31 + f1);
        c0lt = (f64)rdf32(param_1 + 0x14u) < f1;
        wrf32d(param_1 + 0x10u, f1);
        if (c0lt) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1 + 0x24u) + 0x24u), &a);
            a.f[0] = (f64)rdf32(0x8057622cu);
            a.r[0] = param_1;
            f1 = tc_callf(0x801dd9dcu, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1 + 0x24u) + 0x1cu), &a);
    }
    return;
}
