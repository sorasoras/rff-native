#include "tc_rt.h"

void fn_800d8cc8(void)
{
    u32 c0gt = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r23 = 0, r24 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f31 = (f64)rdf32(0x805739e0u);
    r28 = 0x804b1df8u;
    r27 = 0u;
    do {
        a.r[0] = r28;
        r3 = tc_call(0x80321010u, &a);
        if (r3 != 0u) {
            r3 = rd32(r3 + 0xcu);
        } else {
            r3 = 0u;
        }
        r0 = 0u;
        if (r3 == 1u || r3 == 2u) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            a.r[0] = rd32(r28 + 8u);
            r3 = tc_call(0x800d91d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                r4 = rd32(0x804890c8u);
                r3 = rd32(0x804890ccu);
                c0gt = (s32)rd32(r28 + 8u) > 5;
                r0 = rd32(0x804890d0u);
                wr32(0x817fdf40u, r4);
                wr32(0x817fdf44u, r3);
                wr32(0x817fdf48u, r0);
                wr32(0x817fdfa0u, r4);
                wr32(0x817fdfa4u, r3);
                wr32(0x817fdfa8u, r0);
                wr32(0x817fdf94u, r4);
                wr32(0x817fdf98u, r3);
                wr32(0x817fdf9cu, r0);
                if (c0gt) {
                    f4 = (f64)rdf32(r28 + 0x40u);
                    f3 = (f64)rdf32(r28 + 0x44u);
                    f2 = (f64)rdf32(r28 + 0x48u);
                    f1 = (f64)rdf32(r28 + 0x4cu);
                    f0 = (f64)rdf32(r28 + 0x50u);
                    wrf32d(0x817fdf94u, (f64)rdf32(r28 + 0x3cu));
                    wrf32d(0x817fdf98u, f4);
                    wrf32d(0x817fdf9cu, f3);
                    wrf32d(0x817fdfa0u, f2);
                    wrf32d(0x817fdfa4u, f1);
                    wrf32d(0x817fdfa8u, f0);
                } else {
                    r23 = rd32(0x804863d8u) + 0x54cu;
                    a.r[0] = r23;
                    a.r[1] = 0x817fdfa0u;
                    a.r[2] = 0xc8u;
                    a.r[3] = 0x804890c8u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    r3 = tc_call(rd32(rd32(r23) + 0x34u), &a);
                    f1 = tc_lastf();
                    r24 = r3;
                    a.r[0] = r23;
                    a.r[1] = 0x817fdf94u;
                    a.r[2] = 0xc9u;
                    a.r[3] = 0x804890c8u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    r3 = tc_call(rd32(rd32(r23) + 0x34u), &a);
                    if (r24 == 0u || r3 == 0u) {
                        f2 = (f64)rdf32(0x804890c8u);
                        f1 = (f64)rdf32(0x804890ccu);
                        f0 = (f64)rdf32(0x804890d0u);
                        wrf32d(0x817fdfa0u, f2);
                        wrf32d(0x817fdfa4u, f1);
                        wrf32d(0x817fdfa8u, f0);
                        wrf32d(0x817fdf94u, f2);
                        wrf32d(0x817fdf98u, f1);
                        wrf32d(0x817fdf9cu, f0);
                    }
                }
                r0 = 0u;
                if ((f64)rdf32(0x817fdfa0u) != (f64)rdf32(0x804890c8u) || (f64)rdf32(0x817fdfa4u) != (f64)rdf32(0x804890ccu) || (f64)rdf32(0x817fdfa8u) != (f64)rdf32(0x804890d0u)) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r0 = 0u;
                    if ((f64)rdf32(0x817fdf94u) != (f64)rdf32(0x804890c8u) || (f64)rdf32(0x817fdf98u) != (f64)rdf32(0x804890ccu) || (f64)rdf32(0x817fdf9cu) != (f64)rdf32(0x804890d0u)) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r7 = rd32(0x817fdfa0u);
                        r6 = rd32(0x817fdfa4u);
                        r0 = rd32(0x817fdfa8u);
                        wrf32d(0x817fdf90u, f31);
                        wrf32d(0x817fdf8cu, f31);
                        wrf32d(0x817fdf88u, f31);
                        wr32(0x817fdf64u, r7);
                        wr32(0x817fdf68u, r6);
                        wr32(0x817fdf6cu, r0);
                        a.r[0] = 0x817fdf64u;
                        a.r[1] = 0x817fdf94u;
                        a.r[2] = 0x817fdf64u;
                        (void)tc_call(0x802343a4u, &a);
                        f2 = (f64)rdf32(0x817fdf64u);
                        f1 = (f64)rdf32(0x817fdf68u);
                        f0 = (f64)rdf32(0x817fdf6cu);
                        wrf32d(0x817fdf88u, f2);
                        wrf32d(0x817fdf8cu, f1);
                        wrf32d(0x817fdf90u, f0);
                        wrf32d(0x817fdf7cu, f2);
                        wrf32d(0x817fdf80u, f1);
                        wrf32d(0x817fdf84u, f0);
                        a.r[0] = 0x817fdf7cu;
                        f1 = tc_callf(0x80234440u, &a);
                        f30 = f1;
                        (void)tc_call(0x80311554u, &a);
                        r3 = rd32(r28 + 8u);
                        r0 = 0u;
                        wr32(0x817fdf34u, 0u);
                        c0lt = (s32)r3 < 5;
                        if (r3 == 5u) {
                            r3 = tc_call(0x8031f650u, &a);
                            a.r[0] = 0x817fdf18u;
                            a.r[1] = r3;
                            a.r[2] = 0x80338be0u;
                            a.r[3] = 0u;
                            (void)tc_call(0x8031faccu, &a);
                            r0 = rd32(0x817fdf18u);
                            wr32(0x817fdf34u, r0);
                        } else if (!c0lt) {
                            c0lt = (s32)r3 < 209;
                            if (r3 == 0xd1u) {
                                r3 = tc_call(0x8031f650u, &a);
                                a.r[0] = 0x817fdf0cu;
                                a.r[1] = r3;
                                a.r[2] = 0x80338bf2u;
                                a.r[3] = 0u;
                                (void)tc_call(0x8031faccu, &a);
                                r0 = rd32(0x817fdf0cu);
                                wr32(0x817fdf34u, r0);
                            } else if (!c0lt) {
                                if (r3 == 0xd4u) {
                                    r3 = tc_call(0x8031f650u, &a);
                                    a.r[0] = 0x817fdf08u;
                                    a.r[1] = r3;
                                    a.r[2] = 0x80338bf7u;
                                    a.r[3] = 0u;
                                    (void)tc_call(0x8031faccu, &a);
                                    r0 = rd32(0x817fdf08u);
                                    wr32(0x817fdf34u, r0);
                                }
                            } else {
                                c0lt = (s32)r3 < 207;
                                if (r3 == 0xcfu) {
                                    r3 = tc_call(0x8031f650u, &a);
                                    a.r[0] = 0x817fdf14u;
                                    a.r[1] = r3;
                                    a.r[2] = 0x80338be8u;
                                    a.r[3] = 0u;
                                    (void)tc_call(0x8031faccu, &a);
                                    r0 = rd32(0x817fdf14u);
                                    wr32(0x817fdf34u, r0);
                                } else if (!c0lt) {
                                    r3 = tc_call(0x8031f650u, &a);
                                    a.r[0] = 0x817fdf10u;
                                    a.r[1] = r3;
                                    a.r[2] = 0x80338bedu;
                                    a.r[3] = 0u;
                                    (void)tc_call(0x8031faccu, &a);
                                    r0 = rd32(0x817fdf10u);
                                    wr32(0x817fdf34u, r0);
                                }
                            }
                        } else {
                            c0lt = (s32)r3 < 2;
                            if (r3 == 2u) {
                                r3 = tc_call(0x8031f650u, &a);
                                a.r[0] = 0x817fdf24u;
                                a.r[1] = r3;
                                a.r[2] = 0x80338bc8u;
                                a.r[3] = 0u;
                                (void)tc_call(0x8031faccu, &a);
                                r0 = rd32(0x817fdf24u);
                                wr32(0x817fdf34u, r0);
                            } else if (!c0lt) {
                                if ((s32)r3 >= 4) {
                                    r3 = tc_call(0x8031f650u, &a);
                                    a.r[0] = 0x817fdf1cu;
                                    a.r[1] = r3;
                                    a.r[2] = 0x80338bd8u;
                                    a.r[3] = 0u;
                                    (void)tc_call(0x8031faccu, &a);
                                    r0 = rd32(0x817fdf1cu);
                                    wr32(0x817fdf34u, r0);
                                } else {
                                    r3 = tc_call(0x8031f650u, &a);
                                    a.r[0] = 0x817fdf20u;
                                    a.r[1] = r3;
                                    a.r[2] = 0x80338bd0u;
                                    a.r[3] = 0u;
                                    (void)tc_call(0x8031faccu, &a);
                                    r0 = rd32(0x817fdf20u);
                                    wr32(0x817fdf34u, r0);
                                }
                            } else {
                                c0lt = (s32)r3 < 0;
                                if (r3 == 0u) {
                                    r3 = tc_call(0x8031f650u, &a);
                                    a.r[0] = 0x817fdf2cu;
                                    a.r[1] = r3;
                                    a.r[2] = 0x80338bb8u;
                                    a.r[3] = 0u;
                                    (void)tc_call(0x8031faccu, &a);
                                    r0 = rd32(0x817fdf2cu);
                                    wr32(0x817fdf34u, r0);
                                } else if (!c0lt) {
                                    r3 = tc_call(0x8031f650u, &a);
                                    a.r[0] = 0x817fdf28u;
                                    a.r[1] = r3;
                                    a.r[2] = 0x80338bc0u;
                                    a.r[3] = 0u;
                                    (void)tc_call(0x8031faccu, &a);
                                    r0 = rd32(0x817fdf28u);
                                    wr32(0x817fdf34u, r0);
                                }
                            }
                        }
                        if (r0 == 0u) break;
                        a.r[0] = 0x817fdf30u;
                        a.r[1] = 0x817fdf34u;
                        (void)tc_call(0x80335834u, &a);
                        wrf32d(0x817fdf38u, f30);
                        wrf32d(0x817fdf3cu, f31);
                        a.r[0] = 0x817fdf30u;
                        a.r[1] = 0x817fdf38u;
                        (void)tc_call(0x80335858u, &a);
                        a.f[0] = -(f64)rdf32(0x817fdf8cu);
                        a.f[1] = f30;
                        f1 = tc_callf(0x80262c68u, &a);
                        f30 = (f64)(f32)f1;
                        a.f[0] = (f64)rdf32(0x817fdf88u);
                        a.f[1] = (f64)rdf32(0x817fdf90u);
                        f1 = tc_callf(0x80262c68u, &a);
                        wrf32d(0x817fdf70u, f30);
                        wrf32d(0x817fdf78u, f31);
                        r6 = rd32(0x817fdf70u);
                        wrf32d(0x817fdf74u, (f64)(f32)f1);
                        r0 = rd32(0x817fdf78u);
                        r5 = rd32(0x817fdf74u);
                        wr32(0x817fdf58u, r6);
                        wr32(0x817fdf5cu, r5);
                        wr32(0x817fdf60u, r0);
                        a.r[0] = r28;
                        a.r[1] = 0x817fdf58u;
                        (void)tc_call(0x801582b4u, &a);
                        r5 = rd32(0x817fdf98u);
                        r0 = rd32(0x817fdf9cu);
                        wr32(0x817fdf4cu, rd32(0x817fdf94u));
                        wr32(0x817fdf50u, r5);
                        wr32(0x817fdf54u, r0);
                        a.r[0] = r28;
                        a.r[1] = 0x817fdf4cu;
                        (void)tc_call(0x8015811cu, &a);
                    }
                }
            }
        }
        r27 = r27 + 1u;
        r28 = r28 + 0x54u;
    } while ((s32)r27 < 320);
    return;
}
