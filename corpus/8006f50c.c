#include "tc_rt.h"

void fn_8006f50c(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805726f8u);
    r0 = rd32((u32)param_1 + 0x3cu);
    wr32((u32)param_1 + 0x48u, 0u);
    wr32((u32)param_1 + 0x4cu, 0u);
    wr32((u32)param_1 + 0x2cu, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    wrf32d((u32)param_1 + 0xa4u, f0);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x3cu, 0u);
    }
    return;
}
