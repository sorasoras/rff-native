#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8021421c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = 9u;
    r3 = tc_call(0x80074e90u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(param_r3 + 0x5cu);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x80097c5cu, &a);
        if (r3 == 0u) {
            a.r[0] = 9u;
            r3 = tc_call(0x800a4500u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x30u), &a);
                f1 = tc_lastf();
                r29 = r3;
                a.r[0] = r31;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfccu, rd32(r3));
                wr32(0x817fdfd0u, r0);
                wr32(0x817fdfd4u, rd32(r3 + 8u));
                a.r[0] = 0x817fdfccu;
                a.r[1] = r29;
                a.r[2] = 0x817fdfccu;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdfccu;
                f1 = tc_callf(0x80234440u, &a);
                f31 = f1;
                a.r[0] = rd32(rd32(param_r3 + 0x5cu) + 0xcu);
                a.r[1] = 9u;
                a.r[2] = 0xd7u;
                r3 = tc_call(0x800ed39cu, &a);
                r29 = (u32)(s8)r3;
                a.r[0] = rd32(rd32(param_r3 + 0x5cu) + 0xcu);
                a.r[1] = 9u;
                a.r[2] = 0xe7u;
                r3 = tc_call(0x800ed39cu, &a);
                r28 = (u32)(s8)r3;
                a.r[0] = rd32(rd32(param_r3 + 0x5cu) + 0xcu);
                a.r[1] = 9u;
                a.r[2] = 0xa3u;
                r3 = tc_call(0x800ed39cu, &a);
                f1 = tc_lastf();
                r27 = (u32)(s8)r3;
                r0 = (u32)(s8)rd32(r31 + 0x100u);
                r26 = r0;
                if (r0 != r29) {
                    if (r0 != r28) {
                        if (r0 != r27) {
                            r26 = r29;
                        } else {
                            f0 = (f64)rdf32(0x80576984u);
                            if ((f31 < f0) || (f31 == f0)) {
                                r26 = r28;
                            }
                        }
                    } else {
                        f0 = (f64)rdf32(0x80576980u);
                        if (!((f31 > f0) || (f31 == f0))) {
                            if (f31 < rdf64(0x80576978u)) {
                                r26 = r29;
                            }
                        } else {
                            r26 = r27;
                        }
                    }
                } else if (f31 > rdf64(0x80576978u)) {
                    r26 = r28;
                }
                r4 = (u32)(s8)r26;
                if (r0 != r4) {
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80576988u);
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    f1 = tc_callf(rd32(rd32(r31) + 0x54u), &a);
                    r4 = tc_lastr4();
                }
                r0 = (u32)(s8)r26;
                if (r0 != r29) {
                    if (r0 != r28) {
                        if (r0 == r27) {
                            a.f[0] = (f64)(f32)px_fdiv(f31, rdf64(0x805769a0u));
                            a.f[1] = (f64)rdf32(0x80576998u);
                            a.f[2] = (f64)rdf32(0x8057699cu);
                            f1 = tc_callf(0x800acaf8u, &a);
                            a.r[0] = r31;
                            a.r[1] = tc_lastr4();
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            f1 = tc_callf(rd32(rd32(r31) + 0x50u), &a);
                            r4 = tc_lastr4();
                        }
                    } else {
                        a.f[0] = (f64)(f32)px_fdiv(f31, rdf64(0x80576990u));
                        a.f[1] = (f64)rdf32(0x80576998u);
                        a.f[2] = (f64)rdf32(0x8057699cu);
                        f1 = tc_callf(0x800acaf8u, &a);
                        a.r[0] = r31;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        f1 = tc_callf(rd32(rd32(r31) + 0x50u), &a);
                        r4 = tc_lastr4();
                    }
                }
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x30u), &a);
                f1 = tc_lastf();
                r29 = r3;
                a.r[0] = r31;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                r4 = tc_lastr4();
                f2 = (f64)rdf32(r3);
                f1 = (f64)rdf32(0x80576964u);
                f0 = (f64)(f32)ppc_fabs((f64)(f32)(f2 - (f64)rdf32(r29)));
                r0 = (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
                if (r0 == 0u) {
                    f2 = (f64)rdf32(r3 + 4u);
                    f0 = (f64)(f32)ppc_fabs((f64)(f32)(f2 - (f64)rdf32(r29 + 4u)));
                    r0 = (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
                }
                if (r0 == 0u) {
                    f2 = (f64)rdf32(r3 + 8u);
                    f0 = (f64)rdf32(0x80576964u);
                    f1 = (f64)(f32)ppc_fabs((f64)(f32)(f2 - (f64)rdf32(r29 + 8u)));
                    r0 = (ppc_cntlzw(((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
                }
                if (r0 != 0u) {
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(r31) + 0x30u), &a);
                    f1 = tc_lastf();
                    r29 = r3;
                    a.r[0] = r31;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfa8u, rd32(r3));
                    wr32(0x817fdfacu, r0);
                    wr32(0x817fdfb0u, rd32(r3 + 8u));
                    a.r[0] = 0x817fdfa8u;
                    a.r[1] = r29;
                    a.r[2] = 0x817fdfa8u;
                    (void)tc_call(0x802343a4u, &a);
                    f0 = (f64)rdf32(0x80576960u);
                    wrf32d(0x817fdfbcu, f0);
                    wrf32d(0x817fdfb8u, f0);
                    wrf32d(0x817fdfb4u, f0);
                    a.r[0] = 0x817fdfa8u;
                    a.r[1] = 0x817fdfb4u;
                    (void)tc_call(0x802343e4u, &a);
                    a.f[0] = (f64)rdf32(0x817fdfb4u);
                    a.f[1] = (f64)rdf32(0x817fdfbcu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    if (!((f64)rdf32(0x80576968u) < f1)) {
                        a.f[0] = (f64)rdf32(0x817fdfb4u);
                        a.f[1] = (f64)rdf32(0x817fdfbcu);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f0 = (f64)rdf32(0x80576970u);
                        if (!((f0 > f1) || (f0 == f1))) {
                            a.f[0] = (f64)rdf32(0x817fdfb4u);
                            a.f[1] = (f64)rdf32(0x817fdfbcu);
                            f1 = tc_callf(0x80262c68u, &a);
                            r4 = tc_lastr4();
                            f1 = (f64)(f32)f1;
                        } else {
                            a.f[0] = (f64)rdf32(0x817fdfb4u);
                            a.f[1] = (f64)rdf32(0x817fdfbcu);
                            f1 = tc_callf(0x80262c68u, &a);
                            r4 = tc_lastr4();
                            f1 = (f64)(f32)f1;
                            f1 = (f64)(f32)((f64)rdf32(0x8057696cu) + f1);
                        }
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdfb4u);
                        a.f[1] = (f64)rdf32(0x817fdfbcu);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        f1 = (f64)(f32)f1;
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x8057696cu));
                    }
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    f1 = tc_callf(rd32(rd32(r31) + 0x24u), &a);
                    r4 = tc_lastr4();
                    f2 = 0.0;
                }
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                r4 = rd32(r3);
                r0 = rd32(r3 + 4u);
                f1 = (f64)rdf32(0x805769a8u);
                wr32(0x817fdfc0u, r4);
                wr32(0x817fdfc4u, r0);
                wr32(0x817fdfc8u, rd32(r3 + 8u));
                if (f31 < f1) {
                    f0 = (f64)rdf32(param_r3 + 0x9c0u);
                    if (((f0 > f1) || (f0 == f1)) && (u32)rd8(param_r3 + 0x9c4u) != 0u) {
                        wr8(param_r3 + 0x9c4u, 0u);
                        a.r[0] = r31;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                        r29 = r3;
                        r3 = tc_call(0x80212878u, &a);
                        a.r[0] = r3;
                        a.r[1] = 0xfc7u;
                        a.r[2] = r29;
                        (void)tc_call(0x8010a794u, &a);
                        a.f[0] = (f64)rdf32(0x805769acu);
                        a.r[0] = 0x3fu;
                        a.r[1] = 0x817fdfc0u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d783cu, &a);
                        r4 = tc_lastr4();
                        if (r3 != 0u) {
                            a.f[0] = (f64)rdf32(0x805769acu);
                            a.r[0] = r3;
                            (void)tc_call(0x80157f78u, &a);
                            r4 = tc_lastr4();
                        }
                    }
                }
                f1 = (f64)rdf32(0x805769b0u);
                if (((f31 > f1) || (f31 == f1)) && (f64)rdf32(param_r3 + 0x9c0u) < f1 && (u32)rd8(param_r3 + 0x9c4u) == 0u) {
                    wr8(param_r3 + 0x9c4u, 1u);
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                    r31 = r3;
                    r3 = tc_call(0x80212878u, &a);
                    a.r[0] = r3;
                    a.r[1] = 0xfc6u;
                    a.r[2] = r31;
                    (void)tc_call(0x8010a794u, &a);
                }
                if ((u32)rd8(param_r3 + 0x9c4u) != 0u) {
                    a.f[0] = (f64)rdf32(0x805769acu);
                    a.r[0] = 0xcdu;
                    a.r[1] = 0x817fdfc0u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    r3 = tc_call(0x800d7768u, &a);
                    r26 = r3;
                    if (r3 != 0u) {
                        a.f[0] = (f64)rdf32(0x80576998u);
                        a.r[0] = r3;
                        (void)tc_call(0x80157f78u, &a);
                        a.r[0] = r26;
                        a.r[1] = 5u;
                        (void)tc_call(0x80157f70u, &a);
                    }
                }
                wrf32d(param_r3 + 0x9c0u, f31);
            }
        }
    }
    return;
}
