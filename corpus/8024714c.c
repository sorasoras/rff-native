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

void fn_8024714c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = rd32(param_r3 + 0x110u);
    if (r4 < 8u) {
        f4 = (f64)rdf32(param_r3 + 0x118u);
        f2 = (f64)rdf32(0x80576bc4u);
        if ((!(f4 < f2) && !(f4 > (f64)rdf32(param_r3 + 0x114u))) && (rd32(param_r3 + 0x11cu) < 6u && !((f64)rdf32(param_r3 + 0x120u) < f2))) {
            f0 = (f64)rdf32(param_r3 + 0x124u);
            if (!(f0 < f2)) {
                f1 = (f64)rdf32(0x80576bc8u);
                if (!(f0 > f1)) {
                    f0 = (f64)rdf32(param_r3 + 0x128u);
                    if (!(f0 < f2) && !(f0 > f1)) {
                        f0 = (f64)rdf32(param_r3 + 0x12cu);
                        if (!(f0 < f2) && !(f0 > f1)) {
                            f3 = (f64)rdf32(param_r3 + 0x130u);
                            if (!(f3 < f2) && !(f3 > f1)) {
                                f0 = (f64)rdf32(param_r3 + 0x134u);
                                if (!(f0 < f2) && !(f0 > f1)) {
                                    f0 = (f64)rdf32(param_r3 + 0x140u);
                                    if (!(f0 < f2) && !(f0 > f1)) {
                                        f0 = (f64)rdf32(param_r3 + 0x144u);
                                        if (!(f0 < f2) && !(f0 > f1)) {
                                            r8 = r4 * 0xcu;
                                            f2 = (f64)rdf32(0x80576bccu);
                                            r7 = r8 - 0x7fc73b00u;
                                            f1 = (f64)(f32)((f64)rdf32(0x80576bc0u) * f4);
                                            r6 = rd32(r7 + 8u);
                                            r4 = r8 - 0x7fc73aa0u;
                                            wr32(param_r3 + 0x18u, r6);
                                            wr32(param_r3 + 0xcu, r6 - rd32(r8 - 0x7fc73b00u));
                                            wrf32d(param_r3 + 0x20u, (f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32(r8 - 0x7fc73aa0u))));
                                            wr32(param_r3 + 0x10u, r6 - rd32(r7 + 4u));
                                            wrf32d(param_r3 + 0x24u, (f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32(r4 + 4u))));
                                            wr32(param_r3 + 0x14u, r6 - rd32(r7 + 8u));
                                            f0 = (f64)(f32)(f3 * (f64)rdf32(r4 + 8u));
                                            wr32(param_r3 + 0x38u, 0u);
                                            f0 = (f64)(f32)(f2 * f0);
                                            wrf32d(param_r3 + 0x28u, f0);
                                            a.f[0] = f1;
                                            r3 = tc_call(0x802558e4u, &a);
                                            wr32(param_r3 + 0x3cu, r3);
                                            r26 = param_r3;
                                            f29 = rdf64(0x80576bf8u);
                                            f30 = (f64)rdf32(0x80576be0u);
                                            r24 = 0u;
                                            f31 = (f64)rdf32(0x80576bc0u);
                                            r25 = 0u;
                                            do {
                                                wr32(r26 + 0x68u, 0u);
                                                f1 = rdf64(0x80576be8u);
                                                r0 = rd32(r25 + ((rd32(param_r3 + 0x11cu) << 5u) & 0xffffffe0u) - 0x7fc73a40u);
                                                wr32(r26 + 0x74u, r0);
                                                a.f[0] = f1;
                                                a.f[1] = (f64)(f32)px_fdiv((f64)(f32)(f30 * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f29)), (f64)(f32)(f31 * (f64)rdf32(param_r3 + 0x120u)));
                                                f1 = tc_callf(0x80262c74u, &a);
                                                r24 = r24 + 1u;
                                                r25 = r25 + 4u;
                                                wrf32d(r26 + 0x8cu, (f64)(f32)f1);
                                                r26 = r26 + 4u;
                                            } while (r24 < 3u);
                                            r0 = rd32(param_r3 + 0x11cu);
                                            wr32(param_r3 + 0xb0u, 0u);
                                            r0 = (r0 << 5u) & 0xffffffe0u;
                                            r3 = r0 - 0x7fc73a40u;
                                            f1 = (f64)(f32)((f64)rdf32(0x80576bc8u) - (f64)rdf32(param_r3 + 0x128u));
                                            f0 = (f64)rdf32(0x80576bf0u);
                                            wr32(param_r3 + 0xb8u, rd32(r3 + 0xcu));
                                            f2 = (f64)rdf32(param_r3 + 0x124u);
                                            wr32(param_r3 + 0xb4u, 0u);
                                            wr32(param_r3 + 0xbcu, rd32(r3 + 0x10u));
                                            wr32(param_r3 + 0xd4u, 0u);
                                            wr32(param_r3 + 0xe0u, rd32(r3 + 0x14u));
                                            wr32(param_r3 + 0xd8u, 0u);
                                            wr32(param_r3 + 0xe4u, rd32(r3 + 0x18u));
                                            wr32(param_r3 + 0xdcu, 0u);
                                            wr32(param_r3 + 0xe8u, rd32(r3 + 0x1cu));
                                            wrf32d(param_r3 + 0xf8u, f2);
                                            wrf32d(param_r3 + 0x108u, f1);
                                            if (f1 > f0) {
                                                wrf32d(param_r3 + 0x108u, f0);
                                            }
                                            f0 = (f64)rdf32(0x80576bc4u);
                                            wrf32d(param_r3 + 0xfcu, f0);
                                            wrf32d(param_r3 + 0x100u, f0);
                                            wrf32d(param_r3 + 0x104u, f0);
                                        }
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
