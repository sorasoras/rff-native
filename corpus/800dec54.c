#include "tc_rt.h"

void fn_800dec54(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r4 = 0, r5 = 0, r6 = 0, r10 = 0, r11 = 0;
    r10 = 0u;
    r4 = 0u;
    do {
        r11 = 0u;
        r5 = 0u;
        ctr = 0x14u;
        do {
            r6 = 0u;
            if (r10 == 0u) {
                c0lt = (s32)r11 < 2;
                if (r11 == 2u) {
                    r6 = (ppc_cntlzw((u32)rd8(0x80492833u) - 3u) >> 5u) & 0x7ffffffu;
                } else if (!c0lt) {
                    if ((s32)r11 < 4) {
                        r6 = 1u;
                    }
                } else {
                    c0lt = (s32)r11 < 0;
                    if (r11 == 0u) {
                        r6 = (ppc_cntlzw((u32)rd8(0x80492833u) - 1u) >> 5u) & 0x7ffffffu;
                    } else if (!c0lt) {
                        r6 = (ppc_cntlzw((u32)rd8(0x80492833u) - 2u) >> 5u) & 0x7ffffffu;
                    }
                }
                if (r6 == 0u) {
                    wr32((u32)param_1 + r4 + r5 + 0x168u, 0u);
                } else {
                    wr32((u32)param_1 + r4 + r5 + 0x168u, 1u);
                }
            }
            r11 = r11 + 1u;
            r5 = r5 + 8u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r10 = r10 + 1u;
        r4 = r4 + 0xa0u;
    } while ((s32)r10 < 2);
    return;
}
