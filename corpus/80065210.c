#include "tc_rt.h"

void fn_80065210(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    wr32((u32)param_1 + 0xe0u, 0u);
    r4 = rd32((u32)param_1 + 0xf4u);
    wr32((u32)param_1 + 0xe4u, 0u);
    r0 = (rd32((u32)param_1 + 0x9cu) & 0xfbffffffu) | ((r4 << 0x1au) & 0x4000000u);
    wrf32d((u32)param_1 + 0xe8u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0xecu, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0xf0u, (f64)rdf32(0x804890d0u));
    wr32((u32)param_1 + 0x9cu, r0);
    wr32((u32)param_1 + 0xf4u, 0u);
    return;
}
