#include "tc_rt.h"

void fn_801dfd48(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    r3 = rd32((u32)param_1 + 0xd1cu);
    f2 = (f64)rdf32(0x80576280u);
    f0 = (f64)(f32)((f64)rdf32(r3 + 0x18u) + (f64)rdf32(0x80576294u));
    if (f2 < f0) {
        wrf32d(r3 + 0x18u, f2);
        return;
    }
    f2 = f0;
    wrf32d(r3 + 0x18u, f2);
    return;
}
