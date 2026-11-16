#include "tc_rt.h"

void fn_8028ce94(void)
{
    u32 c0lt = 0, c1eq = 0, r0 = 0, r3 = 0, r4 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    (void)tc_call(0x8023029cu, &a);
    wr32(0x80571b78u, rd32(0x80571b78u) + 1u);
    (void)tc_call(0x8028b7a8u, &a);
    if (rd32(0x80570e24u) == 0u) {
        wr8(0x80570e20u, (u8)((u32)rd8(0x80570e20u) + 1u));
        (void)tc_call(0x8028b784u, &a);
    } else {
        wr32(0x80570e24u, 0u);
        wr8(0x80570e20u, 1u);
        (void)tc_call(0x8028b784u, &a);
        r31 = 5u;
        r4 = rd32(0x80571b78u);
        if (r4 > (rd32(0x80571b7cu) + 0x1f4u)) {
            wr32(0x80571b7cu, r4);
            r31 = 0x35u;
        }
        while (r30 == 0u) {
            r30 = 1u;
            if ((r31 & 1u) != 0u) {
                for (;;) {
                    a.r[0] = 0u;
                    r3 = tc_call(0x8028a6ccu, &a);
                    f1 = tc_lastf();
                    r27 = r3;
                    if (r3 == 0u) break;
                    r30 = 0u;
                    r28 = (u32)rd16(r3) & 0xff00u;
                    c0lt = (s32)r28 < 4608;
                    if (r28 == 0x1200u) {
                        r3 = r3;
                        a.r[0] = r3;
                        (void)tc_call(0x8029a1f4u, &a);
                    } else {
                        if (!c0lt) {
                            c0lt = (s32)r28 < 6400;
                            if (r28 == 0x1900u) {
                                r3 = r3;
                                a.r[0] = r3;
                                (void)tc_call(0x802a8688u, &a);
                                continue;
                            }
                            if (c0lt && r28 == 0x1600u) {
                                r3 = r3;
                                a.r[0] = r3;
                                (void)tc_call(0x8029db78u, &a);
                                continue;
                            }
                        } else {
                            c0lt = (s32)r28 < 4352;
                            if (r28 == 0x1100u) {
                                r3 = r3;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = r3;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x802a88bcu, &a);
                                continue;
                            }
                            if (c0lt && r28 == 0x1000u) {
                                r3 = r3;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = r3;
                                a.r[3] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x8029d5c0u, &a);
                                a.r[0] = r27;
                                (void)tc_call(0x8028a35cu, &a);
                                continue;
                            }
                        }
                        r26 = 0u;
                        r4 = 0u;
                        while (r4 == 0u && (r26 & 0xffu) < 6u) {
                            r3 = ((r26 << 3u) & 0x7f8u) - 0x7fac2bd0u;
                            r12 = rd32(r3 + 0x14u);
                            c1eq = r12 == 0u;
                            if (!c1eq && r28 == (u32)rd16(r3 + 0x10u) && !c1eq) {
                                a.r[0] = r27;
                                a.r[1] = r4;
                                a.f[0] = f1;
                                f1 = tc_callf(r12, &a);
                                r4 = 1u;
                            }
                            r26 = r26 + 1u;
                        }
                        if (r4 == 0u) {
                            a.r[0] = r27;
                            (void)tc_call(0x8028a35cu, &a);
                        }
                    }
                }
            }
            if ((r31 & 0x10u) != 0u) {
                a.r[0] = 0x8053d470u;
                a.r[1] = 1u;
                (void)tc_call(0x8028b2f4u, &a);
                r31 = r31 & 0xffefu;
                for (;;) {
                    r28 = rd32(0x8053d470u);
                    if (r28 == 0u || rd32(r28 + 0xcu) != 0u) break;
                    r30 = 0u;
                    a.r[0] = 0x8053d470u;
                    a.r[1] = r28;
                    f1 = tc_callf(0x8028b46cu, &a);
                    r4 = tc_lastr4();
                    r0 = (u32)rd16(r28 + 0x14u);
                    c0lt = (s32)r0 < 10;
                    if (r0 == 0xau) {
                        (void)tc_call(0x80298a94u, &a);
                    } else {
                        if (!c0lt) {
                            c0lt = (s32)r0 < 60;
                            if (r0 == 0x3cu) {
                                (void)tc_call(0x8029e5e4u, &a);
                                continue;
                            }
                            if (!c0lt) {
                                if (r0 == 0x42u) {
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    a.f[4] = 0.0;
                                    a.f[5] = 0.0;
                                    a.f[6] = 0.0;
                                    a.f[7] = 0.0;
                                    a.r[0] = r28;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    (void)tc_call(0x802a3ab8u, &a);
                                    continue;
                                }
                            } else {
                                c0lt = (s32)r0 < 22;
                                if (r0 == 0x16u) {
                                    a.r[0] = r28;
                                    a.r[1] = r4;
                                    a.f[0] = f1;
                                    (void)tc_call(rd32(r28 + 0x10u), &a);
                                    continue;
                                }
                                if (c0lt && (s32)r0 < 13) {
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    a.f[4] = 0.0;
                                    a.f[5] = 0.0;
                                    a.f[6] = 0.0;
                                    a.f[7] = 0.0;
                                    a.r[0] = r28;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    (void)tc_call(0x802b1818u, &a);
                                    continue;
                                }
                            }
                        } else {
                            c0lt = (s32)r0 < 5;
                            if (r0 == 5u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = rd32(r28 + 0x10u);
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x802b53bcu, &a);
                                continue;
                            }
                            if (!c0lt) {
                                c0lt = (s32)r0 < 8;
                                if (r0 == 8u) {
                                    (void)tc_call(0x80297038u, &a);
                                    continue;
                                }
                                if (!c0lt) {
                                    a.r[0] = r28;
                                    (void)tc_call(0x80294414u, &a);
                                    continue;
                                }
                            } else {
                                c0lt = (s32)r0 < 1;
                                if (r0 == 1u) {
                                    a.r[0] = r28;
                                    (void)tc_call(0x80295920u, &a);
                                    continue;
                                }
                                if (!c0lt) {
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    a.f[4] = 0.0;
                                    a.f[5] = 0.0;
                                    a.f[6] = 0.0;
                                    a.f[7] = 0.0;
                                    a.r[0] = r28;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    (void)tc_call(0x802a965cu, &a);
                                    continue;
                                }
                            }
                        }
                        r27 = 0u;
                        r4 = 0u;
                        while (r4 == 0u && (r27 & 0xffu) < 2u) {
                            r3 = ((r27 << 3u) & 0x7f8u) - 0x7fac2bd0u;
                            r12 = rd32(r3 + 4u);
                            if (r12 != 0u && rd32(r3) == r28) {
                                a.r[0] = r28;
                                a.r[1] = r4;
                                a.f[0] = f1;
                                f1 = tc_callf(r12, &a);
                                r4 = 1u;
                            }
                            r27 = r27 + 1u;
                        }
                    }
                }
            }
            if ((r31 & 4u) != 0u) {
                for (;;) {
                    a.r[0] = 2u;
                    r3 = tc_call(0x8028a6ccu, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) break;
                    r30 = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r3;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028d630u, &a);
                }
            }
            if ((r31 & 0x20u) != 0u) {
                r31 = r31 & 0xffdfu;
                (void)tc_call(0x8028d71cu, &a);
            }
            if ((r31 & 0x8000u) != 0u) break;
        }
        wr32(0x80570e24u, 1u);
    }
    return;
}
