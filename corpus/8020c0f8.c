#include "tc_rt.h"

void fn_8020c0f8(s32 param_1)
{
    TcArgs a = {0};
    wrf32d((u32)param_1 + 4u, (f64)rdf32(0x805767a8u));
    wr32((u32)param_1 + 0xcu, rd32((rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e5a4u));
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    a.r[1] = 6u;
    (void)tc_call(0x800564f8u, &a);
    return;
}
