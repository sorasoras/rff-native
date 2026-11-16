#include "tc_rt.h"

void fn_8013dd20(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(param_1 + 0xb20u) != 0u) {
        r0 = rd32(param_1 + 0xb2cu);
        if (r0 != 1u) {
            if (r0 == 2u) {
                a.r[0] = 0x804b9e80u;
                a.r[1] = rd32(param_1 + 0xb24u);
                r3 = tc_call(0x8012113cu, &a);
                if (r3 == 0u) {
                    a.r[0] = param_1;
                    (void)tc_call(0x8013e23cu, &a);
                } else {
                    a.r[0] = rd32(0x805706e8u);
                    r3 = tc_call(0x8007d150u, &a);
                    if (rd32(r3 + 4u) != 2u) {
                        a.r[0] = 0x36u;
                        r3 = tc_call(0x8014d9a4u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0u && (rd32(0x8057118cu) & 0x800u) != 0u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                            a.r[0] = 0x804b9e80u;
                            a.r[1] = rd32(param_1 + 0xb24u);
                            a.r[2] = r3;
                            f1 = tc_callf(0x80120914u, &a);
                            r4 = tc_lastr4();
                            if (rd32(param_1 + 0xb28u) == 0u) {
                                a.r[0] = param_1;
                                (void)tc_call(0x80093790u, &a);
                                return;
                            }
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                            r5 = rd32(r3);
                            wr32(0x817fdfd8u, rd32(r3 + 4u));
                            r3 = rd32(r3 + 8u);
                            f1 = (f64)rdf32(param_1 + 0xb4u);
                            f0 = (f64)rdf32(0x817fdfd8u);
                            wr32(0x817fdfc8u, r5);
                            f0 = (f64)(f32)(f0 + f1);
                            wr32(0x817fdfd0u, r3);
                            wrf32d(0x817fdfd8u, f0);
                            r0 = rd32(0x817fdfd8u);
                            wr32(0x817fdfd4u, r5);
                            wr32(0x817fdfccu, r0);
                            wr32(0x817fdfdcu, r3);
                            a.r[0] = rd32(param_1 + 0xb28u);
                            a.r[1] = 0x817fdfc8u;
                            (void)tc_call(0x8015811cu, &a);
                            a.r[0] = param_1;
                            (void)tc_call(0x80093790u, &a);
                            return;
                        }
                    }
                    a.r[0] = param_1;
                    (void)tc_call(0x8013e23cu, &a);
                }
            }
        } else if ((rd32(0x8057118cu) & 0x800u) != 0u) {
            f1 = (f64)(f32)((f64)rdf32(param_1 + 0xb30u) - (f64)rdf32(0x8057441cu));
            c0lt = f1 < (f64)rdf32(0x80574418u);
            wrf32d(param_1 + 0xb30u, f1);
            if (c0lt) {
                a.r[0] = rd32(0x805706e8u);
                r3 = tc_call(0x8007d150u, &a);
                if (rd32(r3 + 4u) != 2u) {
                    a.r[0] = 0x36u;
                    r3 = tc_call(0x8014d9a4u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 != 0u) {
                        wr32(param_1 + 0xb2cu, 2u);
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                        r30 = r3;
                        a.r[0] = param_1;
                        r3 = tc_call(0x8013e2b4u, &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = r3;
                        a.r[2] = r30;
                        a.r[3] = 2u;
                        r3 = tc_call(0x8010a6f4u, &a);
                        wr32(param_1 + 0xb24u, r3);
                        if (r3 == 0xffffffffu) {
                            a.r[0] = param_1;
                            (void)tc_call(0x8013e23cu, &a);
                        } else {
                            f1 = tc_callf(0x80040a00u, &a);
                            f3 = (f64)rdf32(0x80574428u);
                            f2 = (f64)rdf32(0x80574424u);
                            f1 = ppc_fmadds(f3, f1, f2);
                            wrf32d(param_1 + 0xb30u, (f64)(f32)((f64)rdf32(0x80574420u) * f1));
                            a.r[0] = param_1;
                            a.r[1] = tc_lastr4();
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                            r7 = rd32(r3);
                            f1 = (f64)rdf32(0x8057441cu);
                            wr32(0x817fdfe4u, rd32(r3 + 4u));
                            wr32(0x817fdfe0u, r7);
                            f0 = (f64)rdf32(0x817fdfe4u);
                            wr32(0x817fdfe8u, rd32(r3 + 8u));
                            f0 = (f64)(f32)(f0 + (f64)rdf32(param_1 + 0xb4u));
                            wrf32d(0x817fdfe4u, f0);
                            a.f[0] = f1;
                            a.r[0] = 0x33u;
                            a.r[1] = 0x817fdfe0u;
                            a.r[2] = 0x804b15c0u;
                            a.r[3] = 0x804890c8u;
                            r3 = tc_call(0x800d7768u, &a);
                            wr32(param_1 + 0xb28u, r3);
                        }
                    }
                }
            }
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x80093790u, &a);
    return;
}
