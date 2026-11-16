#include "tc_rt.h"

u32 fn_80148edc(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0x784u);
    if ((s32)r4 > 0) {
        r0 = r4 - 1u;
        wr32((u32)param_1 + 0x784u, r0);
        if ((s32)r0 < 0) {
            wr32((u32)param_1 + 0x784u, 0u);
        }
    }
    return 1u;
}
