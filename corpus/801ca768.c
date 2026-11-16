#include "tc_rt.h"

void fn_801ca768(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x74u);
    wr32((u32)param_1 + 0x28u, 0u);
    if ((r4 + 0x10000u) != 0xffffu) {
        a.r[0] = r4;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0x74u, 0xffffffffu);
    }
    wr8((u32)param_1 + 0x8cu, 0u);
    return;
}
