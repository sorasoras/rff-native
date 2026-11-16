#include "tc_rt.h"

void fn_801c4d98(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32((u32)param_2 + 0xd30u, 0u);
    wrf32d((u32)param_2 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_2 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_2 + 0x184u, (f64)rdf32(0x804890d0u));
    return;
}
