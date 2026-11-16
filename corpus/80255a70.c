#include "tc_rt.h"

u64 fn_80255a70(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u64 t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    r0 = ppc_cntlzw(param_1);
    r9 = ppc_cntlzw(param_2);
    if (param_1 == 0u) {
        r0 = r9 + 0x20u;
    }
    r9 = ppc_cntlzw((u32)param_3);
    r10 = ppc_cntlzw(param_4);
    if ((u32)param_3 == 0u) {
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
            r8 = ((r7 & 0x20u) != 0u) ? 0u : (param_1 >> (r7 & 0x1fu));
            r7 = 0u;
        } else {
            r7 = 0x20u - r9;
            r7 = ((r7 & 0x20u) != 0u) ? 0u : (param_1 << (r7 & 0x1fu));
            r8 = (((r9 & 0x20u) != 0u) ? 0u : (param_2 >> (r9 & 0x1fu))) | r7;
            r7 = ((r9 & 0x20u) != 0u) ? 0u : (param_1 >> (r9 & 0x1fu));
        }
        r9 = r0 - 0x20u;
        if ((s32)r0 >= 32) {
            r3 = ((r9 & 0x20u) != 0u) ? 0u : (param_2 << (r9 & 0x1fu));
            r4 = 0u;
        } else {
            r9 = 0x20u - r0;
            r9 = ((r9 & 0x20u) != 0u) ? 0u : (param_2 >> (r9 & 0x1fu));
            r3 = (((r0 & 0x20u) != 0u) ? 0u : (param_1 << (r0 & 0x1fu))) | r9;
            r4 = ((r0 & 0x20u) != 0u) ? 0u : (param_2 << (r0 & 0x1fu));
        }
        ca = r7 < r7;
        r7 = r7;
        do {
            t0 = (u64)r4 + (u64)r4 + (u64)ca;
            r4 = (u32)t0;
            t1 = (u64)r3 + (u64)r3 + (u64)(u32)(t0 >> 0x20ull);
            r3 = (u32)t1;
            t2 = (u64)r8 + (u64)r8 + (u64)(u32)(t1 >> 0x20ull);
            r8 = (u32)t2;
            t3 = (u64)r7 + (u64)r7 + (u64)(u32)(t2 >> 0x20ull);
            r7 = (u32)t3;
            r0 = (u32)t2 - param_4;
            t4 = (u64)~(u32)param_3 + (u64)(u32)t3 + (u64)(param_4 <= (u32)t2);
            ca = (u32)(t4 >> 0x20ull);
            if ((s32)t4 >= 0) {
                r8 = r0;
                r7 = (u32)t4;
                ca = 1;
            }
            ctr = ctr - 1u;
        } while (ctr != 0u);
        t5 = (u64)(u32)t0 + (u64)(u32)t0 + (u64)ca;
        return ((u64)(u32)((u64)(u32)t1 + (u64)(u32)t1 + (u64)(u32)(t5 >> 0x20ull)) << 0x20ull) | (u64)(u32)t5;
    }
    return 0x0ull;
}
