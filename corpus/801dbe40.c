#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801dbe40(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    f28 = (f64)rdf32(0x805761a8u);
    r29 = param_r3;
    f27 = (f64)rdf32(0x805761b8u);
    r28 = param_r3 + 0x78u;
    f30 = (f64)rdf32(0x805761d8u);
    r27 = param_r3 + 4u;
    f29 = (f64)rdf32(0x805761c8u);
    f31 = rdf64(0x805761d0u);
    r24 = 0u;
    f22 = (f64)rdf32(0x805761c0u);
    r26 = 0u;
    f23 = (f64)rdf32(0x805761dcu);
    r25 = 0u;
    f24 = (f64)rdf32(0x805761c4u);
    f25 = (f64)rdf32(0x805761e0u);
    f26 = (f64)rdf32(0x805761e4u);
    do {
        if (rd32(r29 + 0x100u) != 0u) {
            if ((f64)rdf32(r29 + 0xf0u) > f27 && (f64)rdf32(r29 + 0x104u) > f28) {
                wrf32d(r29 + 0x104u, f29);
                wrf32d(r29 + 0xf0u, f27);
                wr32(r29 + 0x100u, 0u);
            } else {
                f1 = (f64)(f32)((f64)rdf32(r29 + 0x104u) + f30);
                wrf32d(r29 + 0x104u, f1);
                wrf32d(r29 + 0xf0u, (f64)(f32)((f64)rdf32(r29 + 0xf0u) + f1));
            }
            f1 = (f64)rdf32(r29 + 0xf0u);
            wrf32d(r29 + 0x7cu, (f64)rdf32(r29 + 0xecu));
            wrf32d(r29 + 0x80u, f1);
            f1 = (f64)rdf32(r29 + 0xf0u);
            wrf32d(r29 + 8u, (f64)rdf32(r29 + 0xecu));
            wrf32d(r29 + 0xcu, f1);
        }
        wr32(r29 + 0xa0u, 1u);
        wr32(r29 + 0x2cu, 1u);
        a.r[0] = r28;
        (void)tc_call(0x8005250cu, &a);
        a.r[0] = r27;
        (void)tc_call(0x8005250cu, &a);
        wrf32d(r29 + 0xdcu, (f64)(f32)((f64)rdf32(param_r3 + 0x414u) + (f64)(f32)(px_b2f((u64)(r26 ^ 0x80000000u) | 0x4330000000000000ull) - f31)));
        a.f[0] = (f64)(f32)(f23 * ppc_fmadds((f64)rdf32(param_r3 + 0x414u), f22, (f64)(f32)(px_b2f((u64)(r25 ^ 0x80000000u) | 0x4330000000000000ull) - f31)));
        f1 = tc_callf(0x80262704u, &a);
        f0 = (f64)(f32)f1;
        if (f0 < f28) {
            f0 = f28;
        }
        if (f24 != f0 && f28 == f0) {
            wrf32d(r29 + 0x40u, f28);
            wrf32d(r29 + 0x44u, f28);
            wrf32d(r29 + 0x48u, f22);
            wrf32d(r29 + 0x4cu, f24);
        }
        r5 = rd32(0x805711ccu);
        if ((rd32(r5 + 0xfcu) - 1u) <= 1u && ((f0 > f25) || (f0 == f25))) {
            r3 = rd32(0x803541bcu);
            if (r3 == 0u) {
                r4 = 0u;
            } else {
                r0 = rd32(r5 + 0xfcu);
                if (r0 == 1u) {
                    r4 = rd32(0x80354140u);
                } else {
                    if (r0 == 2u) {
                        r4 = rd32(0x80354174u);
                    } else {
                        r4 = 0u;
                    }
                }
            }
            if (r3 == 0u) {
                r0 = 0u;
            } else {
                r0 = rd32(r5 + 0xfcu);
                if (r0 == 1u) {
                    r0 = r4 & rd32(rd32(0x80354198u));
                } else {
                    if (r0 == 2u) {
                        r0 = r4 & rd32(rd32(0x803541a8u));
                    } else {
                        r0 = 0u;
                    }
                }
            }
            if (r0 != 0u) {
                wrf32d(r29 + 0x40u, f22);
                wrf32d(r29 + 0x44u, f28);
                wrf32d(r29 + 0x48u, f24);
                wrf32d(r29 + 0x4cu, f24);
                wr32(r29 + 0x100u, 1u);
            }
        }
        f4 = ppc_fmadds(f26, f0, f24);
        r24 = r24 + 1u;
        r28 = r28 + 0x104u;
        r27 = r27 + 0x104u;
        r26 = r26 + 0x5au;
        r25 = r25 - 0x5au;
        f1 = ppc_fmadds((f64)(f32)((f64)rdf32(r29 + 0xfcu) - f4), f22, (f64)rdf32(r29 + 0xf0u));
        wrf32d(r29 + 8u, ppc_fmadds((f64)(f32)((f64)rdf32(r29 + 0xf8u) - f4), f22, (f64)rdf32(r29 + 0xecu)));
        wrf32d(r29 + 0xcu, f1);
        wrf32d(r29 + 0x18u, f4);
        wrf32d(r29 + 0x14u, f4);
        r29 = r29 + 0x104u;
    } while ((s32)r24 < 4);
    wrf32d(param_r3 + 0x414u, (f64)(f32)((f64)rdf32(param_r3 + 0x414u) + (f64)rdf32(0x805761e8u)));
    return;
}
