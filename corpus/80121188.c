#include "tc_rt.h"

void fn_80121188(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32((u32)param_1 + 0x20u) + 4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 3u;
        (void)tc_call(0x802f5fd8u, &a);
    }
    wr32(rd32((u32)param_1 + 0x20u) + 0x4cu, 0u);
    return;
}
