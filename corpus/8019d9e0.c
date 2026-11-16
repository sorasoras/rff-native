#include "tc_rt.h"

void fn_8019d9e0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x13cu, 0u);
    wr32((u32)param_1 + 0x140u, 0u);
    wr32((u32)param_1 + 0x144u, 0u);
    wr32((u32)param_1 + 0x148u, 0u);
    wr32((u32)param_1 + 0x14cu, 0u);
    wr32((u32)param_1 + 0x150u, 0u);
    wr32((u32)param_1 + 0x154u, 0u);
    wr32((u32)param_1 + 0x158u, 0u);
    wr32((u32)param_1 + 0x15cu, 0u);
    wr32((u32)param_1 + 0x138u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800f3ec8u, &a);
    r3 = rd32((u32)param_1 + 0x160u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x160u, 0u);
    }
    return;
}
