#include "tc_rt.h"

void fn_80173018(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x1d28u);
    wr32((u32)param_1 + 0x1840u, 0u);
    wr32((u32)param_1 + 0x1960u, 0u);
    wr32((u32)param_1 + 0x18d0u, 0u);
    wr32((u32)param_1 + 0x19f0u, 0u);
    wr32((u32)param_1 + 0x1b10u, 0u);
    wr32((u32)param_1 + 0x1a80u, 0u);
    wr32((u32)param_1 + 0x1ba0u, 0u);
    wr32((u32)param_1 + 0x1cc0u, 0u);
    wr32((u32)param_1 + 0x1c30u, 0u);
    if ((r5 + 0x10000u) != 0xffffu) {
        a.r[0] = r5;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0x1d28u, 0xffffffffu);
    }
    return;
}
