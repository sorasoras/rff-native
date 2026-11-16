#include "tc_rt.h"

void fn_802df830(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x6eu) != 0u && (u32)rd8((u32)param_1 + 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x28u;
        (void)tc_call(0x80234b88u, &a);
        wr8((u32)param_1 + 4u, 0u);
    }
    return;
}
