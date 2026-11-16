#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8024894c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r25 = 0, r26 = 0, r27 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = rd32(param_r3 + 0xb4u);
    if (r5 < 8u) {
        f1 = (f64)rdf32(param_r3 + 0xbcu);
        f2 = (f64)rdf32(0x80576c1cu);
        if ((!(f1 < f2) && !(f1 > (f64)rdf32(param_r3 + 0xb8u))) && (rd32(param_r3 + 0xc0u) < 6u && !((f64)rdf32(param_r3 + 0xc4u) < f2))) {
            f0 = (f64)rdf32(param_r3 + 0xc8u);
            if (!(f0 < f2)) {
                f1 = (f64)rdf32(0x80576c20u);
                if (!(f0 > f1)) {
                    f0 = (f64)rdf32(param_r3 + 0xccu);
                    if (!(f0 < f2) && !(f0 > f1)) {
                        f0 = (f64)rdf32(param_r3 + 0xd0u);
                        if (!(f0 < f2) && !(f0 > f1)) {
                            f0 = (f64)rdf32(param_r3 + 0xd4u);
                            if (!(f0 < f2) && !(f0 > f1)) {
                                f0 = (f64)rdf32(param_r3 + 0xe0u);
                                if (!(f0 < f2) && !(f0 > f1)) {
                                    f0 = (f64)rdf32(param_r3 + 0xe4u);
                                    if (!(f0 < f2) && !(f0 > f1)) {
                                        wr32(param_r3 + 0xcu, 0u);
                                        wr32(param_r3 + 0x10u, rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fc73960u));
                                        if (r5 > 3u) {
                                            wrf32d(param_r3 + 0x18u, (f64)rdf32(0x80576c34u));
                                        } else {
                                            wrf32d(param_r3 + 0x18u, (f64)rdf32(0x80576c30u));
                                        }
                                        f1 = (f64)rdf32(0x80576c18u);
                                        f0 = (f64)rdf32(param_r3 + 0xbcu);
                                        wr32(param_r3 + 0x28u, 0u);
                                        f1 = (f64)(f32)(f1 * f0);
                                        a.f[0] = f1;
                                        r3 = tc_call(0x802558e4u, &a);
                                        wr32(param_r3 + 0x2cu, r3);
                                        f29 = rdf64(0x80576c50u);
                                        r27 = param_r3;
                                        f30 = (f64)rdf32(0x80576c38u);
                                        f31 = (f64)rdf32(0x80576c18u);
                                        r25 = 0u;
                                        r26 = 0u;
                                        do {
                                            wr32(r27 + 0x4cu, 0u);
                                            f1 = rdf64(0x80576c40u);
                                            r0 = rd32(r26 + ((rd32(param_r3 + 0xc0u) << 4u) & 0xfffffff0u) - 0x7fc73940u);
                                            wr32(r27 + 0x54u, r0);
                                            a.f[0] = f1;
                                            a.f[1] = (f64)(f32)px_fdiv((f64)(f32)(f30 * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f29)), (f64)(f32)(f31 * (f64)rdf32(param_r3 + 0xc4u)));
                                            f1 = tc_callf(0x80262c74u, &a);
                                            r25 = r25 + 1u;
                                            r26 = r26 + 4u;
                                            wrf32d(r27 + 0x64u, (f64)(f32)f1);
                                            r27 = r27 + 4u;
                                        } while (r25 < 2u);
                                        r0 = rd32(param_r3 + 0xc0u);
                                        wr32(param_r3 + 0x84u, 0u);
                                        r0 = (r0 << 4u) & 0xfffffff0u;
                                        r3 = r0 - 0x7fc73940u;
                                        f1 = (f64)rdf32(0x80576c20u);
                                        f0 = (f64)rdf32(param_r3 + 0xccu);
                                        wr32(param_r3 + 0x8cu, rd32(r3 + 8u));
                                        f1 = (f64)(f32)(f1 - f0);
                                        f0 = (f64)rdf32(0x80576c48u);
                                        wr32(param_r3 + 0x88u, 0u);
                                        f2 = (f64)rdf32(param_r3 + 0xc8u);
                                        wr32(param_r3 + 0x90u, rd32(r3 + 0xcu));
                                        wrf32d(param_r3 + 0x9cu, f2);
                                        wrf32d(param_r3 + 0xacu, f1);
                                        if (f1 > f0) {
                                            wrf32d(param_r3 + 0xacu, f0);
                                        }
                                        f0 = (f64)rdf32(0x80576c1cu);
                                        wrf32d(param_r3 + 0xa0u, f0);
                                        wrf32d(param_r3 + 0xa4u, f0);
                                        wrf32d(param_r3 + 0xa8u, f0);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
