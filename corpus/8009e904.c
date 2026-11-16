#include "tc_rt.h"

void fn_8009e904(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x24u);
    wr32((u32)param_1 + 0x54u, rd32((u32)param_1 + 0x1cu));
    r0 = r0 & 0xffffu;
    r4 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
    a.r[0] = r0 + r4 + 2u;
    a.r[1] = r4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r3 & 0xffffu;
    r3 = tc_call(0x8009c594u, &a);
    if ((u32)(s8)r3 != 0u) {
        wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x24u) + 4u);
    } else {
        wr32((u32)param_1 + 0x58u, 5u);
        wr32((u32)param_1 + 0x5cu, 1u);
    }
    return;
}
