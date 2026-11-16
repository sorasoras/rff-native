#include "tc_rt.h"

void fn_80174b1c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f2 = (f64)rdf32(0x80574ef8u);
    f3 = (f64)rdf32(0x80574ef4u);
    f1 = (f64)rdf32(0x80574efcu);
    f0 = (f64)rdf32(0x80574f00u);
    wrf32d((u32)param_1 + 0x748u, (f64)rdf32(0x80574ef0u));
    wrf32d((u32)param_1 + 0x750u, f3);
    wr32((u32)param_1 + 0x754u, 0u);
    wrf32d((u32)param_1 + 0x758u, f2);
    wrf32d((u32)param_1 + 0x74cu, f1);
    wrf32d((u32)param_1 + 0x75cu, f2);
    wrf32d((u32)param_1 + 0x760u, f2);
    wrf32d((u32)param_1 + 0x764u, f2);
    wrf32d((u32)param_1 + 0x768u, f0);
    return;
}
