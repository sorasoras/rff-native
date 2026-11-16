#include "tc_rt.h"

s32 fn_80094ce4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 ca = 0, r0 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r6 = rd32((u32)param_1 + 0x10u);
    r8 = r6;
    do {
        r9 = r6 + ((rd32(r6 + 8u) << 4u) & 0xfffffff0u) + 0x20u;
        r10 = (((u32)param_2 * (u32)ppc_divw((s32)((u32)param_2 + (u32)((u64)(u32)((s32)r9 >> 4) + (u64)(((s32)r9 < 0) && ((r9 & 0xfu) != 0u))) - 1u), param_2)) << 4u) & 0xfffffff0u;
        r7 = r10 - r9;
        ca = ((s32)r7 < 0) && ((r7 & 0xfu) != 0u);
        r7 = (u32)((s32)r7 >> 4);
        r7 = rd32(r6 + 0xcu) - (u32)((u64)r7 + (u64)ca);
        if ((s32)(r7 - 1u) >= param_3) {
            wr32(r10 - 0x10u, r6);
            r7 = r10 - 0x10u;
            wr32(r10 - 0xcu, rd32(r6 + 4u));
            wr32(r6 + 4u, r7);
            wr32(rd32(r10 - 0xcu), r7);
            wr32(r10 - 8u, (u32)param_3);
            r0 = rd32(r10 - 0xcu) - r7;
            ca = ((s32)r0 < 0) && ((r0 & 0xfu) != 0u);
            r0 = (u32)((s32)r0 >> 4);
            r0 = (u32)((u64)r0 + (u64)ca) - (u32)param_3 - 1u;
            wr32(r10 - 4u, r0);
            r0 = rd32(r6 + 4u) - r6;
            ca = ((s32)r0 < 0) && ((r0 & 0xfu) != 0u);
            r0 = (u32)((s32)r0 >> 4);
            r0 = (u32)((u64)r0 + (u64)ca) - rd32(r6 + 8u) - 1u;
            wr32(r6 + 0xcu, r0);
            wr32((u32)param_1 + 0x10u, r7);
            return (s32)r7;
        }
        r6 = rd32(r6 + 4u);
    } while (r6 != r8);
    return 0;
}
