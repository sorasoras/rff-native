#include "tc_rt.h"

void fn_8016b53c(u32 param_r4)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_r4;
    r3 = tc_call(0x800b32fcu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = rd32(param_r4 + 0x15f4u);
        if (r3 == 0u) {
            r28 = 0u;
        } else {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
            r28 = r3;
        }
        if (r28 == 0u) {
            a.f[0] = (f64)rdf32(0x80574ca8u);
            a.r[0] = param_r4;
            r3 = tc_call(0x800b3304u, &a);
            if (r3 == 0u) {
                f4 = (f64)rdf32(0x80574c80u);
                f3 = (f64)rdf32(0x804890c8u);
                f2 = (f64)rdf32(0x804890ccu);
                wrf32d(0x817fdf9cu, f4);
                f0 = (f64)rdf32(0x80574cacu);
                wrf32d(0x817fdf84u, f4);
                f1 = (f64)rdf32(0x804890d0u);
                wrf32d(0x817fdfa4u, f4);
                wrf32d(0x817fdf78u, f4);
                wrf32d(0x817fdf74u, f4);
                wrf32d(0x817fdf70u, f4);
                wrf32d(0x817fdfb0u, f4);
                wrf32d(0x817fdfacu, f4);
                wrf32d(0x817fdfa8u, f4);
                wr32(0x817fdf68u, 0u);
                wrf32d(0x817fdf7cu, f3);
                wrf32d(0x817fdf80u, f2);
                wrf32d(0x817fdf84u, f1);
                wrf32d(0x817fdf9cu, f3);
                wrf32d(0x817fdfa0u, f2);
                wrf32d(0x817fdfa4u, f1);
                wr32(0x817fdfccu, param_r4);
                wr32(0x817fdfc4u, 0u);
                wr32(0x817fdfc8u, 0u);
                wrf32d(0x817fdf6cu, f0);
                wrf32d(0x817fdfc0u, f4);
                wrf32d(0x817fdfbcu, f4);
                wrf32d(0x817fdfb8u, f4);
                wrf32d(0x817fdfb4u, f4);
                wrf32d(0x817fdf94u, f4);
                wrf32d(0x817fdf90u, f4);
                wrf32d(0x817fdf8cu, f4);
                wrf32d(0x817fdf88u, f4);
                r0 = rd32(param_r4 + 0xcf8u);
                wr32(0x817fdf1cu, rd32(param_r4 + 0xcf4u));
                wr32(0x817fdf20u, r0);
                wr32(0x817fdf24u, rd32(param_r4 + 0xcfcu));
                a.r[0] = param_r4;
                r3 = tc_call(0x800b3344u, &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdf10u, rd32(r3));
                wr32(0x817fdf14u, r0);
                wr32(0x817fdf18u, rd32(r3 + 8u));
                a.r[0] = param_r4;
                a.r[1] = param_r4 + 0xcf4u;
                f1 = tc_callf(0x800b42e4u, &a);
                wrf32d(0x817fdf20u, f1);
                a.f[0] = (f64)rdf32(param_r4 + 0xb0u);
                a.r[0] = 0x8046d8c8u;
                a.r[1] = 0x817fdf68u;
                a.r[2] = 0x817fdf1cu;
                a.r[3] = 0x817fdf10u;
                a.r[4] = rd32(param_r4 + 0xbcu);
                a.r[5] = 0xffffu;
                r3 = tc_call(0x8008c458u, &a);
                if (r3 != 0u) {
                    r6 = rd32(param_r4 + 0xf78u);
                    f0 = (f64)rdf32(0x80574c80u);
                    wr32(param_r4 + 0xf78u, r6 ^ (r6 & 1u));
                    wrf32d(0x817fdf30u, f0);
                    wrf32d(0x817fdf2cu, f0);
                    wrf32d(0x817fdf28u, f0);
                    wrf32d(0x817fdf3cu, f0);
                    wrf32d(0x817fdf38u, f0);
                    wrf32d(0x817fdf34u, f0);
                    wrf32d(0x817fdf48u, f0);
                    wrf32d(0x817fdf44u, f0);
                    wrf32d(0x817fdf40u, f0);
                    wrf32d(0x817fdf54u, f0);
                    wrf32d(0x817fdf50u, f0);
                    wrf32d(0x817fdf4cu, f0);
                    wrf32d(0x817fdf60u, f0);
                    wrf32d(0x817fdf5cu, f0);
                    wrf32d(0x817fdf58u, f0);
                    wr32(0x817fdf0cu, 5u);
                    r27 = rd32(param_r4 + 0x160cu);
                    a.r[0] = param_r4;
                    a.r[1] = r27;
                    a.r[2] = 0x817fdf0cu;
                    a.r[3] = 0x817fdf28u;
                    f1 = tc_callf(0x800b5a70u, &a);
                    r4 = tc_lastr4();
                    r26 = 0x817fdf28u;
                    r25 = 0u;
                    r24 = 0u;
                    for (;;) {
                        if ((s32)r24 >= (s32)rd32(0x817fdf0cu)) {
                            fl_ = 1u;
                            break;
                        }
                        f1 = (f64)rdf32(r26 + 4u);
                        f0 = (f64)rdf32(r26 + 8u);
                        wrf32d(0x817fdf10u, (f64)rdf32(r26));
                        r7 = rd32(0x804863d8u);
                        wrf32d(0x817fdf14u, f1);
                        wrf32d(0x817fdf18u, f0);
                        a.f[0] = (f64)rdf32(r7 + 0xb0u);
                        a.r[0] = 0x8046d8c8u;
                        a.r[1] = 0x817fdf68u;
                        a.r[2] = 0x817fdf1cu;
                        a.r[3] = 0x817fdf10u;
                        a.r[4] = rd32(param_r4 + 0xbcu);
                        a.r[5] = 0xffffu;
                        r3 = tc_call(0x8008c458u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 == 0u) {
                            if ((u32)rd8(param_r4 + 0x168cu) == 0u) {
                                fl_ = 2u;
                                break;
                            }
                            f1 = (f64)rdf32(param_r4 + 0x1680u);
                            r0 = 0u;
                            if (f1 == (f64)rdf32(r26)) {
                                f1 = (f64)rdf32(param_r4 + 0x1684u);
                                if (f1 == (f64)rdf32(r26 + 4u)) {
                                    f1 = (f64)rdf32(param_r4 + 0x1688u);
                                    if (f1 == (f64)rdf32(r26 + 8u)) {
                                        r0 = 1u;
                                    }
                                }
                            }
                            if (r0 == 0u) {
                                fl_ = 2u;
                                break;
                            }
                        }
                        r26 = r26 + 0xcu;
                        r24 = r24 + 1u;
                    }
                    do {
                        if (fl_ == 2u) {
                            fl_ = 0u;
                        } else if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                        a.r[0] = param_r4;
                        a.r[1] = (r24 * 0xcu) - 0x7e8020d8u;
                        f1 = tc_callf(0x800b32ecu, &a);
                        r4 = tc_lastr4();
                        r25 = 1u;
                    } while (0);
                    if (r25 == 0u) {
                        r0 = r27 + rd32(0x817fdf0cu);
                        if ((s32)r0 < 0) {
                            r0 = 0u;
                        }
                        if ((s32)r0 >= 180) {
                            r0 = 0xb3u;
                        }
                        wr32(param_r4 + 0x160cu, r0);
                    } else {
                        wr32(param_r4 + 0x160cu, 0u);
                        a.r[0] = param_r4;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(param_r4) + 0x19cu), &a);
                        wr32(0x817fdf08u, r3);
                        a.r[0] = 0x817fdf08u;
                        f1 = tc_callf(0x8014995cu, &a);
                        a.r[0] = param_r4;
                        r3 = tc_call(0x800b3344u, &a);
                        a.f[0] = f1;
                        a.r[0] = param_r4;
                        a.r[1] = r3;
                        a.r[2] = 1u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        (void)tc_call(0x800b2cdcu, &a);
                        a.r[0] = param_r4;
                        r3 = tc_call(0x800b3344u, &a);
                        wrf32d(param_r4 + 0x1680u, (f64)rdf32(r3));
                        wrf32d(param_r4 + 0x1684u, (f64)rdf32(r3 + 4u));
                        wrf32d(param_r4 + 0x1688u, (f64)rdf32(r3 + 8u));
                    }
                } else {
                    r3 = rd32(param_r4 + 0xf78u);
                    wr32(param_r4 + 0xf78u, r3 | (r3 ^ 1u));
                }
            } else {
                r3 = rd32(param_r4 + 0xf78u);
                wr32(param_r4 + 0xf78u, r3 ^ (r3 & 1u));
            }
        } else {
            a.r[0] = param_r4;
            (void)tc_call(0x800b334cu, &a);
            a.r[0] = param_r4;
            a.r[1] = r28;
            (void)tc_call(0x800b32d0u, &a);
            a.r[0] = param_r4;
            a.r[1] = 0x15u;
            (void)tc_call(0x800b31a0u, &a);
        }
    }
    return;
}
