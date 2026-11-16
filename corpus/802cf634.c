#include "tc_rt.h"

void fn_802cf634(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x58u) + ((param_2 << 5u) & 0x1fe0u);
    r0 = rd32(param_3 + 4u);
    wr32(r3, rd32(param_3));
    r6 = rd32(param_3 + 8u);
    wr32(r3 + 4u, r0);
    r0 = rd32(param_3 + 0xcu);
    wr32(r3 + 8u, r6);
    r6 = rd32(param_3 + 0x10u);
    wr32(r3 + 0xcu, r0);
    r0 = rd32(param_3 + 0x14u);
    wr32(r3 + 0x10u, r6);
    r6 = rd32(param_3 + 0x18u);
    wr32(r3 + 0x14u, r0);
    r0 = rd32(param_3 + 0x1cu);
    wr32(r3 + 0x18u, r6);
    wr32(r3 + 0x1cu, r0);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x80252550u, &a);
    return;
}
