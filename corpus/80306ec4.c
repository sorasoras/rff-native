#include "tc_rt.h"

s32 fn_80306ec4(u32 param_1)
{
    u32 ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0, r10 = 0;
    u64 t0 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(param_1 + 0xcu);
    if ((s32)rd32(param_1 + 0x10u) >= (s32)r4) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        r8 = 0u;
        r4 = (r4 + 7u) & 0xfffffff8u;
        ca = ((s32)r4 < 0) && ((r4 & 7u) != 0u);
        r4 = (u32)((s32)r4 >> 3);
        t0 = (u64)r4 + (u64)ca;
        while ((s32)r8 < (s32)t0) {
            r6 = param_1 + r8;
            r5 = (u32)rd8(r6 + 0x14u);
            if (r5 != 0xffu) {
                r9 = 1u;
                r10 = 0u;
                ctr = 8u;
                do {
                    if ((r5 & r9) == 0u) {
                        wr8(r6 + 0x14u, (u8)((u32)rd8(r6 + 0x14u) | r9));
                        r4 = rd32(param_1 + 8u) * (r10 + ((r8 << 3u) & 0xfffffff8u));
                        r0 = rd32(param_1);
                        wr32(param_1 + 0x10u, rd32(param_1 + 0x10u) + 1u);
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        r3 = r4 + r0;
                        return (s32)r3;
                    }
                    r9 = (r9 << 1u) & 0xfeu;
                    r10 = r10 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
            r8 = r8 + 1u;
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    }
    return (s32)r3;
}
