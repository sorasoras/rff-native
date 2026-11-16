#include "tc_rt.h"

void fn_80158d9c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    f7 = (f64)rdf32(0x80574918u);
    f6 = (f64)rdf32(0x80574944u);
    f2 = (f64)rdf32(0x80574954u);
    f5 = (f64)rdf32(0x80574948u);
    f4 = (f64)rdf32(0x8057494cu);
    f3 = (f64)rdf32(0x80574950u);
    f1 = (f64)rdf32(0x80574958u);
    f0 = (f64)rdf32(0x8057495cu);
    wrf32d((u32)param_1 + 0x1b8u, (f64)rdf32(0x80574940u));
    wrf32d((u32)param_1 + 0x1bcu, f7);
    wrf32d((u32)param_1 + 0x1c0u, f7);
    wrf32d((u32)param_1 + 0x1c4u, f7);
    wrf32d((u32)param_1 + 0x1c8u, f6);
    wrf32d((u32)param_1 + 0x1ccu, f7);
    wrf32d((u32)param_1 + 0x1d0u, f5);
    wrf32d((u32)param_1 + 0x1d4u, f4);
    wrf32d((u32)param_1 + 0x1ecu, f3);
    wrf32d((u32)param_1 + 0x1d8u, f7);
    wrf32d((u32)param_1 + 0x8f4u, f2);
    wrf32d((u32)param_1 + 0x8fcu, f1);
    wr32((u32)param_1 + 0x900u, 1u);
    wrf32d((u32)param_1 + 0x904u, f7);
    wrf32d((u32)param_1 + 0x8f8u, f2);
    wrf32d((u32)param_1 + 0x908u, f7);
    wrf32d((u32)param_1 + 0x90cu, f7);
    wrf32d((u32)param_1 + 0x910u, f7);
    wrf32d((u32)param_1 + 0x914u, f0);
    return;
}
