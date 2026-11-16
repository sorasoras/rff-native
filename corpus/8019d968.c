#include "tc_rt.h"

void fn_8019d968(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8017b810u, &a);
    wr32((u32)param_1 + 0x128u, 0xcu);
    wr32((u32)param_1 + 0x12cu, 1u);
    wr32((u32)param_1 + 0x134u, 0xffffffffu);
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
    wr8((u32)param_1 + 0x130u, 0u);
    wr32((u32)param_1 + 0x160u, 0u);
    return;
}
