#include "tc_rt.h"

void fn_80306fa8(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = ppc_divwu((u32)param_2 - rd32(param_1), rd32(param_1 + 8u));
    r6 = param_1 + ((r5 >> 3u) & 0x1fffffffu);
    r0 = r5 & 7u;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = (u32)rd8(r6 + 0x14u) & ~r0;
    wr8(r6 + 0x14u, (u8)r0);
    wr32(param_1 + 0x10u, rd32(param_1 + 0x10u) - 1u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
