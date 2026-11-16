#include "tc_rt.h"

void fn_80250cc0(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r6 = rd32(0x80576c88u);
    r7 = 0u;
    r5 = (u32)rd16(r6 + 4u);
    r4 = (u32)rd16(r6 + 6u);
    wr8(0xcc008000u, 0x98u);
    r8 = r5 * r4;
    wr16(0xcc008000u, rd16(r6 + 4u));
    if (r8 != 0u) {
        r3 = r8 + 3u;
        r5 = r8 - 0x20u;
        if (((r3 >> 2u) & 0x3fffffffu) > 8u) {
            r0 = 0u;
            if (r3 >= 3u && r8 <= r3) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                ctr = ((r5 + 0x1fu) >> 5u) & 0x7ffffffu;
                if (r5 > 0u) {
                    do {
                        wr32(0xcc008000u, 0u);
                        r7 = r7 + 0x20u;
                        wr32(0xcc008000u, 0u);
                        wr32(0xcc008000u, 0u);
                        wr32(0xcc008000u, 0u);
                        wr32(0xcc008000u, 0u);
                        wr32(0xcc008000u, 0u);
                        wr32(0xcc008000u, 0u);
                        wr32(0xcc008000u, 0u);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        ctr = ((r8 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r8) {
            do {
                wr32(0xcc008000u, 0u);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr16(r6 + 2u, 1u);
    return;
}
