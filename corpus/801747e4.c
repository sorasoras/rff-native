#include "tc_rt.h"

void fn_801747e4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(0x80574ec0u);
    f2 = (f64)rdf32(0x80574ec4u);
    f1 = (f64)rdf32(0x80574ec8u);
    f0 = (f64)rdf32(0x80574eccu);
    wrf32d((u32)param_1 + 0x748u, f3);
    wrf32d((u32)param_1 + 0x750u, f2);
    wr32((u32)param_1 + 0x754u, 0u);
    wrf32d((u32)param_1 + 0x758u, f3);
    wrf32d((u32)param_1 + 0x74cu, f1);
    wrf32d((u32)param_1 + 0x75cu, f3);
    wrf32d((u32)param_1 + 0x760u, f3);
    wrf32d((u32)param_1 + 0x764u, f3);
    wrf32d((u32)param_1 + 0x768u, f0);
    return;
}
