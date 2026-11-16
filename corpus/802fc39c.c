#include "tc_rt.h"

u32 fn_802fc39c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0;
    r4 = (u32)param_3 + (u32)param_2;
    r0 = ((u32)param_2 + 0x1fu) & 0xffffffe0u;
    if (r0 > r4) {
        return 0u;
    }
    wr32((u32)param_1 + 0xcu, r0);
    wr32((u32)param_1 + 0x10u, r4);
    wr32((u32)param_1 + 0x14u, r0);
    return 1u;
}
