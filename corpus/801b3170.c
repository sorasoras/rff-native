#include "tc_rt.h"

void fn_801b3170(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x5e4u);
    wr32((u32)param_1 + 0xacu, 0u);
    wr32((u32)param_1 + 0x140u, 0u);
    wr32((u32)param_1 + 0x1d4u, 0u);
    wr32((u32)param_1 + 0x268u, 0u);
    wr32((u32)param_1 + 0x2fcu, 0u);
    wr32((u32)param_1 + 0x390u, 0u);
    wr32((u32)param_1 + 0x424u, 0u);
    wr32((u32)param_1 + 0x4b8u, 0u);
    if ((r5 + 0x10000u) != 0xffffu) {
        a.r[0] = r5;
        (void)tc_call(0x8004bc54u, &a);
    }
    r3 = rd32((u32)param_1 + 0x5e8u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
    }
    wr32((u32)param_1 + 0x5e4u, 0xffffffffu);
    wr32((u32)param_1 + 0x5e8u, 0xffffffffu);
    return;
}
