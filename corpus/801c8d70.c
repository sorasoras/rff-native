#include "tc_rt.h"

void fn_801c8d70(u32 param_1, u32 param_2)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0;
    u32 r29 = 0;
    TcArgs a = {0};
    c1lt = (s32)param_2 < 0;
    r10 = 0u;
    if ((s32)param_2 > 0) {
        r6 = param_2 - 8u;
        if ((s32)param_2 > 8) {
            r7 = 0u;
            if (!c1lt && (s32)param_2 <= 2147483646) {
                r7 = 1u;
            }
            if (r7 != 0u) {
                r9 = param_1;
                ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r6 > 0) {
                    do {
                        wr32(r9, r10);
                        r8 = r10 + 3u;
                        wr32(r9 + 4u, r10 + 1u);
                        r7 = r10 + 4u;
                        r6 = r10 + 5u;
                        r5 = r10 + 6u;
                        wr32(r9 + 8u, r10 + 2u);
                        r0 = r10 + 7u;
                        r10 = r10 + 8u;
                        wr32(r9 + 0xcu, r8);
                        wr32(r9 + 0x10u, r7);
                        wr32(r9 + 0x14u, r6);
                        wr32(r9 + 0x18u, r5);
                        wr32(r9 + 0x1cu, r0);
                        r9 = r9 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = param_1 + ((r10 << 2u) & 0xfffffffcu);
        ctr = param_2 - r10;
        if ((s32)r10 < (s32)param_2) {
            do {
                wr32(r3, r10);
                r3 = r3 + 4u;
                r10 = r10 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r29 = param_1;
    r28 = 0u;
    while ((s32)r28 < (s32)param_2) {
        r3 = tc_call(0x80040b64u, &a);
        r4 = rd32(r29);
        r28 = r28 + 1u;
        r3 = ((r3 - (ppc_divwu(r3, param_2) * param_2)) << 2u) & 0xfffffffcu;
        wr32(r29, rd32(param_1 + r3));
        r29 = r29 + 4u;
        wr32(param_1 + r3, r4);
    }
    return;
}
