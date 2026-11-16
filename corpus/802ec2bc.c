#include "tc_rt.h"

void fn_802ec2bc(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r9 = 0, r11 = 0;
    if (param_2 != 0u) {
        r0 = rd32((u32)param_1 + 0x38u);
        r9 = rd32((u32)param_1 + 0x3cu);
        r5 = (r0 >> 0x18u) & 0xfu;
        r0 = (r0 >> 0x1cu) & 0xfu;
        r5 = r5 * 0x14u;
        r11 = (r9 >> 0x14u) & 0xfu;
        r5 = rd32((u32)param_1 + 0x40u) + r5;
        r9 = ((r9 >> 0x12u) & 0x3cu) + ((r0 * 0x1cu) + r5);
        ctr = param_2 - r11;
        if (r11 < param_2) {
            do {
                if (r9 != 0u) {
                    wr8(r9 + 3u, 0u);
                    wr8(r9, 1u);
                    wr8(r9 + 1u, 4u);
                    wr8(r9 + 2u, 0x3cu);
                }
                r9 = r9 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32((u32)param_1 + 0x3cu, (rd32((u32)param_1 + 0x3cu) & 0xff0fffffu) | ((param_2 << 0x14u) & 0xf00000u));
    return;
}
