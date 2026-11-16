#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_8006a190(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r8 = 0x80471ed0u;
    r4 = 0u;
    ctr = 0xau;
    do {
        r5 = rd32(r8 + 0xbf8u);
        if (r5 != 0u) {
            f0 = (f64)rdf32(r5 + 0x18u);
            r0 = 0u;
            f1 = (f64)rdf32(param_4);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32(r5 + 0x24u);
                if ((f0 > f1) || (f0 == f1)) {
                    f0 = (f64)rdf32(r5 + 0x20u);
                    f1 = (f64)rdf32(param_4 + 8u);
                    if ((f0 < f1) || (f0 == f1)) {
                        f0 = (f64)rdf32(r5 + 0x2cu);
                        if ((f0 > f1) || (f0 == f1)) {
                            r0 = 1u;
                        }
                    }
                }
            }
            if (r0 != 0u) break;
        }
        r5 = rd32(r8 + 0xbfcu);
        if (r5 != 0u) {
            f0 = (f64)rdf32(r5 + 0x18u);
            r0 = 0u;
            f1 = (f64)rdf32(param_4);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32(r5 + 0x24u);
                if ((f0 > f1) || (f0 == f1)) {
                    f0 = (f64)rdf32(r5 + 0x20u);
                    f1 = (f64)rdf32(param_4 + 8u);
                    if ((f0 < f1) || (f0 == f1)) {
                        f0 = (f64)rdf32(r5 + 0x2cu);
                        if ((f0 > f1) || (f0 == f1)) {
                            r0 = 1u;
                        }
                    }
                }
            }
            if (r0 != 0u) break;
        }
        r8 = r8 + 8u;
        r4 = r4 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (rd32(param_1 + 0x290u) == 1u) {
        f2 = (f64)rdf32(0x8057268cu);
        f0 = (f64)(f32)((f64)rdf32(param_1 + 0x9acu) - (f64)rdf32(0x80572690u));
        if (!(f2 > f0)) {
            f2 = f0;
        }
        wrf32d(param_1 + 0x9acu, f2);
    } else {
        f2 = (f64)rdf32(0x805725e0u);
        f0 = (f64)(f32)((f64)rdf32(0x80572688u) + (f64)rdf32(param_1 + 0x9acu));
        if (!(f2 < f0)) {
            f2 = f0;
        }
        wrf32d(param_1 + 0x9acu, f2);
    }
    f0 = (f64)rdf32(param_1 + 0x9acu);
    f3 = (f64)rdf32(0x803d27a0u);
    f31 = (f64)rdf32(0x803d27acu);
    f2 = (f64)rdf32(0x803d27a4u);
    f1 = (f64)rdf32(0x803d27a8u);
    wrf32d(0x817fdfc8u, f3);
    wrf32d(0x817fdfccu, f2);
    wrf32d(0x817fdfd0u, f1);
    f3 = (f64)px_w2f(ppc_single_bits(f3));
    f2 = (f64)px_w2f(ppc_single_bits(f2));
    f1 = (f64)px_w2f(ppc_single_bits(f1));
    f0 = (f64)px_w2f(ppc_single_bits(f0));
    wrf32d(0x803d27a0u, f3);
    wrf32d(0x803d27a4u, f2);
    wrf32d(0x803d27a8u, f1);
    wrf32d(0x803d27acu, f0);
    a.r[0] = 0x803d27a0u;
    (void)tc_call(0x8004a4fcu, &a);
    if ((u32)param_5 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_4;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.r[4] = 0u;
        (void)tc_call(0x8006a8d8u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = param_4;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.r[4] = 0u;
        (void)tc_call(0x8006a420u, &a);
    }
    f2 = (f64)px_w2f(rd32(0x817fdfccu));
    f1 = (f64)px_w2f(rd32(0x817fdfd0u));
    wrf32d(0x803d27a0u, (f64)px_w2f(rd32(0x817fdfc8u)));
    wrf32d(0x803d27a4u, f2);
    wrf32d(0x803d27a8u, f1);
    wrf32d(0x803d27acu, (f64)px_w2f(ppc_single_bits(f31)));
    a.r[0] = 0x803d27a0u;
    (void)tc_call(0x8004a4fcu, &a);
    return;
}
