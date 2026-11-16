#include "tc_rt.h"

void fn_800c11d4(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xa60u, 1u);
    r0 = rd32((u32)param_1 + 0x15e4u);
    wrf32d((u32)param_1 + 0x1cu, (f64)rdf32(0x804890e0u));
    wrf32d((u32)param_1 + 0x20u, (f64)rdf32(0x804890e4u));
    wrf32d((u32)param_1 + 0x24u, (f64)rdf32(0x804890e8u));
    wr32((u32)param_1 + 0xccu, 0u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x15e4u, 0u);
    }
    wr32((u32)param_1 + 0x290u, 0u);
    return;
}
