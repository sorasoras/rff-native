#include "tc_rt.h"

void fn_80164fe4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    f2 = (f64)rdf32(0x80574b50u);
    f5 = (f64)rdf32(0x80574b44u);
    f4 = (f64)rdf32(0x80574b48u);
    f3 = (f64)rdf32(0x80574b4cu);
    f1 = (f64)rdf32(0x80574b54u);
    f0 = (f64)rdf32(0x80574b58u);
    wrf32d((u32)param_1 + 0x748u, (f64)rdf32(0x80574b40u));
    wrf32d((u32)param_1 + 0x750u, f5);
    wr32((u32)param_1 + 0x754u, 2u);
    wrf32d((u32)param_1 + 0x758u, f4);
    wrf32d((u32)param_1 + 0x74cu, f3);
    wrf32d((u32)param_1 + 0x75cu, f2);
    wrf32d((u32)param_1 + 0x760u, f1);
    wrf32d((u32)param_1 + 0x764u, f2);
    wrf32d((u32)param_1 + 0x768u, f0);
    return;
}
