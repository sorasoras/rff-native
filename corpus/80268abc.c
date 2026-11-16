#include "tc_rt.h"

void fn_80268abc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r5 = param_3;
    r4 = param_2 & 0xffu;
    r6 = (u32)param_1 - 1u;
    r7 = r4;
    if (param_3 >= 0x20u) {
        r3 = ~(r6 | r6) & 3u;
        if (r3 != 0u) {
            r5 = param_3 - r3;
            do {
                r3 = r3 - 1u;
                wr8(r6 + 1u, (u8)r4);
                r6 = r6 + 1u;
            } while (r3 != 0u);
        }
        if (r4 != 0u) {
            r3 = (r4 << 0x18u) & 0xff000000u;
            r0 = (r4 << 0x10u) & 0xffff0000u;
            r4 = (r4 << 8u) & 0xffffff00u;
            r0 = r3 | r0;
            r0 = r4 | r0;
            r7 = r7 | r0;
        }
        r4 = (r5 >> 5u) & 0x7ffffffu;
        r3 = r6 - 3u;
        if (r4 != 0u) {
            do {
                wr32(r3 + 4u, r7);
                r4 = r4 - 1u;
                wr32(r3 + 8u, r7);
                wr32(r3 + 0xcu, r7);
                wr32(r3 + 0x10u, r7);
                wr32(r3 + 0x14u, r7);
                wr32(r3 + 0x18u, r7);
                wr32(r3 + 0x1cu, r7);
                wr32(r3 + 0x20u, r7);
                r3 = r3 + 0x20u;
            } while (r4 != 0u);
        }
        r4 = (r5 >> 2u) & 7u;
        if (r4 != 0u) {
            do {
                r4 = r4 - 1u;
                wr32(r3 + 4u, r7);
                r3 = r3 + 4u;
            } while (r4 != 0u);
        }
        r6 = r3 + 3u;
        r5 = r5 & 3u;
    }
    if (r5 != 0u) {
        do {
            r5 = r5 - 1u;
            wr8(r6 + 1u, (u8)r7);
            r6 = r6 + 1u;
        } while (r5 != 0u);
        return;
    }
    return;
}
