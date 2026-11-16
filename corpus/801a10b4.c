#include "tc_rt.h"

void fn_801a10b4(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    (void)param_1;
    if ((u32)param_2 != 0u) {
        r0 = rd32(0x8057118cu) | 0x40000u;
        wr32(0x80571188u, rd32(0x80571188u) & 0xffffff80u);
        wr32(0x8057118cu, r0);
        return;
    }
    r0 = rd32(0x8057118cu) & 0xfffbffffu;
    wr32(0x80571188u, rd32(0x80571188u) | 0x7fu);
    wr32(0x8057118cu, r0);
    return;
}
