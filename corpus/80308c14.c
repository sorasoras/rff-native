#include "tc_rt.h"

void fn_80308c14(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = rd32(rd32(param_r3 + 0x820u) + 8u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    a.r[0] = param_r3;
    a.r[1] = 0x817fdfe0u;
    a.r[2] = 0x817fdfdcu;
    a.r[3] = 0x817fdfd8u;
    r3 = tc_call(0x80309de4u, &a);
    if (r3 != 0u) {
        r0 = rd32(param_r3 + 0x100u);
        r4 = ppc_divwu(rd32(param_r3 + 0xf0u), rd32(param_r3 + 0x104u));
        r3 = rd32(param_r3 + 0xfcu);
        wr32(param_r3 + 0x138u, r0);
        r3 = r3 - 1u;
        wr32(param_r3 + 0x160u, r3);
        wr32(param_r3 + 0x15cu, r4);
        if ((s32)r0 <= 8192) {
            r0 = ppc_divwu(r27, r0);
            wr32(param_r3 + 0x13cu, r0);
            if ((s32)r0 >= 4) {
                if ((s32)r0 > 32) {
                    wr32(param_r3 + 0x13cu, 0x20u);
                }
                r0 = (u32)rd8(param_r3 + 0x126u);
                r5 = rd32(param_r3 + 0x13cu) - 1u;
                wr32(param_r3 + 0x140u, r5);
                wr32(param_r3 + 0x134u, r5);
                wr32(param_r3 + 0x158u, rd32(0x817fdfe0u));
                r4 = rd32(0x817fdfe0u);
                wr32(param_r3 + 0x14cu, r4);
                wr32(param_r3 + 0x148u, 0u);
                wr32(param_r3 + 0x154u, 0u);
                if (r0 == 0u) {
                    r6 = rd32(param_r3 + 0x160u);
                    r7 = r5 + 1u;
                    r4 = r6 - r4 + 1u;
                    r4 = r7 - r4;
                    r3 = r6 - rd32(param_r3 + 0x15cu) + 1u;
                    if ((r4 - ((u32)ppc_divw((s32)r4, (s32)r3) * r3)) == 0u) {
                        r5 = r7;
                    }
                    wr32(param_r3 + 0x144u, r5);
                } else {
                    wr32(param_r3 + 0x144u, rd32(param_r3 + 0xfcu));
                }
                wr32(param_r3 + 0x150u, rd32(param_r3 + 0x144u));
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = r3;
                if ((u32)rd8(param_r3 + 0x12bu) == 0u) {
                    r28 = param_r3;
                    r27 = 0u;
                    for (;;) {
                        if ((s32)r27 >= (s32)rd32(param_r3 + 0x82cu)) {
                            r0 = 1u;
                            break;
                        }
                        a.r[0] = rd32(param_r3 + 0x820u);
                        r3 = tc_call(0x80306ec4u, &a);
                        if (r3 == 0u) {
                            r26 = param_r3;
                            r28 = 0u;
                            while ((s32)r28 < (s32)r27) {
                                a.r[0] = rd32(param_r3 + 0x820u);
                                a.r[1] = rd32(r26 + 0x834u);
                                (void)tc_call(0x80306fa8u, &a);
                                wr32(r26 + 0x834u, 0u);
                                r26 = r26 + 0x34u;
                                r28 = r28 + 1u;
                            }
                            r0 = 0u;
                            break;
                        }
                        wr32(r28 + 0x834u, r3);
                        r28 = r28 + 0x34u;
                        r27 = r27 + 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = r30;
                        (void)tc_call(0x8022c2d8u, &a);
                        return;
                    }
                    wr8(param_r3 + 0x12bu, 1u);
                }
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
            }
        }
    }
    return;
}
