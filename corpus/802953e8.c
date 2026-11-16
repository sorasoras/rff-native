#include "tc_rt.h"

u32 fn_802953e8(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = 0xffffffffu;
    r5 = 0x8053f888u;
    r7 = 0u;
    r3 = 0x8053f888u;
    ctr = 4u;
    do {
        r4 = (u32)rd8(r5 + 0x76u);
        if ((r4 & 0x80u) != 0u && (r4 & 0x10u) == 0u) {
            r0 = rd32(r5 + 0xcu);
            if (r0 < r6) {
                r3 = r5;
                r6 = r0;
            }
        }
        r4 = (u32)rd8(r5 + 0xfeu);
        r5 = r5 + 0x88u;
        if ((r4 & 0x80u) != 0u && (r4 & 0x10u) == 0u) {
            r0 = rd32(r5 + 0xcu);
            if (r0 < r6) {
                r3 = r5;
                r6 = r0;
            }
        }
        r4 = (u32)rd8(r5 + 0xfeu);
        r5 = r5 + 0x88u;
        if ((r4 & 0x80u) != 0u && (r4 & 0x10u) == 0u) {
            r0 = rd32(r5 + 0xcu);
            if (r0 < r6) {
                r3 = r5;
                r6 = r0;
            }
        }
        r4 = (u32)rd8(r5 + 0xfeu);
        r5 = r5 + 0x88u;
        if ((r4 & 0x80u) != 0u && (r4 & 0x10u) == 0u) {
            r0 = rd32(r5 + 0xcu);
            if (r0 < r6) {
                r3 = r5;
                r6 = r0;
            }
        }
        r7 = r7 + 3u;
        r5 = r5 + 0x88u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((r6 + 0x10000u) == 0xffffu) {
        r5 = 0u;
        r4 = 0x8053f888u;
        ctr = 4u;
        do {
            if (((u32)rd8(r4 + 0x76u) & 0x80u) != 0u) {
                r0 = rd32(r4 + 0xcu);
                if (r0 < r6) {
                    r3 = r4;
                    r6 = r0;
                }
            }
            r0 = (u32)rd8(r4 + 0xfeu);
            r4 = r4 + 0x88u;
            r0 = r0 & 0x80u;
            if (r0 != 0u) {
                r0 = rd32(r4 + 0xcu);
                if (r0 < r6) {
                    r3 = r4;
                    r6 = r0;
                }
            }
            r0 = (u32)rd8(r4 + 0xfeu);
            r4 = r4 + 0x88u;
            r0 = r0 & 0x80u;
            if (r0 != 0u) {
                r0 = rd32(r4 + 0xcu);
                if (r0 < r6) {
                    r3 = r4;
                    r6 = r0;
                }
            }
            r0 = (u32)rd8(r4 + 0xfeu);
            r4 = r4 + 0x88u;
            r0 = r0 & 0x80u;
            if (r0 != 0u) {
                r0 = rd32(r4 + 0xcu);
                if (r0 < r6) {
                    r3 = r4;
                    r6 = r0;
                }
            }
            r5 = r5 + 3u;
            r4 = r4 + 0x88u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return r3;
    }
    return r3;
}
