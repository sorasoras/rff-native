#include "tc_rt.h"

void fn_802c1118(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = rd32(0x80547470u);
    if (r29 != 0u) {
        r28 = 0u;
        do {
            if (rd32(r29 + 0x50u) != 0u) {
                a.r[0] = r28;
                r3 = tc_call(0x8027b068u, &a);
                if (r3 != 0u) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r27 = r3;
                    a.r[0] = r28;
                    r3 = tc_call(0x8027c884u, &a);
                    if (r3 == 0u) {
                        r3 = (u32)rd8(r29 + 0x5eu) + 1u;
                        wr8(r29 + 0x5eu, (u8)r3);
                        if ((s32)(s8)(r3 & 0xffu) > 60) {
                            wr32(r29 + 0x50u, 0u);
                        }
                    } else {
                        r7 = 0x817fdf90u;
                        r5 = 0x28u;
                        r9 = (rd32(r29 + 0x54u) >> 1u) & 0x7fffffffu;
                        r6 = rd32(r29 + 0x50u);
                        r8 = (u32)(s8)rd8(r29 + 0x5du);
                        if (r9 <= 0x28u) {
                            r5 = r9;
                        }
                        do {
                            if (r5 > 0u) {
                                r0 = (r5 >> 2u) & 0x3fffffffu;
                                ctr = r0;
                                if (r0 != 0u) {
                                    do {
                                        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)((u32)(s16)rd16(r6) * r8)) >> 2);
                                        r0 = r0 + ((r0 >> 0x1fu) & 1u);
                                        wr16(r7, (u16)r0);
                                        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)((u32)(s16)rd16(r6 + 2u) * r8)) >> 2);
                                        r0 = r0 + ((r0 >> 0x1fu) & 1u);
                                        wr16(r7 + 2u, (u16)r0);
                                        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)((u32)(s16)rd16(r6 + 4u) * r8)) >> 2);
                                        r0 = r0 + ((r0 >> 0x1fu) & 1u);
                                        wr16(r7 + 4u, (u16)r0);
                                        r0 = (u32)(s16)rd16(r6 + 6u);
                                        r6 = r6 + 8u;
                                        r0 = r0 * r8;
                                        r0 = ppc_mulhw(1717986919, (s32)r0);
                                        r0 = (u32)((s32)r0 >> 2);
                                        r0 = r0 + ((r0 >> 0x1fu) & 1u);
                                        wr16(r7 + 6u, (u16)r0);
                                        r7 = r7 + 8u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                    r5 = r5 & 3u;
                                    if (r5 == 0u) break;
                                }
                                ctr = r5;
                                do {
                                    r0 = (u32)(s16)rd16(r6);
                                    r6 = r6 + 2u;
                                    r0 = r0 * r8;
                                    r0 = ppc_mulhw(1717986919, (s32)r0);
                                    r0 = (u32)((s32)r0 >> 2);
                                    r0 = r0 + ((r0 >> 0x1fu) & 1u);
                                    wr16(r7, (u16)r0);
                                    r7 = r7 + 2u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        } while (0);
                        do {
                            if (r9 <= 0x28u) {
                                r3 = 0x28u - r9;
                                if (r3 > 0u) {
                                    r0 = (r3 >> 3u) & 0x1fffffffu;
                                    ctr = r0;
                                    if (r0 != 0u) {
                                        do {
                                            wr16(r7, 0u);
                                            wr16(r7 + 2u, 0u);
                                            wr16(r7 + 4u, 0u);
                                            wr16(r7 + 6u, 0u);
                                            wr16(r7 + 8u, 0u);
                                            wr16(r7 + 0xau, 0u);
                                            wr16(r7 + 0xcu, 0u);
                                            wr16(r7 + 0xeu, 0u);
                                            r7 = r7 + 0x10u;
                                            ctr = ctr - 1u;
                                        } while (ctr != 0u);
                                        r3 = r3 & 7u;
                                        if (r3 == 0u) break;
                                    }
                                    ctr = r3;
                                    do {
                                        wr16(r7, 0u);
                                        r7 = r7 + 2u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                }
                            }
                        } while (0);
                        a.r[0] = r29 + 0x30u;
                        a.r[1] = (ppc_cntlzw((u32)rd8(r29 + 0x5cu)) >> 5u) & 0x7ffffffu;
                        a.r[2] = 0x817fdf90u;
                        a.r[3] = 0x28u;
                        a.r[4] = 0x817fdf78u;
                        (void)tc_call(0x8027569cu, &a);
                        a.r[0] = r28;
                        a.r[1] = 0x817fdf78u;
                        a.r[2] = 0x14u;
                        (void)tc_call(0x8027c908u, &a);
                        wr8(r29 + 0x5cu, 0u);
                        wr8(r29 + 0x5eu, 0u);
                        wr32(r29 + 0x50u, rd32(r29 + 0x50u) + 0x50u);
                        r0 = rd32(r29 + 0x54u) - 0x50u;
                        wr32(r29 + 0x54u, r0);
                        if ((s32)r0 <= 0) {
                            wr32(r29 + 0x58u, 0xffffffffu);
                            wr32(r29 + 0x50u, 0u);
                        }
                    }
                    a.r[0] = r27;
                    (void)tc_call(0x8022c2d8u, &a);
                }
            }
            r28 = r28 + 1u;
            r29 = r29 + 0x68u;
        } while ((s32)r28 < 4);
    }
    return;
}
