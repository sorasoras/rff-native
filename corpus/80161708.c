#include "tc_rt.h"

void fn_80161708(s32 param_1, u32 param_2)
{
    wrf32d((u32)param_1 + 0x154u, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 0x158u, (f64)rdf32(param_2 + 4u));
    wrf32d((u32)param_1 + 0x15cu, (f64)rdf32(param_2 + 8u));
    wrf32d((u32)param_1 + 0x160u, (f64)rdf32(param_2 + 0xcu));
    return;
}
