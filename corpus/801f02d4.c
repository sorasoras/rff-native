#include "tc_rt.h"

u32 fn_801f02d4(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x124u);
    if (r0 > 3u && r0 < 7u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800da354u, &a);
        wr32((u32)param_1 + 0x124u, 0x6cu);
    } else {
        wr32((u32)param_1 + 0x124u, 2u);
    }
    return 0u;
}
