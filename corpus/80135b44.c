#include "tc_rt.h"

s32 fn_80135b44(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r21 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdad0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80131738u, &a);
    r30 = r3;
    r5 = 0u;
    r28 = 0u;
    r4 = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x45cu);
    if (rd32(r4 + 0x110u) != 0u) {
        r0 = rd32(r4 + 0x114u);
        if ((s32)r0 >= 0) {
            r0 = r0 * 0x24u;
            r4 = rd32(r4 + 0x10cu);
            r28 = r4 + r0;
        }
    } else {
        r28 = 0u;
    }
    if (rd32(r28 + 0xcu) != 0x2e8u) {
        r5 = 1u;
    }
    if (rd32(r28 + 0x10u) != 0x2e8u) {
        r5 = r5 + 1u;
    }
    if (rd32(r28 + 0x14u) != 0x2e8u) {
        r5 = r5 + 1u;
    }
    if (rd32(r28 + 0x18u) != 0x2e8u) {
        r5 = r5 + 1u;
    }
    if (rd32(r28 + 0x1cu) != 0x2e8u) {
        r5 = r5 + 1u;
    }
    if (rd32(r28 + 0x20u) != 0x2e8u) {
        r5 = r5 + 1u;
    }
    if ((s32)r3 >= (s32)r5) {
        a.r[0] = 0x817fdaf0u;
        (void)tc_call(0x8016172cu, &a);
        a.r[0] = 0x817fdbc0u;
        (void)tc_call(0x8016172cu, &a);
        a.r[0] = 0x817fdc90u;
        (void)tc_call(0x8016172cu, &a);
        a.r[0] = 0x817fdd60u;
        (void)tc_call(0x8016172cu, &a);
        a.r[0] = 0x817fde30u;
        (void)tc_call(0x8016172cu, &a);
        a.r[0] = 0x817fdf00u;
        (void)tc_call(0x8016172cu, &a);
        r29 = 0x817fdad8u;
        r27 = 0x817fdaf0u;
        r25 = 0u;
        while ((s32)r25 < (s32)r30) {
            r24 = rd32(r28 + 0xcu);
            wr32(r29, 0u);
            if (r24 != 0x2e8u) {
                r23 = 0u;
                r26 = 0u;
                for (;;) {
                    r3 = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x454u);
                    if ((s32)r23 >= (s32)rd32(r3 + 0xcu)) break;
                    r3 = rd32(r3 + 0x2cu);
                    r21 = rd32(r3 + r26);
                    if (r24 == (u32)rd16(r21 + 0xbcu)) {
                        if ((u32)rd16(r27 + 0xbcu) != 0x2e8u) {
                            if ((s32)rd8(r27 + 0xbfu) < (s32)rd8(r21 + 0xbfu)) {
                                a.r[0] = rd32(r29);
                                a.r[1] = r27;
                                a.r[2] = 0xffffffffu;
                                (void)tc_call(0x801621e4u, &a);
                                a.r[0] = r27;
                                a.r[1] = r21;
                                a.r[2] = 1u;
                                (void)tc_call(0x801621e4u, &a);
                                wr32(r29, r21);
                            }
                        } else {
                            a.r[0] = r27;
                            a.r[1] = r21;
                            a.r[2] = 1u;
                            (void)tc_call(0x801621e4u, &a);
                            wr32(r29, r21);
                        }
                    }
                    r26 = r26 + 4u;
                    r23 = r23 + 1u;
                }
                r23 = 0u;
                r26 = 0u;
                do {
                    r21 = rd32(rd32(rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u) + 0x2cu) + r26);
                    if (r24 == (u32)rd16(r21 + 0xbcu)) {
                        if ((u32)rd16(r27 + 0xbcu) != 0x2e8u) {
                            if ((s32)rd8(r27 + 0xbfu) < (s32)rd8(r21 + 0xbfu)) {
                                a.r[0] = rd32(r29);
                                a.r[1] = r27;
                                a.r[2] = 0xffffffffu;
                                (void)tc_call(0x801621e4u, &a);
                                a.r[0] = r27;
                                a.r[1] = r21;
                                a.r[2] = 1u;
                                (void)tc_call(0x801621e4u, &a);
                                wr32(r29, r21);
                            }
                        } else {
                            a.r[0] = r27;
                            a.r[1] = r21;
                            a.r[2] = 1u;
                            (void)tc_call(0x801621e4u, &a);
                            wr32(r29, r21);
                        }
                    }
                    r23 = r23 + 1u;
                    r26 = r26 + 4u;
                } while ((s32)r23 < 6);
            }
            r29 = r29 + 4u;
            r28 = r28 + 4u;
            r27 = r27 + 0xd0u;
            r25 = r25 + 1u;
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 0u;
        r3 = tc_call(0x801317b8u, &a);
        r23 = r3;
        if (r3 != 0u) {
            r24 = 0u;
            r31 = 0u;
            do {
                r30 = rd32(rd32(rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u) + 0x2cu) + r31);
                if ((u32)rd16(r30 + 0xbcu) != 0x2e8u) {
                    r27 = 0u;
                    r21 = 0u;
                    for (;;) {
                        r3 = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x454u);
                        if ((s32)r27 >= (s32)rd32(r3 + 0xcu)) break;
                        r3 = rd32(r3 + 0x2cu);
                        r3 = rd32(r3 + r21);
                        if ((u32)rd16(r3 + 0xbcu) != 0x2e8u) {
                            a.r[0] = r3;
                            a.r[1] = r30;
                            a.r[2] = 0xffffffffu;
                            r3 = tc_call(0x801621e4u, &a);
                            if (r3 != 0u && (u32)rd16(r30 + 0xbcu) == 0x2e8u) {
                                a.r[0] = r30;
                                (void)tc_call(0x80161ac4u, &a);
                                wr16(r30 + 0xbcu, 0x2e8u);
                                wr8(r30 + 0xbeu, 0u);
                                wr8(r30 + 0xbfu, 0u);
                                break;
                            }
                        }
                        r21 = r21 + 4u;
                        r27 = r27 + 1u;
                    }
                    if ((u32)rd16(r30 + 0xbcu) != 0x2e8u) {
                        r27 = 0u;
                        r21 = 0u;
                        for (;;) {
                            r3 = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x454u);
                            if ((s32)r27 >= (s32)rd32(r3 + 0xcu)) break;
                            r3 = rd32(r3 + 0x2cu);
                            r3 = rd32(r3 + r21);
                            a.r[0] = r3;
                            a.r[1] = r30;
                            a.r[2] = 0xffffffffu;
                            r3 = tc_call(0x801621e4u, &a);
                            if (r3 != 0u && (u32)rd16(r30 + 0xbcu) == 0x2e8u) {
                                a.r[0] = r30;
                                (void)tc_call(0x80161ac4u, &a);
                                wr16(r30 + 0xbcu, 0x2e8u);
                                wr8(r30 + 0xbeu, 0u);
                                wr8(r30 + 0xbfu, 0u);
                                break;
                            }
                            r21 = r21 + 4u;
                            r27 = r27 + 1u;
                        }
                    }
                }
                r24 = r24 + 1u;
                r31 = r31 + 4u;
            } while ((s32)r24 < 6);
            r26 = 0x817fdaf0u;
            r27 = 0u;
            r21 = 0u;
            do {
                r3 = rd32(rd32(rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u) + 0x2cu) + r21);
                wr32(rd32(0x80571398u) + r21 + 0x104u, (u32)rd16(r26 + 0xbcu));
                a.r[0] = r3;
                a.r[1] = r26;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801621e4u, &a);
                a.r[0] = r26;
                (void)tc_call(0x80161ac4u, &a);
                wr16(r26 + 0xbcu, 0x2e8u);
                r27 = r27 + 1u;
                r21 = r21 + 4u;
                wr8(r26 + 0xbeu, 0u);
                wr8(r26 + 0xbfu, 0u);
                r26 = r26 + 0xd0u;
            } while ((s32)r27 < 6);
        }
        a.r[0] = 0x817fdf00u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        a.r[0] = 0x817fde30u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        a.r[0] = 0x817fdd60u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        a.r[0] = 0x817fdc90u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        a.r[0] = 0x817fdbc0u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        a.r[0] = 0x817fdaf0u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        r3 = r23;
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
