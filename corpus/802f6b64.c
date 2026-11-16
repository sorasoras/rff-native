#include "tc_rt.h"

void fn_802f6b64(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x64u);
    if ((s32)r4 < (s32)rd32((u32)param_1 + 0x60u)) {
        wr32((u32)param_1 + 0x64u, r4 + 1u);
    }
    r4 = rd32((u32)param_1 + 0xa0u);
    if ((s32)r4 < (s32)rd32((u32)param_1 + 0x9cu)) {
        wr32((u32)param_1 + 0xa0u, r4 + 1u);
        return;
    }
    return;
}
