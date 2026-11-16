#include "tc_rt.h"

void fn_802543b0(u32 param_1, s32 param_2)
{
    u32 r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r5 = rd32(0x80576c88u);
    f1 = (f64)rdf32(param_1);
    wr32(r5 + 0x528u, (u32)param_2);
    f0 = (f64)rdf32(param_1 + 0x14u);
    wrf32d(r5 + 0x52cu, f1);
    f1 = (f64)rdf32(param_1 + 0x28u);
    wrf32d(r5 + 0x534u, f0);
    f0 = (f64)rdf32(param_1 + 0x2cu);
    wrf32d(r5 + 0x53cu, f1);
    wrf32d(r5 + 0x540u, f0);
    if ((u32)param_2 == 1u) {
        f0 = (f64)rdf32(param_1 + 0x1cu);
        wrf32d(r5 + 0x530u, (f64)rdf32(param_1 + 0xcu));
        wrf32d(r5 + 0x538u, f0);
    } else {
        f0 = (f64)rdf32(param_1 + 0x18u);
        wrf32d(r5 + 0x530u, (f64)rdf32(param_1 + 8u));
        wrf32d(r5 + 0x538u, f0);
    }
    wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 0x8000000u);
    return;
}
