#include "tc_rt.h"

void fn_8014b8f0(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x168u);
    r4 = r5 + 1u;
    if ((s32)r4 > 8) {
        r4 = 7u;
    }
    if (r5 != r4) {
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        (void)tc_call(0x8014b494u, &a);
        return;
    }
    return;
}
