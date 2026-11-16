#include "tc_rt.h"

void fn_80310d98(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fcfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((param_r4 & 1u) == 0u) {
        if ((rd32(param_r3 + 0x50u) & 1u) == 0u) {
            if ((param_r4 & 2u) == 0u) {
                r29 = 0u;
                for (;;) {
                    a.r[0] = param_r3 + 0x24u;
                    a.r[1] = r29;
                    r3 = tc_call(0x802de9f0u, &a);
                    r29 = r3;
                    if (r3 == 0u) break;
                    if ((rd32(r3 + 0xcu) - 1u) <= 1u && rd32(r3 + 0xb4u) == 1u) {
                        wr32(r3 + 0xb4u, 0u);
                    }
                    r31 = 0u;
                    wrf32d(r3 + 0x114u, (f64)rdf32(r3 + 0x108u));
                    wrf32d(r3 + 0x118u, (f64)rdf32(r3 + 0x10cu));
                    wrf32d(r3 + 0x11cu, (f64)rdf32(r3 + 0x110u));
                    for (;;) {
                        a.r[0] = r29 + 0xc0u;
                        a.r[1] = r31;
                        r3 = tc_call(0x802de9f0u, &a);
                        r31 = r3;
                        if (r3 == 0u) break;
                        r3 = r3;
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x8031f084u, &a);
                    }
                }
            }
            wr32(param_r3 + 0x50u, rd32(param_r3 + 0x50u) | 0x10000u);
            while ((rd32(param_r3 + 0x50u) & 0x10000u) != 0u) {
                wr32(param_r3 + 0x50u, rd32(param_r3 + 0x50u) & 0xfffeffffu);
                for (;;) {
                    a.r[0] = param_r3 + 0x24u;
                    a.r[1] = 0x817fcfe8u;
                    a.r[2] = (u32)rd16(param_r3 + 0x2cu);
                    r3 = tc_call(0x803200acu, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r28 = r3 & 0xffffu;
                    r27 = 0u;
                    while ((r27 & 0xffffu) < r28) {
                        r3 = rd32(((r27 << 2u) & 0x3fffcu) - 0x7e803018u);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(rd32(rd32(r3 + 0x1cu) + 0x18u), &a);
                        r4 = tc_lastr4();
                        r27 = r27 + 1u;
                    }
                    r27 = 0u;
                    for (;;) {
                        a.r[0] = param_r3 + 0x24u;
                        a.r[1] = r27;
                        r3 = tc_call(0x802de9f0u, &a);
                        f1 = tc_lastf();
                        r27 = r3;
                        if (r3 == 0u) break;
                        r4 = rd32(r3 + 0xcu);
                        if ((r4 - 1u) <= 1u) {
                            r3 = rd32(r3 + 0x24u);
                            if ((r3 & 0x10000u) != 0u || (r3 & 0x8000u) != 0u) {
                                a.r[0] = r27;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(rd32(rd32(r27 + 0x1cu) + 0x24u), &a);
                            }
                        }
                    }
                    a.r[0] = param_r3 + 0x24u;
                    a.r[1] = 0x817fcfe8u;
                    a.r[2] = (u32)rd16(param_r3 + 0x2cu);
                    r3 = tc_call(0x803200acu, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r28 = r3 & 0xffffu;
                    r27 = 0u;
                    while ((r27 & 0xffffu) < r28) {
                        r26 = rd32(((r27 << 2u) & 0x3fffcu) - 0x7e803018u);
                        if (rd32(r26 + 0xb4u) == 0u) {
                            wr32(r26 + 0xe4u, rd32(r26 + 0xe4u) + 1u);
                        }
                        a.r[0] = r26;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(rd32(rd32(r26 + 0x1cu) + 0x1cu), &a);
                        r4 = tc_lastr4();
                        if (rd32(r26 + 0xb4u) == 0u) {
                            wr32(r26 + 0xe4u, rd32(r26 + 0xe4u) - 1u);
                        }
                        r27 = r27 + 1u;
                    }
                    a.r[0] = param_r3 + 0x24u;
                    a.r[1] = 0x817fcfe8u;
                    a.r[2] = (u32)rd16(param_r3 + 0x2cu);
                    r3 = tc_call(0x803200acu, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r28 = r3 & 0xffffu;
                    r26 = 0u;
                    while ((r26 & 0xffffu) < r28) {
                        r3 = rd32(((r26 << 2u) & 0x3fffcu) - 0x7e803018u);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(rd32(rd32(r3 + 0x1cu) + 0x20u), &a);
                        r4 = tc_lastr4();
                        r26 = r26 + 1u;
                    }
                    a.r[0] = param_r3 + 0x24u;
                    a.r[1] = 0x817fcfe8u;
                    a.r[2] = (u32)rd16(param_r3 + 0x2cu);
                    r3 = tc_call(0x803200acu, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r28 = r3 & 0xffffu;
                    r26 = 0u;
                    while ((r26 & 0xffffu) < r28) {
                        r3 = rd32(((r26 << 2u) & 0x3fffcu) - 0x7e803018u);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(rd32(rd32(r3 + 0x1cu) + 0x1cu), &a);
                        r4 = tc_lastr4();
                        r26 = r26 + 1u;
                    }
                    r3 = rd32(param_r3 + 0x20u) + 0x10u;
                    if (rd32(r3) == 0u) break;
                    a.r[0] = r3;
                    (void)tc_call(0x803218f4u, &a);
                }
                if ((rd32(param_r3 + 0x50u) & 0x10000u) != 0u) {
                    r26 = 0u;
                    for (;;) {
                        a.r[0] = param_r3 + 0x24u;
                        a.r[1] = r26;
                        r3 = tc_call(0x802de9f0u, &a);
                        r26 = r3;
                        if (r3 == 0u) break;
                        if (rd32(r3 + 0xcu) == 1u) {
                            r4 = (u32)rd16(r3 + 0xe8u);
                            c0eq = r4 == 0u;
                            if (!c0eq) {
                                if (!c0eq) {
                                    wr16(r3 + 0xe8u, (u16)(r4 - 1u));
                                }
                                if (rd32(r3 + 0xb4u) == 1u) {
                                    wr32(r3 + 0xb4u, 0u);
                                }
                            }
                        }
                        r27 = 0u;
                        for (;;) {
                            a.r[0] = r26 + 0xc0u;
                            a.r[1] = r27;
                            r3 = tc_call(0x802de9f0u, &a);
                            r27 = r3;
                            if (r3 == 0u) break;
                            r3 = r3;
                            a.r[0] = r3;
                            a.r[1] = 1u;
                            (void)tc_call(0x8031f084u, &a);
                        }
                    }
                }
            }
            r26 = 0u;
            for (;;) {
                a.r[0] = param_r3 + 0x24u;
                a.r[1] = r26;
                r3 = tc_call(0x802de9f0u, &a);
                r26 = r3;
                if (r3 == 0u) break;
                if ((rd32(r3 + 0xcu) - 1u) <= 1u && rd32(r3 + 0xb4u) == 3u) {
                    wr32(r3 + 0xb4u, 1u);
                }
                r27 = 0u;
                for (;;) {
                    a.r[0] = r26 + 0xc0u;
                    a.r[1] = r27;
                    r3 = tc_call(0x802de9f0u, &a);
                    r27 = r3;
                    if (r3 == 0u) break;
                    r3 = r3;
                    a.r[0] = r3;
                    (void)tc_call(0x8031f0f0u, &a);
                }
                a.r[0] = r26;
                a.r[1] = 0x817fcfb8u;
                (void)tc_call(0x80313b9cu, &a);
                wrf32d(r26 + 0x108u, (f64)rdf32(0x817fcfc4u));
                wrf32d(r26 + 0x10cu, (f64)rdf32(0x817fcfd4u));
                wrf32d(r26 + 0x110u, (f64)rdf32(0x817fcfe4u));
            }
        }
    } else {
        r28 = 0u;
        for (;;) {
            a.r[0] = param_r3 + 0x24u;
            a.r[1] = r28;
            r3 = tc_call(0x802de9f0u, &a);
            f1 = tc_lastf();
            r28 = r3;
            if (r3 == 0u) break;
            r4 = rd32(r3 + 0xcu);
            if ((r4 - 1u) <= 1u) {
                r3 = rd32(r3 + 0x24u);
                if ((r3 & 0x10000u) != 0u || (r3 & 0x8000u) != 0u) {
                    a.r[0] = r28;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r28 + 0x1cu) + 0x24u), &a);
                }
            }
        }
    }
    return;
}
