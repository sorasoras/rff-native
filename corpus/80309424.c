#include "tc_rt.h"

void fn_80309424(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x11eu) != 0u && (u32)rd8((u32)param_1 + 0xb74u) != 0u) {
        r28 = rd32((u32)param_1 + 0xb78u);
        if (r28 != 0u) {
            r29 = rd32((u32)param_1 + 0x824u);
            if (r29 == 0u) {
                r29 = 0u;
            } else {
                a.r[0] = r29;
                a.r[1] = 0u;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(r29) + 8u), &a);
                for (;;) {
                    if (r3 == 0u) {
                        r0 = 0u;
                        break;
                    }
                    if (r3 == 0x80571cf8u) {
                        r0 = 1u;
                        break;
                    }
                    r3 = rd32(r3);
                }
                if (r0 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r3 = tc_call(0x802391bcu, &a);
                r0 = ppc_cntlzw(r3 ^ 1u);
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (r3 << (r0 & 0x1fu));
                r0 = (r0 >> 0x1fu) & 1u;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                wr8((u32)param_1 + 0x125u, 1u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80309d30u, &a);
            }
            if ((u32)rd8((u32)param_1 + 0x129u) == 0u && (u32)rd8((u32)param_1 + 0x126u) == 0u && (u32)rd8((u32)param_1 + 0x125u) == 0u) {
                a.r[0] = r28;
                r3 = tc_call(0x8030c9c8u, &a);
                r28 = ppc_divwu(r3, rd32((u32)param_1 + 0x104u));
                for (;;) {
                    if (rd32((u32)param_1 + 0x154u) == r28) {
                        return;
                    }
                    if ((u32)rd8((u32)param_1 + 0x125u) == 0u && rd32((u32)param_1 + 0x190u) != 0u && (s32)rd32((u32)param_1 + 0x164u) >= (s32)(rd32((u32)param_1 + 0x140u) - 2u)) break;
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x803096bcu, &a);
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x80309b04u, &a);
                }
                wr8((u32)param_1 + 0x122u, 1u);
                wr8((u32)param_1 + 0x125u, 1u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80309d30u, &a);
            }
        }
    }
    return;
}
