#include "tc_rt.h"

void fn_8019ddc0(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r7 = 0, r9 = 0;
    r9 = 0u;
    r4 = 0u;
    ctr = 3u;
    do {
        r7 = (u32)param_1 + r4;
        r5 = rd32(r7 + 0x13cu);
        if (r5 != 0u) {
            r5 = rd32(r5 + 0xbcu);
            if (((ppc_cntlzw(r5 - 4u) >> 5u) & 0x7ffffffu) != 0u) {
                wr32(r7 + 0x13cu, 0u);
                r7 = (u32)rd8((u32)param_1 + 0x130u) - 1u;
                r0 = (rd32((u32)param_1 + 0x134u) << 3u) & 0xfffffff8u;
                wr8((u32)param_1 + 0x130u, (u8)r7);
                wr8(r0 - 0x7fb6d43cu, (u8)r7);
            }
        }
        r4 = r4 + 4u;
        r7 = (u32)param_1 + r4;
        r5 = rd32(r7 + 0x13cu);
        if (r5 != 0u) {
            r5 = rd32(r5 + 0xbcu);
            if (((ppc_cntlzw(r5 - 4u) >> 5u) & 0x7ffffffu) != 0u) {
                wr32(r7 + 0x13cu, 0u);
                r7 = (u32)rd8((u32)param_1 + 0x130u) - 1u;
                r0 = (rd32((u32)param_1 + 0x134u) << 3u) & 0xfffffff8u;
                wr8((u32)param_1 + 0x130u, (u8)r7);
                wr8(r0 - 0x7fb6d43cu, (u8)r7);
            }
        }
        r4 = r4 + 4u;
        r7 = (u32)param_1 + r4;
        r5 = rd32(r7 + 0x13cu);
        if (r5 != 0u) {
            r5 = rd32(r5 + 0xbcu);
            if (((ppc_cntlzw(r5 - 4u) >> 5u) & 0x7ffffffu) != 0u) {
                wr32(r7 + 0x13cu, 0u);
                r7 = (u32)rd8((u32)param_1 + 0x130u) - 1u;
                r0 = (rd32((u32)param_1 + 0x134u) << 3u) & 0xfffffff8u;
                wr8((u32)param_1 + 0x130u, (u8)r7);
                wr8(r0 - 0x7fb6d43cu, (u8)r7);
            }
        }
        r9 = r9 + 2u;
        r4 = r4 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
