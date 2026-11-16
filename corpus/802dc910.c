#include "tc_rt.h"

void fn_802dc910(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xfcu;
    while (rd32((u32)param_1 + 0x400u) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x802dc7e8u, &a);
        r31 = r31 + 3u;
        wr32((u32)param_1 + 0x400u, rd32((u32)param_1 + 0x400u) - 1u);
    }
    wr32((u32)param_1 + 0x3fcu, (u32)param_1 + 0xfcu);
    return;
}
