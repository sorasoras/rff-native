#include "tc_rt.h"

void fn_800b5018(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = 1u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        f31 = (f64)(f32)(param_1 * (f64)rdf32(0x80572c14u));
    }
    f1 = (f64)rdf32(0x80572bf8u);
    if (f31 < f1) {
        f0 = (f64)rdf32((u32)param_2 + 0x10cu);
        if ((f0 > f1) || (f0 == f1)) {
            r4 = rd32((u32)param_2 + 0x70u);
            wrf32d(r4 + 0x54u, (f64)(f32)((f64)rdf32(rd32(r4 + 0x48u) + 0x18u) - (f64)rdf32(0x80572c00u)));
            wrf32d(rd32((u32)param_2 + 0x70u) + 0x60u, f1);
        }
    }
    wrf32d((u32)param_2 + 0x10cu, f31);
    wrf32d(rd32((u32)param_2 + 0x70u) + 0x58u, (f64)(f32)f31);
    r3 = rd32((u32)param_2 + 0x1668u);
    if (r3 != 0u) {
        wrf32d(r3 + 0x58u, (f64)rdf32((u32)param_2 + 0x10cu));
    }
    return;
}
