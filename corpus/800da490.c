#include "tc_rt.h"

void fn_800da490(f64 param_1, s32 param_2)
{
    wrf32d((u32)param_2 + 0x100u, (f64)rdf32(0x803d27a0u));
    wrf32d((u32)param_2 + 0x104u, (f64)rdf32(0x803d27a4u));
    wrf32d((u32)param_2 + 0x108u, (f64)rdf32(0x803d27a8u));
    wrf32d((u32)param_2 + 0x10cu, param_1);
    return;
}
