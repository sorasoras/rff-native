#include "tc_rt.h"

void fn_801c5f58(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801c56a0u, &a);
    r3 = rd32((u32)param_1 + 0x1d0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
    }
    wr32((u32)param_1 + 0x1d0u, 0u);
    wr32((u32)param_2 + 0xd34u, 1u);
    wrf32d((u32)param_2 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_2 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_2 + 0x184u, (f64)rdf32(0x804890d0u));
    return;
}
