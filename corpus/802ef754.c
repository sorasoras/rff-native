#include "tc_rt.h"

void fn_802ef754(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r6 = 0, r7 = 0;
    r7 = (u32)rd8(param_2 + 1u);
    r6 = (u32)rd8(param_2 + 2u);
    r0 = (u32)rd8(param_2 + 3u);
    wr8(param_1, rd8(param_2));
    wr8(param_1 + 1u, (u8)r7);
    wr8(param_1 + 2u, (u8)r6);
    wr8(param_1 + 3u, (u8)r0);
    if ((u32)param_3 != 0xffu) {
        r0 = (u32)rd8(param_2 + 3u) * (u32)param_3;
        r0 = ppc_mulhw(-2139062143, (s32)r0) + r0;
        r0 = (u32)((s32)r0 >> 7);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        wr8(param_1 + 3u, (u8)r0);
        return;
    }
    return;
}
