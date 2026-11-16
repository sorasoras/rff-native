#include "tc_rt.h"

void fn_800f67a8(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x16cu) == 0u) {
        wr32((u32)param_1 + 0x16cu, 1u);
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80056b64u, &a);
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        a.r[1] = 6u;
        (void)tc_call(0x800564f8u, &a);
    }
    return;
}
