#include "tc_rt.h"

void fn_801fbfb4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x78u;
    a.r[1] = 0x8033c4d3u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x78u;
    (void)tc_call(0x801f10d8u, &a);
    return;
}
