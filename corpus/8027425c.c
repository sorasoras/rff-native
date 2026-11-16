#include "tc_rt.h"

void fn_8027425c(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r22 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0;
    TcArgs a = {0};
    r24 = param_2;
    r26 = param_4;
    r7 = 0x8038f7f8u;
    r29 = 1u;
    if (param_1 < rd32(0x80571abcu) && (u32)param_3 != 0u && rd32(0x80571ab8u) < 0xffffu && rd32(0x80571ac0u) != 0u) {
        c0lt = (s32)param_2 < 160;
        if (param_2 == 0xa0u) {
            r26 = 4u;
        } else if (!c0lt) {
            c0lt = (s32)param_2 < 224;
            if (param_2 == 0xe0u) {
                r26 = 1u;
            } else {
                if (!c0lt) {
                    return;
                }
                if (param_2 != 0xc0u) {
                    return;
                }
                r26 = 8u;
            }
        } else {
            c0lt = (s32)param_2 < 96;
            if (param_2 == 0x60u) {
                r26 = 1u;
            } else if (!c0lt) {
                if (param_2 != 0x80u) {
                    return;
                }
                r26 = 2u;
            } else {
                if (param_2 != 0x40u) {
                    return;
                }
                if (param_4 == 0u || param_4 > 0x10000u) {
                    return;
                }
                if (param_4 <= 0x100u) {
                    r29 = 2u;
                } else {
                    r24 = 0x20u;
                    r29 = 3u;
                }
            }
        }
        r29 = r29 + r26;
        for (;;) {
            r28 = rd32(r7);
            if (r28 == 0u || rd32(r7 + 4u) == param_1) break;
            r7 = r7 + 8u;
        }
        if (r28 != 0u) {
            a.r[0] = r28;
            r3 = tc_call(0x802550d4u, &a);
            r30 = r3;
            if (r3 <= 0x20u) {
                r29 = r29 + r3;
                if (rd32(0x80571ab4u) >= (r29 + 2u)) {
                    r22 = 0x80503926u;
                    r0 = (u32)rd16(0x80503926u);
                    r3 = (rd32(0x80571ab8u) << 1u) & 0xfffffffeu;
                    r4 = r0 - 0x7fafc6e0u;
                    r27 = r3 - 0x7fafc6dau;
                    a.r[0] = r4 + 2u;
                    a.r[1] = r4;
                    a.r[2] = (u32)rd16(r3 - 0x7fafc6dau) - r0;
                    (void)tc_call(0x802591b4u, &a);
                    do {
                        wr16(r22, (u16)((u32)rd16(r22) + 2u));
                        r22 = r22 + 2u;
                    } while (r22 <= r27);
                    r4 = r28;
                    r28 = (u32)rd16(r27) - 0x7fafc6e0u;
                    wr8(r28, (u8)(r24 | (r30 - 1u)));
                    a.r[0] = r28 + 1u;
                    a.r[1] = r4;
                    a.r[2] = r30;
                    (void)tc_call(0x80004338u, &a);
                    r28 = r30 + r28 + 1u;
                    if (r24 != 0x40u) {
                        if (r24 == 0x20u) {
                            r3 = r26 - 1u;
                            wr8(r28, (u8)((r3 >> 8u) & 0xffu));
                            wr8(r28 + 1u, (u8)r3);
                            r28 = r28 + 2u;
                        }
                    } else {
                        wr8(r28, (u8)(r26 - 1u));
                        r28 = r28 + 1u;
                    }
                    a.r[0] = r28;
                    a.r[1] = (u32)param_3;
                    a.r[2] = r26;
                    (void)tc_call(0x80004338u, &a);
                    r7 = rd32(0x80571ac0u) - 0x7fafc6e0u;
                    r3 = rd32(0x80571ab8u);
                    wr8(0x80571ac5u, 1u);
                    r4 = r3 + 1u;
                    wr16(r7 + (((0u - param_1) << 1u) & 0xfffffffeu), (u16)(r27 + 0x7fafc6e0u));
                    r7 = (u32)rd16(r27);
                    r5 = rd32(0x80571ab4u) - (r29 + 2u);
                    wr32(0x80571ab8u, r4);
                    wr16(r27 + 2u, (u16)(r7 + r29));
                    wr32(0x80571ab4u, r5);
                    wr16(0x80503924u, (u16)r4);
                }
            }
        }
    }
    return;
}
