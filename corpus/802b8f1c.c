#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802b8f1c(u32 param_r3)
{
    u32 r0 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = (f64)rdf32(0x80570eb8u);
    f29 = (f64)rdf32(0x80577390u);
    r29 = param_r3 + 0xc4u;
    f31 = (f64)rdf32(0x805773a4u);
    r31 = param_r3 + 0xe8u;
    do {
        if ((u32)(s8)rd8(r29 + 8u) == 0u) {
            r28 = r29 + 0xcu;
            r30 = param_r3 + 0xe8u;
            do {
                if ((u32)(s8)rd8(r28 + 8u) == 0u) {
                    f27 = (f64)(f32)((f64)rdf32(r28) - (f64)rdf32(r29));
                    f28 = (f64)(f32)((f64)rdf32(r28 + 4u) - (f64)rdf32(r29 + 4u));
                    a.f[0] = (f64)(f32)((f64)(f32)(f27 * f27) + (f64)(f32)(f28 * f28));
                    f1 = tc_callf(0x80262ec0u, &a);
                    f5 = (f64)rdf32(param_r3 + 0xb0u);
                    f2 = (f64)rdf32(param_r3 + 0xb4u);
                    f3 = (f64)(f32)px_fdiv(f31, (f64)(f32)f1);
                    f0 = (f64)rdf32(param_r3 + 0x514u);
                    f27 = (f64)(f32)(f27 * f3);
                    f28 = (f64)(f32)(f28 * f3);
                    f6 = (f64)(f32)((f64)rdf32(param_r3 + 0x510u) * f3);
                    f3 = (f64)(f32)(f2 * f28);
                    f2 = (f64)(f32)(f2 * f27);
                    f3 = (f64)(f32)((f64)(f32)(f5 * f27) + f3);
                    f2 = (f64)(f32)(f2 - (f64)(f32)(f5 * f28));
                    if (!(f6 < f0) && f6 != f0) {
                        f0 = (f64)rdf32(0x80570eb0u);
                        if (!(f6 > f0) && f6 != f0) {
                            f0 = (f64)(f32)((f64)(f32)((f64)rdf32(param_r3 + 0x4b8u) * f3) + (f64)(f32)((f64)rdf32(param_r3 + 0x4bcu) * f2));
                            if (!(f0 < f29)) {
                                if (f0 > f30) {
                                    f30 = f0;
                                    r27 = r29;
                                    r26 = r28;
                                }
                            } else {
                                f0 = -f0;
                                if (f0 > f30) {
                                    f30 = f0;
                                    r27 = r28;
                                    r26 = r29;
                                }
                            }
                        }
                    }
                }
                r28 = r28 + 0xcu;
            } while (r28 <= r30);
        }
        r29 = r29 + 0xcu;
    } while (r29 < r31);
    if (f30 != (f64)rdf32(0x80570eb8u)) {
        r0 = rd32(r27 + 4u);
        wr32(param_r3 + 0xf4u, rd32(r27));
        wr32(param_r3 + 0xf8u, r0);
        wr32(param_r3 + 0xfcu, rd32(r27 + 8u));
        r0 = rd32(r26 + 4u);
        wr32(param_r3 + 0x100u, rd32(r26));
        wr32(param_r3 + 0x104u, r0);
        wr32(param_r3 + 0x108u, rd32(r26 + 8u));
    }
    return;
}
