#include "tc_rt.h"

u32 fn_802faa98(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r6 = ((u32)param_2 + 3u) & 0xfffffffcu;
    r7 = 0u;
    r4 = ((u32)param_4 + 3u) & 0xfffffffcu;
    r30 = ppc_divwu((u32)param_3 - (r6 - (u32)param_2), r4);
    if (r30 != 0u) {
        r5 = r30 - 8u;
        if (r30 > 8u) {
            ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
            if (r5 > 0u) {
                do {
                    r8 = r6;
                    r7 = r7 + 8u;
                    wr32(r6, rd32(param_1));
                    wr32(param_1, r6);
                    r6 = r6 + r4;
                    r5 = r6;
                    wr32(r6, r8);
                    wr32(param_1, r6);
                    r6 = r6 + r4;
                    r0 = r6;
                    wr32(r6, r5);
                    wr32(param_1, r6);
                    r6 = r6 + r4;
                    r5 = r6;
                    wr32(r6, r0);
                    wr32(param_1, r6);
                    r6 = r6 + r4;
                    r0 = r6;
                    wr32(r6, r5);
                    wr32(param_1, r6);
                    r6 = r6 + r4;
                    r5 = r6;
                    wr32(r6, r0);
                    wr32(param_1, r6);
                    r6 = r6 + r4;
                    wr32(r6, r5);
                    wr32(param_1, r6);
                    wr32(r6 + r4, r6);
                    r6 = r6 + r4;
                    wr32(param_1, r6);
                    r6 = r6 + r4;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        ctr = r30 - r7;
        if (r7 < r30) {
            do {
                wr32(r6, rd32(param_1));
                wr32(param_1, r6);
                r6 = r6 + r4;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
