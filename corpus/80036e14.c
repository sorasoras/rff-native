#include "tc_rt.h"

void fn_80036e14(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = rd32(0x803a4bacu);
    r31 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    if (r29 != 0u) {
        if ((((u32)rd16(r29 + 0x22u) >> 0xfu) & 1u) != 0u) {
            r28 = 0u;
            wr32(0x803a4bb8u, 0u);
            r27 = 0u;
            while ((s32)r28 < (s32)rd32(r29 + 8u)) {
                r26 = rd32(r29 + 4u) + r27;
                if (rd32(r26 + 4u) == 0u) {
                    a.r[0] = r26;
                    r3 = tc_call(0x800371f4u, &a);
                    wr32(0x803a4bb8u, rd32(0x803a4bb8u) + r3);
                } else {
                    r3 = tc_call(0x800369d0u, &a);
                    f1 = tc_lastf();
                    wr32(r26 + 0x30u, r3);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32(r26 + 4u);
                    a.r[1] = r3;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802348dcu, &a);
                    if (r3 != 0u) {
                        a.r[0] = r26;
                        r3 = tc_call(0x800371f4u, &a);
                        wr32(0x803a4bb8u, rd32(0x803a4bb8u) + r3);
                        a.r[0] = rd32(r26 + 0x30u);
                        (void)tc_call(0x80234b88u, &a);
                    }
                    a.r[0] = r26;
                    (void)tc_call(0x80036a0cu, &a);
                }
                r27 = r27 + 0x34u;
                r28 = r28 + 1u;
            }
            a.r[0] = r29;
            (void)tc_call(0x800373f0u, &a);
            wr16(r29 + 0x22u, (u16)((u32)rd16(r29 + 0x22u) & 0xffff7fffu));
        }
        if ((((u32)rd8(0x803acbccu) >> 5u) & 1u) != 0u) {
            r28 = rd32(r29 + 0x18u);
            a.r[0] = rd32(r29 + 0xcu);
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            r3 = tc_call(0x80036aa4u, &a);
            r27 = r3;
            r0 = rd32(0x803acbd0u);
            r3 = 1u;
            c0lt = (s32)r0 < 32;
            if (r0 == 0x20u) {
                r3 = 0u;
                if ((s32)rd32(0x803acbd8u) > 0 || (u32)rd8(0x803acbedu) != 0u) {
                    r3 = 1u;
                }
                r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
            } else if (!c0lt) {
                if (r0 == 0x30u) {
                    r3 = 0u;
                    if ((s32)rd32(0x803acbd8u) > 0 || (u32)rd8(0x803acbdfu) != 0u) {
                        r3 = 1u;
                    }
                    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                }
            } else if (r0 == 0x10u) {
                r3 = 0u;
                if ((s32)rd32(0x803acbd8u) > 0 || (u32)rd8(0x803acbe0u) != 0u) {
                    r3 = 1u;
                }
                r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
            }
            if (r3 != 0u) {
                a.r[0] = 0u;
                (void)tc_call(0x80037258u, &a);
            } else {
                a.r[0] = r27;
                r3 = tc_call(0x802390f4u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    wr32((((u32)rd8(0x803acbccu) >> 4u) & 4u) - 0x7fc53440u, (r28 - rd32(0x803acbc8u) + 0x1fu) & 0xffffffe0u);
                    r3 = (((u32)rd8(0x803acbccu) >> 4u) & 4u) - 0x7fc4c160u;
                    if (rd32(r3 - 0x72e0u) > 0x4000u) {
                        wr32(r3 - 0x72e0u, 0x4000u);
                    }
                    r3 = (u32)rd8(0x803acbccu);
                    r6 = (r3 >> 6u) & 1u;
                    r3 = ((r3 >> 4u) & 4u) - 0x7fc4c160u;
                    r5 = rd32(r3 - 0x72e0u);
                    if (r5 != 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r27;
                        a.r[1] = ((r6 << 0xeu) & 0x3fc000u) - 0x7fc5b440u;
                        a.r[2] = r5;
                        a.r[3] = rd32(r29 + 0x1cu) + rd32(0x803acbc8u);
                        a.r[4] = 0u;
                        a.r[5] = 2u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x80234db8u, &a);
                        wr32(0x803acbc8u, rd32(0x803acbc8u) + rd32((((u32)rd8(0x803acbccu) >> 4u) & 4u) - 0x7fc53440u));
                    }
                    r4 = (u32)rd8(0x803acbccu);
                    r6 = (r4 >> 7u) & 1u;
                    r4 = ((r4 >> 5u) & 4u) - 0x7fc4c160u;
                    r5 = rd32(r4 - 0x72e0u);
                    if (r5 != 0u) {
                        r0 = rd32(0x803acbd0u);
                        c0lt = (s32)r0 < 32;
                        if (r0 == 0x20u) {
                            a.r[0] = 0x803acbd4u;
                            a.r[1] = ((r6 << 0xeu) & 0x3fc000u) - 0x7fc5b440u;
                            a.r[2] = r5;
                            (void)tc_call(0x8008cf14u, &a);
                        } else if (!c0lt) {
                            if (r0 == 0x30u) {
                                a.r[0] = 0x803acbd4u;
                                a.r[1] = ((r6 << 0xeu) & 0x3fc000u) - 0x7fc5b440u;
                                a.r[2] = r5;
                                (void)tc_call(0x8008cb28u, &a);
                            }
                        } else if (r0 == 0x10u) {
                            a.r[0] = 0x803acbd4u;
                            a.r[1] = ((r6 << 0xeu) & 0x3fc000u) - 0x7fc5b440u;
                            a.r[2] = r5;
                            (void)tc_call(0x8008ccf8u, &a);
                        }
                        r3 = (u32)rd8(0x803acbccu);
                        r3 = (r3 & 0xffffff7fu) | (((1u - ((r3 >> 7u) & 1u)) << 7u) & 0x80u);
                        r3 = (r3 & 0xffffffbfu) | (((1u - ((r3 >> 6u) & 1u)) << 6u) & 0x40u);
                        wr8(0x803acbccu, (u8)r3);
                    }
                }
            }
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
