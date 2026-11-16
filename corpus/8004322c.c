#include "tc_rt.h"

void fn_8004322c(u32 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x805720acu);
    wrf32d(param_1, (f64)rdf32((u32)param_2 + 0x20u));
    f0 = (f64)rdf32(0x805720b0u);
    wrf32d(param_1 + 4u, (f64)rdf32((u32)param_2 + 0x24u));
    f1 = ppc_fmadds((f64)rdf32(0x803c1c3cu), (f64)(f32)((f64)rdf32((u32)param_2 + 0x20u) * (f64)rdf32(0x803c1c38u)), f1);
    wrf32d(param_1 + 8u, f1);
    f0 = ppc_fmadds((f64)rdf32((u32)param_2 + 0x24u), (f64)rdf32(0x803c1c38u), f0);
    wrf32d(param_1 + 0xcu, f0);
    wrf32d(param_1 + 0x10u, (f64)rdf32((u32)param_2 + 0x34u));
    wrf32d(param_1 + 0x14u, (f64)rdf32((u32)param_2 + 0x38u));
    wrf32d(param_1 + 0x18u, (f64)rdf32((u32)param_2 + 0x48u));
    return;
}
