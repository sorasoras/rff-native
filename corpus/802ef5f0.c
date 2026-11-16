#include "tc_rt.h"

void fn_802ef5f0(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    r0 = rd32((u32)param_1 + 4u);
    r6 = ((u32)param_2 << 5u) & 0xffffffe0u;
    f0 = (f64)rdf32(param_3 + 4u);
    wrf32d(r6 + r0, (f64)rdf32(param_3));
    f1 = (f64)rdf32(param_3 + 8u);
    wrf32d(r0 + r6 + 4u, f0);
    f0 = (f64)rdf32(param_3 + 0xcu);
    f3 = (f64)rdf32(param_3 + 0x10u);
    r4 = rd32((u32)param_1 + 4u) + r6;
    f2 = (f64)rdf32(param_3 + 0x14u);
    wrf32d(r4 + 8u, f1);
    f1 = (f64)rdf32(param_3 + 0x18u);
    wrf32d(r4 + 0xcu, f0);
    f0 = (f64)rdf32(param_3 + 0x1cu);
    r4 = rd32((u32)param_1 + 4u) + r6;
    wrf32d(r4 + 0x10u, f3);
    wrf32d(r4 + 0x14u, f2);
    r3 = rd32((u32)param_1 + 4u) + r6;
    wrf32d(r3 + 0x18u, f1);
    wrf32d(r3 + 0x1cu, f0);
    return;
}
