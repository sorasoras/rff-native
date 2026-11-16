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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_pmul(f64 a, f64 c)
{
    f64 r = a * c;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

void fn_8010fd48(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f31 = (f64)rdf32(0x80574124u);
    f30 = f31;
    wrf32d(0x817fdfbcu, f31);
    r31 = 0x80361d08u;
    r29 = 0u;
    wrf32d(0x817fdfb8u, f31);
    wrf32d(0x817fdfb4u, f31);
    wrf32d(0x817fdfb0u, f31);
    wrf32d(0x817fdfacu, f31);
    wrf32d(0x817fdfa8u, f31);
    wrf32d(0x817fdfa4u, f31);
    wrf32d(0x817fdfa0u, f31);
    wrf32d(0x817fdf9cu, f31);
    do {
        r0 = rd32(r31 + 4u);
        r6 = rd32(r31);
        r0 = r0 * 0xcu;
        r7 = param_r4 + r0;
        r4 = rd32(param_r4 + r0);
        r0 = r6 * 0xcu;
        r6 = rd32(r7 + 4u);
        wr32(0x817fdf90u, r4);
        r30 = param_r4 + r0;
        wr32(0x817fdf94u, r6);
        wr32(0x817fdf98u, rd32(r7 + 8u));
        a.r[0] = 0x817fdf90u;
        a.r[1] = r30;
        a.r[2] = 0x817fdf90u;
        r3 = tc_call(0x802343a4u, &a);
        f1 = tc_lastf();
        f2 = (f64)rdf32(0x817fdf90u);
        f1 = (f64)rdf32(0x817fdf94u);
        f0 = (f64)rdf32(0x817fdf98u);
        r7 = rd32(param_r3);
        r6 = rd32(param_r3 + 4u);
        r0 = rd32(param_r3 + 8u);
        wrf32d(0x817fdfb4u, f2);
        wrf32d(0x817fdfb8u, f1);
        wrf32d(0x817fdfbcu, f0);
        wr32(0x817fdf84u, r7);
        wr32(0x817fdf88u, r6);
        wr32(0x817fdf8cu, r0);
        a.r[0] = 0x817fdf84u;
        a.r[1] = r30;
        a.r[2] = 0x817fdf84u;
        r3 = tc_call(0x802343a4u, &a);
        f1 = tc_lastf();
        f2 = (f64)rdf32(0x817fdf84u);
        f1 = (f64)rdf32(0x817fdf88u);
        f0 = (f64)rdf32(0x817fdf8cu);
        wrf32d(0x817fdfa8u, f2);
        wrf32d(0x817fdfacu, f1);
        wrf32d(0x817fdfb0u, f0);
        wrf32d(0x817fdf80u, f31);
        wrf32d(0x817fdf7cu, f31);
        wrf32d(0x817fdf78u, f31);
        a.r[0] = 0x817fdfb4u;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = 0x817fdf78u;
        f1 = tc_callf(0x80234484u, &a);
        r3 = tc_lastr();
        f2 = (f64)rdf32(0x817fdf78u);
        f1 = (f64)rdf32(0x817fdf7cu);
        f0 = (f64)rdf32(0x817fdf80u);
        wrf32d(0x817fdf9cu, f2);
        wrf32d(0x817fdfa0u, f1);
        wrf32d(0x817fdfa4u, f0);
        if (f31 == f30) {
            f30 = f1;
        } else {
            if ((f64)(f32)px_pmul(f30, f1) < f31) {
                return;
            }
        }
        r29 = r29 + 1u;
        r31 = r31 + 8u;
    } while ((s32)r29 < 4);
    return;
}
