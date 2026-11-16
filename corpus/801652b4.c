#include "tc_rt.h"

void fn_801652b4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    f1 = (f64)rdf32(0x80574b70u);
    f4 = (f64)rdf32(0x80574b64u);
    f3 = (f64)rdf32(0x80574b68u);
    f2 = (f64)rdf32(0x80574b6cu);
    f0 = (f64)rdf32(0x80574b74u);
    wrf32d((u32)param_1 + 0x748u, (f64)rdf32(0x80574b60u));
    wrf32d((u32)param_1 + 0x750u, f4);
    wr32((u32)param_1 + 0x754u, 0u);
    wrf32d((u32)param_1 + 0x758u, f3);
    wrf32d((u32)param_1 + 0x74cu, f2);
    wrf32d((u32)param_1 + 0x75cu, f1);
    wrf32d((u32)param_1 + 0x760u, f1);
    wrf32d((u32)param_1 + 0x764u, f1);
    wrf32d((u32)param_1 + 0x768u, f0);
    return;
}
