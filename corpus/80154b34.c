#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80154b34(u32 param_r3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r23 = 0, r24 = 0, r25 = 0, r29 = 0;
    u32 r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    f30 = (f64)rdf32(0x805748c8u);
    f31 = (f64)rdf32(0x805748ccu);
    r30 = param_r3 + 8u;
    f27 = (f64)rdf32(0x805748d0u);
    r29 = 0u;
    f28 = (f64)rdf32(0x805748d4u);
    do {
        r25 = 0u;
        if ((u32)rd8(r30) != 0u) {
            r24 = 1u;
            c0eq = rd32(r30 + 4u) == 0u;
            if (!c0eq) {
                r23 = 0u;
                if (!c0eq) {
                    a.r[0] = r30;
                    r3 = tc_call(0x80153c3cu, &a);
                    if (r3 == 0u) {
                        r23 = 1u;
                    }
                }
                if (r23 == 0u) {
                    r24 = 0u;
                }
            }
            if (r24 != 0u) {
                r25 = 1u;
            }
        }
        do {
            if (r25 != 0u) {
                a.r[0] = r30;
                r3 = tc_call(0x80153c3cu, &a);
                if (r3 == 0u) {
                    r5 = rd32(param_r3 + 4u);
                    r0 = rd32(r5 + 0xcf8u);
                    wr32(0x817fdf54u, rd32(r5 + 0xcf4u));
                    wr32(0x817fdf58u, r0);
                    wr32(0x817fdf5cu, rd32(r5 + 0xcfcu));
                    a.r[0] = r30;
                    r3 = tc_call(0x80153cd4u, &a);
                    r5 = rd32(r3);
                    r7 = rd32(0x817fdf54u);
                    wr32(0x817fdf4cu, rd32(r3 + 4u));
                    r6 = rd32(0x817fdf58u);
                    wr32(0x817fdf48u, r5);
                    r0 = rd32(0x817fdf5cu);
                    wr32(0x817fdf50u, rd32(r3 + 8u));
                    wr32(0x817fdf3cu, r7);
                    wr32(0x817fdf40u, r6);
                    wr32(0x817fdf44u, r0);
                    a.r[0] = 0x817fdf3cu;
                    a.r[1] = 0x817fdf48u;
                    a.r[2] = 0x817fdf3cu;
                    (void)tc_call(0x802343a4u, &a);
                    a.r[0] = rd32(param_r3 + 4u);
                    a.r[1] = 0x817fdf54u;
                    a.r[2] = 0x817fdf48u;
                    f1 = tc_callf(0x8007eeacu, &a);
                    r3 = rd32(param_r3 + 4u);
                    f29 = f1;
                    a.r[0] = r3;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                    f1 = (f64)(f32)(f29 - f1);
                    a.f[0] = f1;
                    f1 = tc_callf(0x8007edd4u, &a);
                    f29 = f1;
                    a.r[0] = r30;
                    f1 = tc_callf(0x80153cfcu, &a);
                    r4 = tc_lastr4();
                    f2 = 0.0;
                    if (rd32(r30 + 4u) == 0u) {
                        a.r[0] = 0x817fdf3cu;
                        f1 = tc_callf(0x80234440u, &a);
                        r25 = rd32(param_r3 + 4u);
                        f25 = f1;
                        a.r[0] = r25;
                        a.r[1] = 1u;
                        r3 = tc_call(0x800b1048u, &a);
                        if (r3 == 0u) {
                            f26 = (f64)rdf32(r25 + 0xd50u);
                        } else {
                            f26 = (f64)(f32)((f64)rdf32(r25 + 0xd50u) * f30);
                        }
                        r25 = rd32(param_r3 + 4u);
                        a.r[0] = r25;
                        a.r[1] = 1u;
                        r3 = tc_call(0x800b1048u, &a);
                        if (r3 == 0u) {
                            f0 = (f64)rdf32(r25 + 0xd50u);
                        } else {
                            f0 = (f64)(f32)((f64)rdf32(r25 + 0xd50u) * f30);
                        }
                        f0 = (f64)(f32)px_fdiv(f0, f31);
                        a.f[0] = f25;
                        a.f[1] = (f64)(f32)(f26 - f0);
                        a.r[0] = r30;
                        f1 = tc_callf(0x80153bf8u, &a);
                        r4 = tc_lastr4();
                        f2 = 0.0;
                        if ((s32)rd32(r30 + 0x34u) >= 20) {
                            wr8(r30, 0u);
                            wr32(r30 + 4u, 0u);
                            wr32(r30 + 0x30u, 0xffffffffu);
                            break;
                        }
                    }
                    if (rd32(r30 + 4u) == 0u) {
                        r25 = rd32(param_r3 + 4u);
                        a.r[0] = r25;
                        a.r[1] = 1u;
                        r3 = tc_call(0x800b1048u, &a);
                        r4 = tc_lastr4();
                        if (r3 == 0u) {
                            f0 = (f64)rdf32(r25 + 0xd50u);
                        } else {
                            f0 = (f64)(f32)((f64)rdf32(r25 + 0xd50u) * f30);
                        }
                        f2 = (f64)(f32)(f0 * f30);
                        f1 = (f64)rdf32(0x817fdf44u);
                        f0 = (f64)rdf32(0x817fdf3cu);
                        f1 = (f64)(f32)(f1 * f1);
                        f2 = (f64)(f32)(f2 * f2);
                        f0 = ppc_fmadds(f0, f0, f1);
                        f1 = (f64)(f32)ppc_fabs(f2);
                        c0lt = f0 < f1;
                        if (((((c0lt << 0x1fu) | ((f0 > f1) << 0x1eu) | ((c0lt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                            wr8(r30, 0u);
                            wr32(r30 + 4u, 0u);
                            wr32(r30 + 0x30u, 0xffffffffu);
                            break;
                        }
                    }
                    r3 = rd32(param_r3 + 4u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
                    wr32(0x817fdf2cu, r3);
                    a.r[0] = 0x817fdf2cu;
                    f1 = tc_callf(0x80149b3cu, &a);
                    r4 = tc_lastr4();
                    f2 = (f64)(f32)(f1 * f1);
                    f1 = (f64)rdf32(0x817fdf44u);
                    f0 = (f64)rdf32(0x817fdf3cu);
                    f1 = (f64)(f32)(f1 * f1);
                    f2 = ppc_fabs(f2);
                    f0 = ppc_fmadds(f0, f0, f1);
                    f1 = (f64)(f32)f2;
                    c0lt = f0 < f1;
                    if (((((c0lt << 0x1fu) | ((f0 > f1) << 0x1eu) | ((c0lt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                        r3 = rd32(param_r3 + 4u);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
                        wr32(0x817fdf28u, r3);
                        a.r[0] = 0x817fdf28u;
                        f1 = tc_callf(0x80149b54u, &a);
                        r0 = 0u;
                        f1 = (f64)(f32)px_fdiv((f64)(f32)(f27 * f1), f28);
                        f0 = (f64)(f32)(f30 * -f1);
                        if ((f29 > f0) || (f29 == f0)) {
                            f0 = (f64)(f32)(f30 * f1);
                            if ((f29 < f0) || (f29 == f0)) {
                                r0 = 1u;
                            }
                        }
                        if (r0 != 0u) {
                            if ((u32)rd8(r30 + 0x2cu) == 0u) {
                                wr8(r30 + 0x2cu, 1u);
                                wr32(r30 + 0x18u, 0u);
                            }
                            r3 = rd32(0x817fdf4cu);
                            wr32(0x817fdf30u, rd32(0x817fdf48u));
                            r0 = rd32(0x817fdf50u);
                            wr32(0x817fdf34u, r3);
                            f0 = (f64)rdf32(0x817fdf30u);
                            wr32(0x817fdf38u, r0);
                            f1 = (f64)rdf32(0x817fdf34u);
                            wrf32d(r30 + 0x20u, f0);
                            f0 = (f64)rdf32(0x817fdf38u);
                            wrf32d(r30 + 0x24u, f1);
                            wrf32d(r30 + 0x28u, f0);
                            wr32(r30 + 0x18u, rd32(r30 + 0x18u) + 1u);
                            wr32(r30 + 0x14u, rd32(r30 + 0x14u) + 1u);
                            break;
                        }
                    }
                    if ((u32)rd8(r30 + 0x2cu) == 0u) {
                        wr32(r30 + 0x14u, rd32(r30 + 0x14u) + 1u);
                    } else {
                        wr32(r30 + 0x1cu, rd32(r30 + 0x14u));
                        wr8(r30 + 0x2cu, 0u);
                        wr32(r30 + 0x14u, rd32(r30 + 0x14u) + 1u);
                    }
                } else {
                    wr8(r30, 0u);
                    wr32(r30 + 4u, 0u);
                    wr32(r30 + 0x30u, 0xffffffffu);
                }
            }
        } while (0);
        r29 = r29 + 1u;
        r30 = r30 + 0x3cu;
    } while ((s32)r29 < 3);
    return;
}
