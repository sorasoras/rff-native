#include "tc_rt.h"

void fn_80308ef8(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1 + 0x11du) != 0u) {
        if ((u32)rd8(param_1 + 0x120u) == 0u || (u32)rd8(param_1 + 0x121u) != 0u) {
            if ((u32)rd8(param_1 + 0x11eu) != 0u) {
                r0 = rd32(param_1 + 0x828u);
                r4 = param_1 + 0xb74u;
                ctr = r0;
                if ((s32)r0 > 0) {
                    do {
                        if ((u32)rd8(r4) != 0u && rd32(r4 + 4u) == 0u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.f[0] = 0.0;
                            (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
                            return;
                        }
                        r4 = r4 + 0x38u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            if ((u32)rd8(param_1 + 0x125u) != 0u && rd32(param_1 + 0x190u) == 0u) {
                r29 = rd32(param_1 + 0x824u);
                if (r29 == 0u) {
                    r29 = 0u;
                } else {
                    a.r[0] = r29;
                    a.r[1] = r4;
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
                if (r0 == 0u) {
                    wr8(param_1 + 0x125u, 0u);
                    a.r[0] = param_1;
                    (void)tc_call(0x80309d30u, &a);
                }
            }
            if ((u32)rd8(param_1 + 0x122u) != 0u) {
                wr8(param_1 + 0x122u, 0u);
            }
            r29 = param_1 + 0xb74u;
            r30 = 0u;
            while ((s32)r30 < (s32)rd32(param_1 + 0x828u)) {
                a.r[0] = param_1;
                a.r[1] = r29;
                (void)tc_call(0x803090acu, &a);
                r29 = r29 + 0x38u;
                r30 = r30 + 1u;
            }
        } else {
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
        }
    }
    return;
}
