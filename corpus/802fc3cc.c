#include "tc_rt.h"

s32 fn_802fc3cc(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x14u);
    r4 = (u32)param_2 + r5;
    if (r4 > rd32((u32)param_1 + 0x10u)) {
        return 0;
    }
    wr32((u32)param_1 + 0x14u, (r4 + 0x1fu) & 0xffffffe0u);
    return (s32)r5;
}
