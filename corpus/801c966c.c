#include "tc_rt.h"

void fn_801c966c(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r21 = 0, r23 = 0, r24 = 0, r25 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = param_r4;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r5 = rd32(param_r3 + 0x14u);
    if ((s32)r5 < 0) {
        r0 = rd32(param_r3 + 0x10u);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) {
            f31 = (f64)rdf32(0x80575de0u);
            r23 = param_r4;
            r21 = 0u;
            do {
                r24 = rd32(r23 + 0x1694u);
                do {
                    if (r24 != 0u) {
                        r3 = rd32(r24 + 0xda4u);
                        if (r3 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r3 + 4u);
                        }
                        if (r0 == 0x1du) {
                            a.r[0] = r24;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            r3 = tc_call(rd32(rd32(r24) + 0x19cu), &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 != 0x5eu) {
                                a.r[0] = r24;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                r3 = tc_call(rd32(rd32(r24) + 0x19cu), &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                if (r3 != 0x75u) {
                                    a.r[0] = r24;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    r3 = tc_call(rd32(rd32(r24) + 0x19cu), &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    r5 = 0u;
                                    if (r3 != 0x7au) break;
                                }
                            }
                            wrf32d(0x817fdfacu, f31);
                            wrf32d(0x817fdfa8u, f31);
                            wrf32d(0x817fdfa4u, f31);
                            a.f[0] = (f64)rdf32(param_r3 + 8u);
                            a.r[0] = 0x817fdfa4u;
                            a.r[1] = r24 + 0x16bcu;
                            a.r[2] = r24 + 0xcf4u;
                            (void)tc_call(0x800457b8u, &a);
                            a.r[0] = r24;
                            a.r[1] = 0x817fdfa4u;
                            f1 = tc_callf(0x80207608u, &a);
                            r4 = tc_lastr4();
                            r5 = 0u;
                        }
                    }
                } while (0);
                r21 = r21 + 1u;
                r23 = r23 + 4u;
            } while ((s32)r21 < 30);
            f0 = (f64)rdf32(0x80575e18u);
            f1 = (f64)(f32)((f64)rdf32(param_r3 + 8u) + rdf64(0x80575e10u));
            wrf32d(param_r3 + 8u, f1);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = param_r4;
                a.r[1] = 8u;
                (void)tc_call(0x800b31a0u, &a);
            }
        } else if (c0lt) {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                a.r[0] = param_r4;
                a.r[1] = 8u;
                (void)tc_call(0x800b31a0u, &a);
            } else if (!c0lt) {
                f31 = (f64)rdf32(0x80575de0u);
                r31 = param_r4;
                r30 = param_r4;
                r29 = param_r4 + 0x1710u;
                r25 = 0u;
                do {
                    r24 = rd32(r31 + 0x1694u);
                    if (r24 != 0u) {
                        r3 = rd32(r24 + 0xda4u);
                        if (r3 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r3 + 4u);
                        }
                        if (r0 == 0x1du) {
                            r28 = r30;
                            r27 = r29;
                            r23 = 0u;
                            do {
                                r21 = rd32(param_r4 + ((rd32(r28 + 0x170cu) << 2u) & 0xfffffffcu) + 0x1694u);
                                if (r21 != 0u) {
                                    r3 = rd32(r21 + 0xda4u);
                                    if (r3 == 0u) {
                                        r0 = 0xffffffffu;
                                    } else {
                                        r0 = rd32(r3 + 4u);
                                    }
                                    if (r0 == 0x1eu) {
                                        wrf32d(0x817fdfb8u, f31);
                                        wrf32d(0x817fdfb4u, f31);
                                        wrf32d(0x817fdfb0u, f31);
                                        a.f[0] = (f64)rdf32(param_r3 + 8u);
                                        a.r[0] = 0x817fdfb0u;
                                        a.r[1] = r27;
                                        a.r[2] = r24 + 0xcf4u;
                                        (void)tc_call(0x800457b8u, &a);
                                        r6 = rd32(0x817fdfb4u);
                                        r0 = rd32(0x817fdfb8u);
                                        wr32(0x817fdf98u, rd32(0x817fdfb0u));
                                        wr32(0x817fdf9cu, r6);
                                        wr32(0x817fdfa0u, r0);
                                        a.r[0] = 0x817fdf98u;
                                        a.r[1] = r21 + 0xcf4u;
                                        a.r[2] = 0x817fdf98u;
                                        (void)tc_call(0x802343a4u, &a);
                                        wrf32d(r21 + 0x90u, (f64)rdf32(0x817fdf98u));
                                        wrf32d(r21 + 0x94u, (f64)rdf32(0x817fdf9cu));
                                        wrf32d(r21 + 0x98u, (f64)rdf32(0x817fdfa0u));
                                        if ((s32)rd32(param_r3 + 0xcu) >= 30) {
                                            a.r[0] = r21;
                                            a.r[1] = 0x2008u;
                                            (void)tc_call(0x800aef78u, &a);
                                        }
                                    }
                                }
                                r23 = r23 + 1u;
                                r27 = r27 + 0x10u;
                                r28 = r28 + 0x10u;
                            } while ((s32)r23 < 2);
                        }
                    }
                    r25 = r25 + 1u;
                    r30 = r30 + 0x20u;
                    r29 = r29 + 0x20u;
                    r31 = r31 + 4u;
                } while ((s32)r25 < 30);
                if ((s32)rd32(param_r3 + 0xcu) >= 30) {
                    wr32(param_r3 + 0xcu, 0u);
                }
                f1 = (f64)rdf32(param_r3 + 8u) + rdf64(0x80575e10u);
                f0 = (f64)rdf32(0x80575e18u);
                wr32(param_r3 + 0xcu, rd32(param_r3 + 0xcu) + 1u);
                f1 = (f64)(f32)f1;
                wrf32d(param_r3 + 8u, f1);
                if ((f1 > f0) || (f1 == f0)) {
                    a.r[0] = param_r4;
                    a.r[1] = 8u;
                    (void)tc_call(0x800b31a0u, &a);
                }
            }
        }
    } else {
        wr32(param_r3 + 0x14u, r5 - 1u);
    }
    return;
}
