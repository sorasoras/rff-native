#include "tc_rt.h"

void fn_8025bd34(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0;
    r4 = param_2;
    r5 = param_2 & 3u;
    r7 = param_1;
    if ((param_1 & 3u) == r5) {
        if (r5 != 0u) {
            r0 = (u32)rd8(param_2);
            wr8(param_1, (u8)r0);
            if (r0 == 0u) {
                return;
            }
            r0 = 3u - r5;
            ctr = r0;
            if (r0 != 0u) {
                do {
                    r4 = r4 + 1u;
                    r0 = (u32)rd8(r4);
                    wr8(r7 + 1u, (u8)r0);
                    r7 = r7 + 1u;
                    if (r0 == 0u) {
                        return;
                    }
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
            r7 = r7 + 1u;
            r4 = r4 + 1u;
        }
        r8 = rd32(r4);
        if (((r8 - 0x1010101u) & ~r8 & 0x80808080u) == 0u) {
            r7 = r7 - 4u;
            do {
                wr32(r7 + 4u, r8);
                r7 = r7 + 4u;
                r4 = r4 + 4u;
                r8 = rd32(r4);
            } while (((r8 - 0x1010101u) & ~r8 & 0x80808080u) == 0u);
            r7 = r7 + 4u;
        }
    }
    r0 = (u32)rd8(r4);
    wr8(r7, (u8)r0);
    if (r0 == 0u) {
        return;
    }
    do {
        r4 = r4 + 1u;
        r0 = (u32)rd8(r4);
        wr8(r7 + 1u, (u8)r0);
        r7 = r7 + 1u;
    } while (r0 != 0u);
    return;
}
