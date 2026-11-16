#include "tc_rt.h"

void fn_801c3f38(u32 param_1, s32 param_2)
{
    (void)param_1;
    wrf32d((u32)param_2 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_2 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_2 + 0x184u, (f64)rdf32(0x804890d0u));
    return;
}
