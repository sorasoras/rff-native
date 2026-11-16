#include "tc_rt.h"

u32 fn_800c1b58(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r31 = 0x15u;
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x8019be38u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800c725cu, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x800c0560u, &a);
    if (r3 != 0u || rd32(param_1 + 0xa14u) != 0u) {
        r4 = rd32(param_1 + 0xa10u);
        if (r4 == 0x21u) {
            r4 = rd32(param_1 + 0xa0cu);
            if (r4 == 0x21u) {
                r31 = 0u;
                a.f[0] = (f64)rdf32(0x80572ea8u);
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                (void)tc_call(0x800bf1d4u, &a);
                wr32(param_1 + 0xa08u, 0x21u);
                wr32(param_1 + 0xa0cu, 0x21u);
                wr32(param_1 + 0xa10u, 0x21u);
                wr32(param_1 + 0xa14u, 0u);
            } else {
                if (rd32(param_1 + 0xa14u) == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = (u32)rd8(param_1 + 0x5c4u);
                    f1 = tc_callf(0x8006d400u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_1;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8006d6d8u, &a);
                }
                a.r[0] = param_1;
                a.r[1] = rd32(param_1 + 0xa0cu);
                (void)tc_call(0x800c00f8u, &a);
            }
        } else {
            r31 = 0x16u;
            if (rd32(param_1 + 0xa14u) == 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = (u32)rd8(param_1 + 0x5c4u);
                f1 = tc_callf(0x8006d400u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8006d6d8u, &a);
            }
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xa10u);
            (void)tc_call(0x800c00f8u, &a);
        }
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x800c0298u, &a);
        if (r3 != 0u) {
            r4 = rd32(param_1 + 0xa10u);
            if (r4 == 0x21u) {
                r4 = rd32(param_1 + 0xa0cu);
                if (r4 != 0x21u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = (u32)rd8(param_1 + 0x5c4u);
                    f1 = tc_callf(0x8006d400u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_1;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8006d6d8u, &a);
                    a.r[0] = param_1;
                    a.r[1] = rd32(param_1 + 0xa0cu);
                    (void)tc_call(0x800c00f8u, &a);
                }
            } else {
                r31 = 0x16u;
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = (u32)rd8(param_1 + 0x5c4u);
                f1 = tc_callf(0x8006d400u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8006d6d8u, &a);
                a.r[0] = param_1;
                a.r[1] = rd32(param_1 + 0xa10u);
                (void)tc_call(0x800c00f8u, &a);
            }
        }
    }
    a.r[0] = rd32(param_1 + 0xacu);
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 0xcu);
    a.r[0] = r3;
    r3 = tc_call(0x800f2a0cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r3 = rd32(r3);
    r3 = r3 + (rd32(param_1 + 0x100u) * 0x24u);
    if (((u32)rd8(r3 + 3u) & 2u) == 0u) {
        r3 = rd32(param_1 + 0xa80u);
        r28 = 0u;
        if (r3 != 0u) {
            if ((u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                f1 = tc_lastf();
                r29 = r3;
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r0 = rd32(r29 + 4u);
                wr32(0x817fdfb0u, rd32(r29));
                wr32(0x817fdfb4u, r0);
                wr32(0x817fdfb8u, rd32(r29 + 8u));
                a.r[0] = 0x817fdfb0u;
                a.r[1] = r3;
                a.r[2] = 0x817fdfb0u;
                (void)tc_call(0x802343a4u, &a);
                a.f[0] = (f64)rdf32(0x817fdfb0u);
                a.f[1] = (f64)rdf32(0x817fdfb8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                if (!((f64)rdf32(0x80572ec0u) < f1)) {
                    a.f[0] = (f64)rdf32(0x817fdfb0u);
                    a.f[1] = (f64)rdf32(0x817fdfb8u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x80572ec8u);
                    if (!((f0 > f1) || (f0 == f1))) {
                        a.f[0] = (f64)rdf32(0x817fdfb0u);
                        a.f[1] = (f64)rdf32(0x817fdfb8u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f31 = (f64)(f32)f1;
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdfb0u);
                        a.f[1] = (f64)rdf32(0x817fdfb8u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f31 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f1);
                    }
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfb0u);
                    a.f[1] = (f64)rdf32(0x817fdfb8u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572ec4u));
                }
                a.f[0] = (f64)rdf32(param_1 + 0x78u);
                a.f[1] = (f64)rdf32(param_1 + 0x80u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                if (!((f64)rdf32(0x80572ec0u) < f1)) {
                    a.f[0] = (f64)rdf32(param_1 + 0x78u);
                    a.f[1] = (f64)rdf32(param_1 + 0x80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x80572ec8u);
                    if (!((f0 > f1) || (f0 == f1))) {
                        a.f[0] = (f64)rdf32(param_1 + 0x78u);
                        a.f[1] = (f64)rdf32(param_1 + 0x80u);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        f3 = (f64)(f32)f1;
                    } else {
                        a.f[0] = (f64)rdf32(param_1 + 0x78u);
                        a.f[1] = (f64)rdf32(param_1 + 0x80u);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        f1 = (f64)(f32)f1;
                        f3 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f1);
                    }
                } else {
                    a.f[0] = (f64)rdf32(param_1 + 0x78u);
                    a.f[1] = (f64)rdf32(param_1 + 0x80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                    f3 = (f64)(f32)(f1 - (f64)rdf32(0x80572ec4u));
                }
                if (!((f64)rdf32(0x80572ec0u) < f31)) {
                    f0 = (f64)rdf32(0x80572ec8u);
                    if (!((f0 > f31) || (f0 == f31))) {
                        f0 = f31;
                    } else {
                        f0 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f31);
                    }
                } else {
                    f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572ec4u));
                }
                f1 = (f64)(f32)(f0 - f3);
                if (!(f1 > (f64)rdf32(0x80572ec0u))) {
                    if (f1 < (f64)rdf32(0x80572ec8u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572ec4u));
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572ec4u));
                }
                f0 = (f64)rdf32(0x80572ec0u);
                if (!(f0 < f1)) {
                    if (!(f0 < f31)) {
                        f0 = (f64)rdf32(0x80572ec8u);
                        if (!((f0 > f31) || (f0 == f31))) {
                            f0 = f31;
                        } else {
                            f0 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f31);
                        }
                    } else {
                        f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572ec4u));
                    }
                    f2 = (f64)(f32)(f0 - f3);
                    if (!(f2 > (f64)rdf32(0x80572ec0u))) {
                        if (f2 < (f64)rdf32(0x80572ec8u)) {
                            f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572ec4u));
                        }
                    } else {
                        f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572ec4u));
                    }
                    f1 = (f64)rdf32(0x80572ec8u);
                    if (!((f1 > f2) || (f1 == f2))) {
                        if (!((f64)rdf32(0x80572ec0u) < f31)) {
                            if ((f1 > f31) || (f1 == f31)) {
                                f31 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f31);
                            }
                        } else {
                            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572ec4u));
                        }
                        f31 = (f64)(f32)(f31 - f3);
                        if (!(f31 > (f64)rdf32(0x80572ec0u))) {
                            if (f31 < (f64)rdf32(0x80572ec8u)) {
                                f31 = (f64)(f32)(f31 + (f64)rdf32(0x80572ec4u));
                            }
                        } else {
                            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572ec4u));
                        }
                    } else {
                        if (!((f64)rdf32(0x80572ec0u) < f31)) {
                            if ((f1 > f31) || (f1 == f31)) {
                                f31 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f31);
                            }
                        } else {
                            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572ec4u));
                        }
                        f1 = (f64)(f32)(f31 - f3);
                        if (!(f1 > (f64)rdf32(0x80572ec0u))) {
                            if (f1 < (f64)rdf32(0x80572ec8u)) {
                                f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572ec4u));
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572ec4u));
                        }
                        f31 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f1);
                    }
                } else {
                    if (!(f0 < f31)) {
                        f0 = (f64)rdf32(0x80572ec8u);
                        if ((f0 > f31) || (f0 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f31);
                        }
                    } else {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572ec4u));
                    }
                    f1 = (f64)(f32)(f31 - f3);
                    if (!(f1 > (f64)rdf32(0x80572ec0u))) {
                        if (f1 < (f64)rdf32(0x80572ec8u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572ec4u));
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572ec4u));
                    }
                    f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572ec4u));
                }
                f1 = (f64)(f32)ppc_fabs(f31);
                if (f1 < (f64)rdf32(0x80572eccu)) {
                    f2 = (f64)rdf32(0x80572ed0u);
                    if (f1 > f2) {
                        if (!(f31 > (f64)rdf32(0x80572eacu))) {
                            f2 = (f64)rdf32(0x80572ed4u);
                        }
                        f31 = f2;
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                    r4 = tc_lastr4();
                    f31 = (f64)(f32)(f31 + f1);
                    if (!((f64)rdf32(0x80572ec0u) < f31)) {
                        f0 = (f64)rdf32(0x80572ec8u);
                        if ((f0 > f31) || (f0 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x80572ec4u) + f31);
                        }
                    } else {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572ec4u));
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f31;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
                    r28 = 1u;
                }
            } else {
                wr32(param_1 + 0xa80u, 0u);
            }
        }
        if (r28 == 0u) {
            f0 = (f64)rdf32(0x80572eacu);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfc8u, f0);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x800c677cu, &a);
            f0 = (f64)rdf32(0x80572eacu);
            f1 = (f64)rdf32(0x80572eb4u);
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfc0u, f0);
            wrf32d(0x817fdfbcu, f0);
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfbcu;
            a.r[3] = 0x817fdfa8u;
            a.r[4] = 0x817fdfacu;
            r3 = tc_call(0x80068044u, &a);
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = (f64)rdf32(0x817fdfa8u);
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
            }
        }
    }
    return r31;
}
