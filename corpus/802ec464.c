#include "tc_rt.h"

void fn_802ec464(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r6 = 0, r11 = 0, r30 = 0, r31 = 0;
    if (param_2 != 0u) {
        r11 = rd32((u32)param_1 + 0x38u);
        r31 = rd32((u32)param_1 + 0x3cu);
        r30 = (r31 >> 0xfu) & 7u;
        r6 = ((r11 >> 3u) & 4u) + (((r11 >> 0xcu) & 4u) + ((r11 >> 0x12u) & 0x3cu) + (((r11 >> 4u) & 4u) + (((r11 >> 5u) & 4u) + ((r11 >> 6u) & 4u)))) + (rd32((u32)param_1 + 0x40u) + ((((r11 >> 0x18u) & 0xfu) * 0x14u) + (((r11 >> 0x1cu) & 0xfu) * 0x1cu)));
        r6 = ((r31 >> 0xdu) & 0x1cu) + r6;
        ctr = param_2 - r30;
        if (r30 < param_2) {
            do {
                if (r6 != 0u) {
                    wr8(r6, 0u);
                    wr8(r6 + 1u, 0u);
                    wr8(r6 + 2u, 0u);
                    wr8(r6 + 3u, 0u);
                }
                r6 = r6 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32((u32)param_1 + 0x3cu, (rd32((u32)param_1 + 0x3cu) & 0xfffc7fffu) | ((param_2 << 0xfu) & 0x38000u));
    return;
}
