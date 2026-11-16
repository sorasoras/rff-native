#include "tc_rt.h"

u64 fn_80255d78(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 c7lt = 0, ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u64 t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
    r3 = param_1;
    r4 = param_2;
    r5 = (u32)param_3;
    r6 = param_4;
    c7lt = (s32)param_1 < 0;
    if (c7lt) {
        r4 = 0u - param_2;
        r3 = (u32)((u64)~param_1 + (u64)(param_2 <= 0u));
    }
    if (param_3 < 0) {
        r6 = 0u - param_4;
        r5 = (u32)((u64)~(u32)param_3 + (u64)(param_4 <= 0u));
    }
    r0 = ppc_cntlzw(r3);
    r9 = ppc_cntlzw(r4);
    if (r3 == 0u) {
        r0 = r9 + 0x20u;
    }
    r9 = ppc_cntlzw(r5);
    r10 = ppc_cntlzw(r6);
    if (r5 == 0u) {
        r9 = r10 + 0x20u;
    }
    r10 = 0x40u - r0;
    if ((s32)r0 <= (s32)r9) {
        r9 = r9 + 1u;
        r9 = 0x40u - r9;
        r0 = r0 + r9;
        r9 = r10 - r9;
        ctr = r9;
        r7 = r9 - 0x20u;
        if ((s32)r9 >= 32) {
            r8 = ((r7 & 0x20u) != 0u) ? 0u : (r3 >> (r7 & 0x1fu));
            r7 = 0u;
        } else {
            r7 = 0x20u - r9;
            r7 = ((r7 & 0x20u) != 0u) ? 0u : (r3 << (r7 & 0x1fu));
            r8 = (((r9 & 0x20u) != 0u) ? 0u : (r4 >> (r9 & 0x1fu))) | r7;
            r7 = ((r9 & 0x20u) != 0u) ? 0u : (r3 >> (r9 & 0x1fu));
        }
        r9 = r0 - 0x20u;
        if ((s32)r0 >= 32) {
            r3 = ((r9 & 0x20u) != 0u) ? 0u : (r4 << (r9 & 0x1fu));
            r4 = 0u;
        } else {
            r3 = ((r0 & 0x20u) != 0u) ? 0u : (r3 << (r0 & 0x1fu));
            r9 = 0x20u - r0;
            r9 = ((r9 & 0x20u) != 0u) ? 0u : (r4 >> (r9 & 0x1fu));
            r3 = r3 | r9;
            r4 = ((r0 & 0x20u) != 0u) ? 0u : (r4 << (r0 & 0x1fu));
        }
        ca = r7 < r7;
        r7 = r7;
        do {
            t2 = (u64)r4 + (u64)r4 + (u64)ca;
            r4 = (u32)t2;
            t3 = (u64)r3 + (u64)r3 + (u64)(u32)(t2 >> 0x20ull);
            r3 = (u32)t3;
            t4 = (u64)r8 + (u64)r8 + (u64)(u32)(t3 >> 0x20ull);
            r8 = (u32)t4;
            t5 = (u64)r7 + (u64)r7 + (u64)(u32)(t4 >> 0x20ull);
            r7 = (u32)t5;
            r0 = (u32)t4 - r6;
            t6 = (u64)~r5 + (u64)(u32)t5 + (u64)(r6 <= (u32)t4);
            ca = (u32)(t6 >> 0x20ull);
            if ((s32)t6 >= 0) {
                r8 = r0;
                r7 = (u32)t6;
                ca = 1;
            }
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r4 = r8;
        r3 = r7;
    }
    if (c7lt) {
        ca = r4 <= 0u;
        r4 = 0u - r4;
        r3 = (u32)((u64)~r3 + (u64)ca);
    }
    return ((u64)r3 << 0x20ull) | (u64)r4;
}
