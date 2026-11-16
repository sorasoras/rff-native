#include "tc_rt.h"

void fn_8030a034(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = rd32((u32)param_1 + 0x14u);
    a.r[2] = rd32((u32)param_1 + 0x18u);
    a.r[3] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x803086f4u, &a);
    if (r3 == 0u) {
        wr8(rd32((u32)param_1 + 0x10u) + 0x120u, 1u);
    }
    return;
}
