#include "tc_rt.h"

void fn_800d3298(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        r3 = tc_call(0x80052c3cu, &a);
        r31 = r3;
        wrf32d(r3 + 0x30u, (f64)rdf32(param_1 + 0x20u));
        a.r[0] = param_1;
        f1 = tc_callf(0x800d5a1cu, &a);
        wrf32d(r31 + 0x40u, f1);
        a.f[0] = (f64)rdf32(param_1 + 0xcu);
        a.f[1] = (f64)rdf32(param_1 + 0x10u);
        a.f[2] = (f64)rdf32(param_1 + 0x14u);
        a.f[3] = (f64)rdf32(param_1 + 0x18u);
        a.r[0] = r31;
        (void)tc_call(0x800cc524u, &a);
        f1 = (f64)rdf32(param_1 + 0x1cu);
        if (f1 < (f64)rdf32(0x80573124u)) {
            a.r[0] = param_1;
            f1 = tc_callf(0x800d3188u, &a);
        }
        wrf32d(r31 + 0x3cu, (f64)rdf32(param_1 + 4u));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[1] = rd32(param_1);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800cbc94u, &a);
    }
    return;
}
