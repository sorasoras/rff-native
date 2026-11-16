#include "tc_rt.h"

void fn_801635f0(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    r9 = 0u;
    r10 = 0u;
    ctr = 3u;
    do {
        r4 = r10 + 1u;
        r6 = r10 + 5u;
        r5 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
        r0 = r10 + 2u;
        r4 = r10 + 3u;
        r6 = ((r6 & 0x20u) != 0u) ? 0u : (1u << (r6 & 0x1fu));
        r9 = r9 | r5;
        r5 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r10 + 4u;
        r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
        r9 = r9 | r5;
        r5 = r10 + 6u;
        r7 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r10 + 8u;
        r9 = r9 | r4;
        r4 = r10 + 7u;
        r9 = r9 | r7;
        r5 = ((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu));
        r9 = r9 | r6;
        r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
        r9 = r9 | r5;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r9 = r9 | r4;
        r10 = r10 + 8u;
        r9 = r9 | r0;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r6 = rd32((u32)param_1 + 0x4cu);
    r5 = rd32((u32)param_1 + 0x54u);
    wr32((u32)param_1 + 0x58u, 0u);
    wr32((u32)param_1 + 0x54u, r5 & (r9 | 1u));
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x60u, 0u);
    if ((s32)r6 >= 0) {
        r0 = (r6 << 0x1bu) & 0xf8000000u;
        r4 = (r6 >> 0x1fu) & 1u;
        r6 = ((u32)((u64)(u32)((s32)r6 >> 5) + (u64)(((s32)r6 < 0) && ((r6 & 0x1fu) != 0u))) << 2u) & 0xfffffffcu;
        r0 = r0 - r4;
        r6 = (u32)param_1 + r6;
        r0 = (r0 << 5u) | (r0 >> 0x1bu);
        r0 = r0 + r4;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = rd32(r6 + 0x54u) | r0;
        wr32(r6 + 0x54u, r0);
    }
    a.r[0] = 3u;
    (void)tc_call(0x8004f7b0u, &a);
    return;
}
