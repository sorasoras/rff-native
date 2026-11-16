#include "tc_rt.h"

void fn_802eea28(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r11 = 0, r12 = 0, r18 = 0, r19 = 0;
    u32 r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = param_3;
    for (;;) {
        wr32(r1 - 0x60u, r1);
        r1 = r1 - 0x60u;
        wr32(r1 + 0x64u, lr);
        r11 = r1 + 0x60u;
        wr32(r11 - 0x38u, r18);
        wr32(r11 - 0x34u, r19);
        wr32(r11 - 0x30u, r20);
        wr32(r11 - 0x2cu, r21);
        wr32(r11 - 0x28u, r22);
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, r24);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r25 = rd32(r5 + 4u);
        r18 = r3;
        r19 = r4;
        r20 = r5;
        r21 = r4 + 0xbcu;
        r22 = 0u;
        r28 = 0u;
        r23 = r25 + rd32(r25 + 0x10u);
        for (;;) {
            if ((r28 & 0xffffu) >= (u32)rd16(r25 + 0xeu)) {
                r28 = 0xffffu;
                break;
            }
            r3 = r25 + rd32(r23 + ((r28 << 2u) & 0x3fffcu));
            if ((u32)rd8(r3 + 0x15u) == 0u) {
                a.r[0] = r3;
                a.r[1] = r21;
                r3 = tc_call(0x802ef36cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = 0u;
                if (r3 != 0u) break;
            }
            r28 = r28 + 1u;
        }
        if ((r28 & 0xffffu) != 0xffffu) {
            r22 = 1u;
        }
        r12 = rd32(r19);
        r3 = r19;
        r12 = rd32(r12 + 0x64u);
        lr = 0x802eead0u;
        if (r12 != 0x802eea28u) {
            a.r[0] = r19;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = 0u;
            r29 = r3;
            r23 = r1 + 8u;
            r31 = r3 & 0xffu;
            r21 = 0u;
            r30 = 0x10000u;
            for (;;) {
                if ((r21 & 0xffu) >= r31) {
                    if (r22 != 0u) {
                        r6 = rd32(r20);
                        r5 = rd32(r20 + 4u);
                        r3 = 0u;
                        r4 = rd32(r20 + 8u);
                        r0 = rd32(r20 + 0xcu);
                        wr32(r18, r6);
                        wr32(r18 + 4u, r5);
                        wr32(r18 + 8u, r4);
                        wr32(r18 + 0xcu, r0);
                        wr16(r18 + 0x10u, (u16)r28);
                        wr8(r18 + 0x26u, (u8)r29);
                        if (r31 != 0u) {
                            r0 = r29 + 0xf8u;
                            if (r31 > 8u) {
                                r4 = r0 & 0xffu;
                                ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                                if (r4 > 0u) {
                                    do {
                                        r0 = (r3 << 1u) & 0x1feu;
                                        r5 = r1 + 8u + r0;
                                        r6 = r18 + r0;
                                        r3 = r3 + 8u;
                                        wr16(r6 + 0x14u, rd16(r5));
                                        r0 = (u32)rd16(r5 + 2u);
                                        r4 = (u32)rd16(r5 + 4u);
                                        wr16(r6 + 0x16u, (u16)r0);
                                        r0 = (u32)rd16(r5 + 6u);
                                        wr16(r6 + 0x18u, (u16)r4);
                                        r4 = (u32)rd16(r5 + 8u);
                                        wr16(r6 + 0x1au, (u16)r0);
                                        r0 = (u32)rd16(r5 + 0xau);
                                        wr16(r6 + 0x1cu, (u16)r4);
                                        r4 = (u32)rd16(r5 + 0xcu);
                                        wr16(r6 + 0x1eu, (u16)r0);
                                        r0 = (u32)rd16(r5 + 0xeu);
                                        wr16(r6 + 0x20u, (u16)r4);
                                        wr16(r6 + 0x22u, (u16)r0);
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                }
                            }
                            r4 = r29 & 0xffu;
                            r5 = r3 & 0xffu;
                            r6 = r1 + 8u;
                            ctr = r4 - r5;
                            if (r5 < r4) {
                                do {
                                    r4 = (r3 << 1u) & 0x1feu;
                                    r3 = r3 + 1u;
                                    r0 = (u32)rd16(r6 + r4);
                                    r4 = r18 + r4;
                                    wr16(r4 + 0x14u, (u16)r0);
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                        wr16(r18 + 0x12u, (u16)r22);
                    }
                    return;
                }
                r12 = rd32(r19);
                r3 = r19;
                r4 = r21 & 0xffu;
                r12 = rd32(r12 + 0x6cu);
                lr = 0x802eeb00u;
                if (r12 == 0x802eea28u) break;
                a.r[0] = r19;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r24 = r3 + 0x44u;
                r27 = 0u;
                r26 = r25 + rd32(r25 + 0x10u);
                for (;;) {
                    if ((r27 & 0xffffu) >= (u32)rd16(r25 + 0xeu)) {
                        r27 = 0xffffu;
                        break;
                    }
                    r3 = r25 + rd32(r26 + ((r27 << 2u) & 0x3fffcu));
                    if ((u32)rd8(r3 + 0x15u) == 1u) {
                        a.r[0] = r3;
                        a.r[1] = r24;
                        r3 = tc_call(0x802ef36cu, &a);
                        f1 = tc_lastf();
                        r5 = 0u;
                        if (r3 != 0u) break;
                    }
                    r27 = r27 + 1u;
                }
                wr16(r23 + ((r21 << 1u) & 0x1feu), (u16)r27);
                if ((r27 & 0xffffu) != 0xffffu) {
                    r22 = (r22 + 1u) & 0xffffu;
                }
                r21 = r21 + 1u;
            }
        }
    }
}
