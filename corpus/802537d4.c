#include "tc_rt.h"

void fn_802537d4(u32 param_1, s32 param_2, u32 param_r5)
{
    u32 c0lt = 0, r3 = 0, r5 = 0, r7 = 0;
    c0lt = param_2 < 19;
    r7 = (param_r5 & 0xffffffu) | 0xf4000000u;
    if ((u32)param_2 == 0x13u) {
        r5 = 1u;
    } else if (!c0lt) {
        if ((u32)param_2 == 0x16u) {
            r5 = 2u;
        } else {
            r5 = 2u;
        }
    } else if ((u32)param_2 == 0x11u) {
        r5 = 0u;
    } else {
        r5 = 2u;
    }
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r7);
    r3 = rd32(0x80576c88u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, (((r5 & 3u) | ((param_1 << 2u) & 0xcu)) & 0xffffffu) | 0xf5000000u);
    wr16(r3 + 2u, 0u);
    return;
}
