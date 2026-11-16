#include "tc_rt.h"

void fn_80004388(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    r5 = param_3;
    r7 = param_2 & 0xffu;
    r6 = (u32)param_1 - 1u;
    if (param_3 >= 0x20u) {
        r0 = ~(r6 | r6) & 3u;
        if (r0 != 0u) {
            r5 = param_3 - r0;
            do {
                r0 = r0 - 1u;
                wr8(r6 + 1u, (u8)r7);
                r6 = r6 + 1u;
            } while (r0 != 0u);
        }
        if (r7 != 0u) {
            r7 = r7 | ((r7 << 8u) & 0xffffff00u) | (((r7 << 0x18u) & 0xff000000u) | ((r7 << 0x10u) & 0xffff0000u));
        }
        r0 = (r5 >> 5u) & 0x7ffffffu;
        r3 = r6 - 3u;
        if (r0 != 0u) {
            do {
                wr32(r3 + 4u, r7);
                r0 = r0 - 1u;
                wr32(r3 + 8u, r7);
                wr32(r3 + 0xcu, r7);
                wr32(r3 + 0x10u, r7);
                wr32(r3 + 0x14u, r7);
                wr32(r3 + 0x18u, r7);
                wr32(r3 + 0x1cu, r7);
                wr32(r3 + 0x20u, r7);
                r3 = r3 + 0x20u;
            } while (r0 != 0u);
        }
        r0 = (r5 >> 2u) & 7u;
        if (r0 != 0u) {
            do {
                r0 = r0 - 1u;
                wr32(r3 + 4u, r7);
                r3 = r3 + 4u;
            } while (r0 != 0u);
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
