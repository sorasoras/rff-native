#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_80111d84(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x80574124u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    wrf32d(0x817fdfd4u, f0);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfc4u, f0);
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdfbcu, f0);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfb4u, f0);
    a.r[0] = 0x817fdfccu;
    (void)tc_call(0x8010fc28u, &a);
    a.r[0] = 0x817fdfc0u;
    (void)tc_call(0x8010fc8cu, &a);
    r6 = rd32(0x817fdfd0u);
    r0 = rd32(0x817fdfd4u);
    wr32(0x817fdf90u, rd32(0x817fdfccu));
    wr32(0x817fdf94u, r6);
    wr32(0x817fdf98u, r0);
    a.r[0] = 0x817fdf90u;
    a.r[1] = 0x817fdfc0u;
    a.r[2] = 0x817fdf90u;
    (void)tc_call(0x802343a4u, &a);
    f3 = (f64)rdf32(0x817fdf90u);
    r0 = 0u;
    f0 = (f64)rdf32(0x80574124u);
    f2 = (f64)rdf32(0x817fdf94u);
    f1 = (f64)rdf32(0x817fdf98u);
    wrf32d(0x817fdfb4u, f3);
    wrf32d(0x817fdfb8u, f2);
    wrf32d(0x817fdfbcu, f1);
    if ((f0 == f3 && f0 == f2) && f0 == f1) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0x817fdfb4u;
        f1 = tc_callf(0x80234440u, &a);
        f31 = f1;
        if (f1 < (f64)rdf32(0x805707e0u)) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfc0u;
            a.r[2] = 0x817fdfccu;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0x30u) + 0xcu), &a);
        } else {
            r6 = rd32(0x817fdfd0u);
            r0 = rd32(0x817fdfd4u);
            wr32(0x817fdfa8u, rd32(0x817fdfccu));
            wr32(0x817fdfacu, r6);
            wr32(0x817fdfb0u, r0);
            a.r[0] = 0x817fdfa8u;
            a.r[1] = 0x817fdfc0u;
            a.r[2] = 0x817fdfa8u;
            (void)tc_call(0x802343a4u, &a);
            f1 = (f64)rdf32(0x80574124u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfa8u) && f1 == (f64)rdf32(0x817fdfacu)) && f1 == (f64)rdf32(0x817fdfb0u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdfa8u;
                (void)tc_call(0x802343e4u, &a);
            }
            r28 = 0u;
            f3 = (f64)rdf32(0x80574124u);
            f5 = (f64)(f32)px_fdiv(f31, (f64)rdf32(0x805707e0u));
            f4 = (f64)rdf32(0x80574144u);
            f2 = (f64)rdf32(0x817fdfc0u);
            f1 = (f64)rdf32(0x817fdfc4u);
            f0 = (f64)rdf32(0x817fdfc8u);
            wrf32d(0x817fdfa4u, f3);
            f4 = (f64)(f32)(f4 + f5);
            wrf32d(0x817fdfa0u, f3);
            wrf32d(0x817fdf9cu, f3);
            wrf32d(0x817fdfccu, f2);
            wrf64(0x817fdfd8u, px_ctiw(f4, ppc_fctiwz(f4)));
            r29 = rd32(0x817fdfdcu);
            wrf32d(0x817fdfd0u, f1);
            r30 = r29 - 1u;
            wrf32d(0x817fdfd4u, f0);
            while ((s32)r28 < (s32)r29) {
                r5 = rd32(0x817fdfacu);
                r0 = rd32(0x817fdfb0u);
                f1 = (f64)rdf32(0x805707e0u);
                wr32(0x817fdf78u, rd32(0x817fdfa8u));
                wr32(0x817fdf7cu, r5);
                wr32(0x817fdf80u, r0);
                a.f[0] = f1;
                a.r[0] = 0x817fdf78u;
                a.r[1] = 0x817fdf78u;
                (void)tc_call(0x802343c8u, &a);
                r6 = rd32(0x817fdfd0u);
                r0 = rd32(0x817fdfd4u);
                wr32(0x817fdf84u, rd32(0x817fdfccu));
                wr32(0x817fdf88u, r6);
                wr32(0x817fdf8cu, r0);
                a.r[0] = 0x817fdf84u;
                a.r[1] = 0x817fdf78u;
                a.r[2] = 0x817fdf84u;
                (void)tc_call(0x80234380u, &a);
                f2 = (f64)rdf32(0x817fdf84u);
                f1 = (f64)rdf32(0x817fdf88u);
                f0 = (f64)rdf32(0x817fdf8cu);
                wrf32d(0x817fdf9cu, f2);
                wrf32d(0x817fdfa0u, f1);
                wrf32d(0x817fdfa4u, f0);
                if (r28 == r30) {
                    a.r[0] = 0x817fdf9cu;
                    f1 = tc_callf(0x8010fc28u, &a);
                    f2 = 0.0;
                }
                a.r[0] = (u32)param_1;
                a.r[1] = 0x817fdfccu;
                a.r[2] = 0x817fdf9cu;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                r3 = tc_call(rd32(rd32((u32)param_1 + 0x30u) + 0xcu), &a);
                if (r3 != 0u) {
                    r3 = 1u;
                    return r3;
                }
                r28 = r28 + 1u;
                f1 = (f64)rdf32(0x817fdfa0u);
                f0 = (f64)rdf32(0x817fdfa4u);
                wrf32d(0x817fdfccu, (f64)rdf32(0x817fdf9cu));
                wrf32d(0x817fdfd0u, f1);
                wrf32d(0x817fdfd4u, f0);
            }
            r3 = 0u;
        }
    }
    return r3;
}
