#include "tc_rt.h"

void fn_801a0954(s32 param_1)
{
    wr32((u32)param_1 + 0x15e8u, 0xffffffffu);
    wr32((u32)param_1 + 0x15f0u, 0u);
    wrf32d((u32)param_1 + 0x15f8u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x15fcu, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x1600u, (f64)rdf32(0x804890d0u));
    wr32((u32)param_1 + 0x15ecu, 0xffffffffu);
    wr32((u32)param_1 + 0x15f4u, 0u);
    wrf32d((u32)param_1 + 0x1604u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x1608u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x160cu, (f64)rdf32(0x804890d0u));
    return;
}
