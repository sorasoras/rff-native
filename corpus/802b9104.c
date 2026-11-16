#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802b9104(u32 param_r3)
{
    u32 r0 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x805773b0u);
    f29 = (f64)rdf32(0x80577390u);
    r28 = param_r3 + 0xc4u;
    f30 = (f64)rdf32(0x805773a4u);
    r30 = param_r3 + 0xe8u;
    do {
        if ((u32)(s8)rd8(r28 + 8u) == 0u) {
            r27 = r28 + 0xcu;
            r29 = param_r3 + 0xe8u;
            do {
                if ((u32)(s8)rd8(r27 + 8u) == 0u) {
                    f28 = (f64)(f32)((f64)rdf32(r27) - (f64)rdf32(r28));
                    f27 = (f64)(f32)((f64)rdf32(r27 + 4u) - (f64)rdf32(r28 + 4u));
                    a.f[0] = (f64)(f32)((f64)(f32)(f28 * f28) + (f64)(f32)(f27 * f27));
                    f1 = tc_callf(0x80262ec0u, &a);
                    f0 = (f64)rdf32(param_r3 + 0x514u);
                    f4 = (f64)(f32)px_fdiv(f30, (f64)(f32)f1);
                    f3 = (f64)(f32)(f28 * f4);
                    f2 = (f64)(f32)(f27 * f4);
                    f4 = (f64)(f32)(f4 * (f64)rdf32(param_r3 + 0x510u));
                    wrf32d(0x817fdf88u, f3);
                    wrf32d(0x817fdf8cu, f2);
                    if (!(f4 < f0) && f4 != f0) {
                        f0 = (f64)rdf32(0x80570eb0u);
                        if (!(f4 > f0) && f4 != f0) {
                            f4 = (f64)(f32)(f4 - (f64)rdf32(param_r3 + 0x49cu));
                            if (f4 < f29) {
                                f4 = (f64)(f32)(f4 * (f64)rdf32(param_r3 + 0x508u));
                            } else {
                                f4 = (f64)(f32)(f4 * (f64)rdf32(param_r3 + 0x504u));
                            }
                            if (!(f4 > f30) && f4 != f30) {
                                f1 = (f64)(f32)((f64)(f32)((f64)rdf32(param_r3 + 0x494u) * (f64)rdf32(0x817fdf88u)) + (f64)(f32)((f64)rdf32(param_r3 + 0x498u) * (f64)rdf32(0x817fdf8cu)));
                                if (f1 < f29) {
                                    f1 = -f1;
                                    r0 = 1u;
                                } else {
                                    r0 = 0u;
                                }
                                f0 = (f64)rdf32(0x80570ebcu);
                                if (!(f1 < f0) && f1 != f0) {
                                    f1 = (f64)(f32)(f30 - f1);
                                    f0 = (f64)(f32)(f30 - f0);
                                    f0 = (f64)(f32)px_fdiv(f1, f0);
                                    f4 = (f64)(f32)(f4 + f0);
                                    if (f4 < f31) {
                                        f31 = f4;
                                        if (r0 != 0u) {
                                            r26 = r27;
                                            r25 = r28;
                                        } else {
                                            r26 = r28;
                                            r25 = r27;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                r27 = r27 + 0xcu;
            } while (r27 <= r29);
        }
        r28 = r28 + 0xcu;
    } while (r28 < r30);
    if ((f64)rdf32(0x805773b0u) == f31) {
        return;
    }
    r0 = rd32(r26 + 4u);
    wr32(param_r3 + 0xf4u, rd32(r26));
    wr32(param_r3 + 0xf8u, r0);
    wr32(param_r3 + 0xfcu, rd32(r26 + 8u));
    r0 = rd32(r25 + 4u);
    wr32(param_r3 + 0x100u, rd32(r25));
    wr32(param_r3 + 0x104u, r0);
    wr32(param_r3 + 0x108u, rd32(r25 + 8u));
    return;
}
