#include "tc_rt.h"

void fn_80221224(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x24u;
    a.r[1] = rd32(rd32((u32)param_1 + 0x1cu) + 0x80u);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = (u32)param_1 + 0x24u;
    a.r[1] = 0x8033c9b8u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x24u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    wr32((u32)param_1 + 0x74u, 0u);
    return;
}
