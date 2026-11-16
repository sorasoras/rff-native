#include "tc_rt.h"

void fn_802ddbc0(void)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32(0x805480e8u);
    if (rd32(0x805480ecu) != 0u) {
        while (r30 != 0u) {
            if ((rd32(r30 + 4u) - 1u) <= 1u) {
                r31 = r30 + 0x241cu;
                r29 = 0u;
                while (r29 < (u32)rd16(r30 + 8u)) {
                    if ((rd32(r31 + 0x24u) - 1u) <= 1u) {
                        r28 = rd32(r31 + 0x1cu);
                        r0 = rd32(r31 + 0x20u);
                        if (r0 <= r28) {
                            for (;;) {
                                r0 = rd32(r31 + 0x20u);
                                if (r28 < r0) break;
                                r28 = r28 - r0;
                                a.r[0] = r30 + 0x14u;
                                a.r[1] = r31;
                                (void)tc_call(0x802dd6f4u, &a);
                                if (rd32(r31 + 0x24u) == 0u) break;
                                r4 = (u32)rd8(rd32(r31 + 0xcu));
                                r5 = r4 & 0x7fu;
                                while ((r4 & 0x80u) != 0u) {
                                    r4 = rd32(r31 + 0xcu) + 1u;
                                    wr32(r31 + 0xcu, r4);
                                    r4 = (u32)rd8(r4);
                                    r5 = ((r5 << 7u) & 0xffffff80u) + (r4 & 0x7fu);
                                }
                                wr32(r31 + 0xcu, rd32(r31 + 0xcu) + 1u);
                                wr32(r31 + 0x20u, (r5 << 0x10u) & 0xffff0000u);
                            }
                            wr32(r31 + 0x20u, rd32(r31 + 0x20u) - r28);
                        } else {
                            r0 = r0 - r28;
                            wr32(r31 + 0x20u, r0);
                        }
                    }
                    r31 = r31 + 0x28u;
                    r29 = r29 + 1u;
                }
            }
            if (rd32(r30 + 0x10u) != 0u) {
                if (rd32(r30 + 4u) != 2u) {
                    a.r[0] = r30;
                    a.r[1] = 0u;
                    (void)tc_call(0x802dde6cu, &a);
                } else {
                    a.r[0] = r30;
                    a.r[1] = 0u;
                    (void)tc_call(0x802dde6cu, &a);
                    a.r[0] = r30;
                    a.r[1] = 2u;
                    (void)tc_call(0x802dde6cu, &a);
                }
            }
            r30 = rd32(r30);
        }
    }
    return;
}
