#include "tc_rt.h"

void fn_800dc5ac(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    for (;;) {
        r4 = rd32((u32)param_1 + 8u) * 0x1cu;
        if (rd32((u32)param_1 + r4 + 0x14u) == 0u) break;
        a.r[0] = (u32)param_1 + r4 + 0xcu;
        r3 = tc_call(0x8007b09cu, &a);
        a.r[0] = r3;
        a.r[1] = 1u;
        (void)tc_call(0x800dae3cu, &a);
    }
    wr32((u32)param_1 + 4u, 0u);
    return;
}
