#include "tc_rt.h"

void fn_802139d8(u32 param_1)
{
    u32 r3 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x58u) != 0u) {
        r31 = (u32)rd8(0x80492824u);
        r30 = (u32)rd8(0x80492825u);
        if (r31 <= 5u) {
            r31 = (r31 + 0x18u) & 0xffu;
        }
        if ((u32)rd8(param_1) != 0u) {
            while ((s32)rd32(param_1 + 4u) < (s32)rd32(rd32(param_1 + 0x4dcu))) {
                a.r[0] = param_1;
                a.r[1] = 1u;
                (void)tc_call(0x80213f64u, &a);
            }
        }
        if (r31 < 0x1du) {
            r29 = 1u;
            r26 = 4u;
            while ((s32)r29 < (s32)rd32(rd32(param_1 + 0x4ecu))) {
                r28 = rd32(param_1 + r26 + 0x60u);
                if ((u32)rd8(r28) != 0u) {
                    r3 = rd32(r28 + 0x6cu);
                    if (((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu) == 0u && (((ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu) != 0u || ((ppc_cntlzw(r3 - 2u) >> 5u) & 0x7ffffffu) != 0u || ((ppc_cntlzw(r3 - 3u) >> 5u) & 0x7ffffffu) != 0u)) {
                        a.r[0] = r28;
                        (void)tc_call(0x8021a3f0u, &a);
                    }
                    a.r[0] = r28;
                    a.r[1] = 0u;
                    (void)tc_call(0x8021854cu, &a);
                }
                r29 = r29 + 1u;
                r26 = r26 + 4u;
            }
            a.r[0] = 1u;
            (void)tc_call(0x800a7aa8u, &a);
            for (;;) {
                a.r[0] = r31 & 0xffu;
                a.r[1] = r30 & 0xffu;
                a.r[2] = 0u;
                r3 = tc_call(0x8021258cu, &a);
                wr32(param_1 + 0xe8u, r3);
                r26 = 1u;
                r28 = 4u;
                while ((s32)r26 < (s32)rd32(rd32(param_1 + 0x4ecu))) {
                    r3 = rd32(param_1 + r28 + 0x60u);
                    if ((u32)rd8(r3) != 0u) {
                        a.r[0] = r3;
                        a.r[1] = rd32(param_1 + 0xe8u);
                        a.r[2] = 1u;
                        (void)tc_call(0x8021a544u, &a);
                    }
                    r26 = r26 + 1u;
                    r28 = r28 + 4u;
                }
                r30 = r30 + 1u;
                if ((r30 & 0xffu) >= 0x3cu) {
                    r31 = r31 + 1u;
                    r30 = 0u;
                    if ((r31 & 0xffu) > 0x1bu) break;
                }
            }
            a.r[0] = 0u;
            (void)tc_call(0x800a7aa8u, &a);
        }
        r26 = 1u;
        r28 = 4u;
        while ((s32)r26 < (s32)rd32(rd32(param_1 + 0x4ecu))) {
            r3 = rd32(param_1 + r28 + 0x60u);
            if ((u32)rd8(r3) != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8021a1b0u, &a);
            }
            r26 = r26 + 1u;
            r28 = r28 + 4u;
        }
    }
    return;
}
