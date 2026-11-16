#include "tc_rt.h"

void fn_802740cc(u32 param_r3)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0;
    TcArgs a = {0};
    if (param_r3 < rd32(0x80571abcu)) {
        r4 = rd32(0x80571ac0u);
        if (r4 != 0u) {
            r28 = r4 - 0x7fafc6e0u;
            r30 = (u32)rd16(r28 + (((0u - param_r3) << 1u) & 0xfffffffeu));
            if (r30 != 0u) {
                r0 = rd32(0x80571ab8u);
                if (r0 != 0u) {
                    r27 = r30 - 0x7fafc6e0u;
                    r0 = (r0 << 1u) & 0xfffffffeu;
                    r5 = (u32)rd16(r30 - 0x7fafc6e0u);
                    r24 = r0 - 0x7fafc6dau;
                    r6 = (u32)rd16(r27 + 2u) - r5;
                    r26 = (u32)rd16(r24);
                    r5 = r5 - (r30 + 2u);
                    r29 = r6 + 2u;
                    a.r[0] = r27;
                    a.r[1] = r27 + 2u;
                    a.r[2] = r5;
                    (void)tc_call(0x802591b4u, &a);
                    r4 = r24 - 2u;
                    ctr = ((r4 + 0x7fafc6dcu) >> 1u) & 0x7fffffffu;
                    if (r4 >= 0x80503926u) {
                        do {
                            if (r4 < r27) {
                                wr16(r4, (u16)((u32)rd16(r4) - 2u));
                            } else {
                                wr16(r4, (u16)((u32)rd16(r4) - r29));
                            }
                            r4 = r4 - 2u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                    r5 = (u32)rd16(r27);
                    r3 = r5 - 0x7fafc6e0u;
                    r4 = r5 + (r29 - 0x7fafc6e0u);
                    r5 = r26 - (r5 + r29);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    (void)tc_call(0x802591b4u, &a);
                    a.r[0] = r26 - r29 - 0x7fafc6e0u;
                    a.r[1] = 0u;
                    a.r[2] = r29;
                    (void)tc_call(0x8000443cu, &a);
                    r0 = rd32(0x80571abcu);
                    r6 = 0u;
                    ctr = r0;
                    if (r0 > 0u) {
                        do {
                            r5 = ((0u - r6) << 1u) & 0xfffffffeu;
                            r4 = (u32)rd16(r28 + r5);
                            c0gt = r4 > r30;
                            if (r4 >= r30) {
                                if (c0gt) {
                                    wr16(r28 + r5, (u16)(r4 - 2u));
                                } else {
                                    wr16(r28 + r5, 0u);
                                }
                            }
                            r6 = r6 + 1u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                    r3 = rd32(0x80571ab8u);
                    r4 = rd32(0x80571ab4u) + r29;
                    wr8(0x80571ac5u, 1u);
                    r0 = r3 - 1u;
                    wr32(0x80571ab4u, r4);
                    wr32(0x80571ab8u, r0);
                    wr16(0x80503924u, (u16)r0);
                }
            }
        }
    }
    return;
}
