#include "tc_rt.h"

void fn_8020c504(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0xcu);
    if (r4 != 8u) {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        a.r[1] = r4;
        (void)tc_call(0x800564f8u, &a);
        return;
    }
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    a.r[1] = 3u;
    (void)tc_call(0x800564f8u, &a);
    return;
}
