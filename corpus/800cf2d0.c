#include "tc_rt.h"

void fn_800cf2d0(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = rd32(0x804b1590u);
    if (r0 < 0xau) {
        r0 = (r0 << 3u) & 0xfffffff8u;
        wr32(r0 - 0x7fb4eac0u, param_1);
        wr32(((rd32(0x804b1590u) << 3u) & 0xfffffff8u) - 0x7fb4eabcu, param_2);
        wr32(0x804b1590u, rd32(0x804b1590u) + 1u);
        return;
    }
    return;
}
