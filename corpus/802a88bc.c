#include "tc_rt.h"

void fn_802a88bc(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r24 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = 0u;
    r31 = param_r3 + (u32)rd16(param_r3 + 4u);
    r0 = (u32)rd8(r31 + 8u) + (((u32)rd8(r31 + 9u) << 8u) & 0xffffff00u);
    r5 = (r0 >> 0xcu) & 3u;
    r26 = r0 & 0xfffu;
    if (r5 == 2u) {
        a.r[0] = r26;
        r3 = tc_call(0x802a9a34u, &a);
        f1 = tc_lastf();
        r29 = r3;
        if (r3 != 0u) {
            r6 = (u32)rd8(r31 + 0xau);
            r4 = ((u32)rd8(r31 + 0xbu) << 8u) & 0xffffff00u;
            wr16(param_r3 + 4u, (u16)((u32)rd16(param_r3 + 4u) + 4u));
            r25 = (r6 + r4) & 0xffffu;
            r5 = (u32)rd8(r31 + 0xdu);
            r26 = ((u32)rd8(r31 + 0xeu) + (((u32)rd8(r31 + 0xfu) << 8u) & 0xffffff00u)) & 0xffffu;
            r24 = ((u32)rd8(r31 + 0xcu) + ((r5 << 8u) & 0xffffff00u)) & 0xffffu;
            if (r26 > 2u) {
                a.r[0] = r3;
                a.r[1] = r26;
                r3 = tc_call(0x802aae88u, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r6 = 0u;
                r28 = r3;
                if (r3 == 0u) {
                    if ((u32)rd8(0x80540a20u) >= 2u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80001u;
                        a.r[1] = 0x80396860u;
                        a.r[2] = r26;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc6cu, &a);
                    }
                    a.r[0] = param_r3;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                }
            }
            if (r25 < 4u) {
                if ((u32)rd8(0x80540a20u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80001u;
                    a.r[1] = 0x80396878u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                a.r[0] = param_r3;
                (void)tc_call(0x8028a35cu, &a);
            } else {
                r3 = (u32)rd16(param_r3 + 4u);
                r4 = r25 - 4u;
                wr16(param_r3 + 2u, (u16)r4);
                r0 = r3 + 4u;
                wr16(param_r3 + 4u, (u16)r0);
                r6 = r4 & 0xffffu;
                if (r24 == r6) {
                    if (r26 != 1u) {
                        if (r26 != 2u) {
                            if (r28 != 0u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = r28;
                                a.r[1] = 0x13u;
                                a.r[2] = param_r3;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x802a6140u, &a);
                            } else {
                                a.r[0] = param_r3;
                                (void)tc_call(0x8028a35cu, &a);
                            }
                        } else {
                            r5 = (u32)rd8(r31 + 0x10u);
                            r4 = ((u32)rd8(r31 + 0x11u) << 8u) & 0xffffff00u;
                            wr16(param_r3 + 4u, (u16)((r0 & 0xffffu) + 2u));
                            r4 = r5 + r4;
                            wr16(param_r3 + 2u, (u16)(r6 - 2u));
                            r5 = r4 & 0xffffu;
                            if ((u32)rd8(0x80540a20u) >= 5u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 0x80004u;
                                a.r[1] = 0x803968c8u;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x8028cc6cu, &a);
                            }
                            a.r[0] = param_r3;
                            (void)tc_call(0x8028a35cu, &a);
                        }
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r29;
                        a.r[1] = r31 + 0x10u;
                        a.r[2] = r24;
                        a.r[3] = r6;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802a8becu, &a);
                        a.r[0] = param_r3;
                        (void)tc_call(0x8028a35cu, &a);
                    }
                } else {
                    if ((u32)rd8(0x80540a20u) >= 2u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80001u;
                        a.r[1] = 0x8039689cu;
                        a.r[2] = r24;
                        a.r[3] = r6;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc84u, &a);
                    }
                    a.r[0] = param_r3;
                    (void)tc_call(0x8028a35cu, &a);
                }
            }
        } else {
            r28 = (u32)rd8(r31 + 0x10u);
            r24 = ((u32)rd8(r31 + 0xeu) + (((u32)rd8(r31 + 0xfu) << 8u) & 0xffffff00u)) & 0xffffu;
            if ((u32)rd16(param_r3 + 6u) == 0u && r24 == 1u && (r28 == 0xau || r28 == 2u)) {
                a.r[0] = r26;
                r3 = tc_call(0x8029c1fcu, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) {
                    if ((u32)rd8(0x80540a20u) >= 2u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80001u;
                        a.r[1] = 0x8039680cu;
                        a.r[2] = r26;
                        a.r[3] = (u32)rd16(param_r3 + 6u);
                        a.r[4] = r24;
                        a.r[5] = r28;
                        a.r[6] = (u32)rd16(0x805411e8u);
                        a.r[7] = 0u;
                        (void)tc_call(0x8028ccccu, &a);
                    }
                    wr16(param_r3 + 6u, 2u);
                    a.r[0] = 0x805411e0u;
                    a.r[1] = param_r3;
                    (void)tc_call(0x8028a77cu, &a);
                    if ((u32)rd16(0x805411e8u) != 1u) {
                        return;
                    }
                    a.r[0] = 0x805411ecu;
                    a.r[1] = 4u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8028d220u, &a);
                    return;
                }
            }
            a.r[0] = param_r3;
            (void)tc_call(0x8028a35cu, &a);
        }
    } else {
        if ((u32)rd8(0x80540a20u) >= 2u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x80001u;
            a.r[1] = 0x803967e8u;
            a.r[2] = r5;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
        a.r[0] = param_r3;
        (void)tc_call(0x8028a35cu, &a);
    }
    return;
}
