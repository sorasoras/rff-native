#include "tc_rt.h"

void fn_8028b844(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r21 = 0;
    u32 r22 = 0, r23 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r19 = 0u;
    if ((u32)rd8(param_r4 + 0x1eu) == 2u) {
        r22 = param_r4 + param_r3;
        r16 = (param_r3 + 1u) & 0xffffu;
        r23 = (param_r3 << 2u) & 0x3fffcu;
        r21 = param_r4 + ((param_r3 << 1u) & 0x1fffeu);
        for (;;) {
            r3 = tc_call(0x8028c7a8u, &a);
            if ((r3 & 0xffffu) == 0u) break;
            r0 = (u32)rd8(r22 + 0x1au);
            r17 = 0u;
            r19 = r19 + 1u;
            c0lt = (s32)r0 < 2;
            do {
                if (r0 == 2u) {
                    r3 = (u32)rd16(r21 + 0xcu) - 1u;
                    wr16(r21 + 0xcu, (u16)r3);
                    if ((r3 & 0xffffu) != 0u) {
                        wr8(r22 + 0x17u, rd8(0x817fdfa8u));
                    } else {
                        r3 = (u32)rd8(0x817fdfa8u);
                        if ((u32)rd8(r22 + 0x14u) == 2u) {
                            r3 = (r3 << 8u) & 0xffff00u;
                            r3 = (r3 + (u32)rd8(r22 + 0x17u)) & 0xffffu;
                        }
                        wr16(r21 + 0xcu, (u16)r3);
                        wr8(r22 + 0x1au, 4u);
                    }
                } else if (!c0lt) {
                    c0lt = (s32)r0 < 4;
                    if (r0 == 4u) {
                        r3 = (u32)rd16(r21 + 0xcu) - 1u;
                        wr16(r21 + 0xcu, (u16)r3);
                        if ((r3 & 0xffffu) == 0u) {
                            wr8(r22 + 0x1au, 0u);
                        }
                    } else if (c0lt) {
                        r7 = rd32(param_r4 + r23);
                        r5 = (u32)rd16(r7 + 2u);
                        wr8(r7 + r5 + 8u, rd8(0x817fdfa8u));
                        wr16(r7 + 2u, (u16)(r5 + 1u));
                        wr16(r21 + 0xcu, (u16)((u32)rd16(r21 + 0xcu) - 1u));
                        r3 = tc_call(0x8028c7a8u, &a);
                        r4 = rd32(param_r4 + r23);
                        r19 = r19 + r3;
                        wr16(r4 + 2u, (u16)((u32)rd16(r4 + 2u) + r3));
                        r3 = (u32)rd16(r21 + 0xcu) - r3;
                        wr16(r21 + 0xcu, (u16)r3);
                        if ((r3 & 0xffffu) == 0u) {
                            if ((u32)rd8(r22 + 0x14u) == 2u) {
                                r3 = tc_call(0x802a8530u, &a);
                                if ((r3 & 0xffu) == 0u) {
                                    wr8(r22 + 0x1au, 0u);
                                    break;
                                }
                            }
                            wr8(r22 + 0x1au, 0u);
                            r17 = 1u;
                        }
                    }
                } else {
                    c0lt = (s32)r0 < 0;
                    if (r0 == 0u) {
                        if (r16 != 1u) {
                            if (r16 != 2u) {
                                if (r16 != 3u) break;
                                a.r[0] = 1u;
                                r3 = tc_call(0x8028a274u, &a);
                                f1 = tc_lastf();
                                wr32(param_r4 + r23, r3);
                                wr8(r22 + 0x14u, 3u);
                            } else {
                                a.r[0] = 3u;
                                r3 = tc_call(0x8028a274u, &a);
                                f1 = tc_lastf();
                                wr32(param_r4 + r23, r3);
                                wr8(r22 + 0x14u, 2u);
                            }
                        } else {
                            a.r[0] = 2u;
                            r3 = tc_call(0x8028a274u, &a);
                            f1 = tc_lastf();
                            wr32(param_r4 + r23, r3);
                            wr8(r22 + 0x14u, 4u);
                        }
                        r3 = rd32(param_r4 + r23);
                        if (r3 == 0u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x70000u;
                            a.r[1] = 0x80392930u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc54u, &a);
                            wr8(r22 + 0x1au, 2u);
                        } else {
                            wr16(r3 + 2u, 0u);
                            wr16(rd32(param_r4 + r23), rd16((((u32)rd8(r22 + 0x14u) << 1u) & 0xfffffffeu) - 0x7fa88cc2u));
                            wr16(rd32(param_r4 + r23) + 4u, 0u);
                            wr8(r22 + 0x1au, 1u);
                        }
                        wr16(r21 + 0xcu, (u16)rd8((u32)rd8(r22 + 0x14u) - 0x7fa88cc9u));
                    } else if (c0lt) {
                        break;
                    }
                    r6 = rd32(param_r4 + r23);
                    r4 = (u32)rd16(r6 + 2u);
                    wr8(r6 + r4 + 8u, rd8(0x817fdfa8u));
                    wr16(r6 + 2u, (u16)(r4 + 1u));
                    r3 = (u32)rd16(r21 + 0xcu) - 1u;
                    wr16(r21 + 0xcu, (u16)r3);
                    if ((r3 & 0xffffu) != 0u) {
                        wr8(r22 + 0x17u, rd8(0x817fdfa8u));
                    } else {
                        r18 = (u32)rd8(0x817fdfa8u);
                        if ((u32)rd8(r22 + 0x14u) == 2u) {
                            r18 = (((r18 << 8u) & 0xffff00u) + (u32)rd8(r22 + 0x17u)) & 0xffffu;
                            a.r[0] = rd32(param_r4 + r23);
                            r3 = tc_call(0x802a8360u, &a);
                            wr32(param_r4 + r23, r3);
                            if (r3 == 0u) {
                                wr16(r21 + 0xcu, (u16)r18);
                                if (r18 != 0u) {
                                    wr8(r22 + 0x1au, 4u);
                                    break;
                                }
                                wr8(r22 + 0x1au, 0u);
                                break;
                            }
                        }
                        wr16(r21 + 0xcu, (u16)r18);
                        a.r[0] = rd32(param_r4 + r23);
                        r3 = tc_call(0x8028a4ccu, &a);
                        if ((r18 + (u32)rd8((u32)rd8(r22 + 0x14u) - 0x7fa88cc9u) + 8u) <= (r3 & 0xffffu)) {
                            if (r18 == 0u) {
                                wr8(r22 + 0x1au, 0u);
                                r17 = 1u;
                            } else {
                                wr8(r22 + 0x1au, 3u);
                            }
                        } else {
                            a.r[0] = rd32(param_r4 + r23);
                            f1 = tc_callf(0x8028a35cu, &a);
                            wr32(param_r4 + r23, 0u);
                            wr8(r22 + 0x1au, 4u);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x70000u;
                            a.r[1] = 0x8039296cu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                    }
                }
            } while (0);
            if (r17 != 0u) {
                a.r[0] = (u32)rd8(0x80539ba7u);
                a.r[1] = 0u;
                a.r[2] = rd32(param_r4 + r23);
                (void)tc_call(0x8028a510u, &a);
                wr32(param_r4 + r23, 0u);
            }
        }
    }
    return;
}
