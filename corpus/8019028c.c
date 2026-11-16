#include "tc_rt.h"

void fn_8019028c(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x4fcu);
    wr32((u32)param_1 + 0x274u, 0u);
    wr32((u32)param_1 + 0x308u, 0u);
    wr32((u32)param_1 + 0x39cu, 0u);
    wr32((u32)param_1 + 0x430u, 0u);
    if ((r5 + 0x10000u) != 0xffffu) {
        a.r[0] = r5;
        (void)tc_call(0x8004bc54u, &a);
    }
    wr32((u32)param_1 + 0x4fcu, 0xffffffffu);
    return;
}
