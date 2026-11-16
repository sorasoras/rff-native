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

static f64 px_hi(f64 x)
{
    return (f64)px_w2f((u32)(px_f2b(x) >> 32));
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pack(f64 a, f64 b)
{
    return px_b2f(((u64)ppc_single_bits(a) << 32) | (u64)ppc_single_bits(b));
}

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_padd(f64 a, f64 b)
{
    f64 r = a + b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

u32 fn_800da1fc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfecu, 0u);
    r0 = rd32(param_1 + 0x78u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x80031998u, &a);
        f1 = px_pack((f64)rdf32(0x817fdfc8u), (f64)rdf32(0x817fdfc8u));
        f2 = px_pack((f64)rdf32(0x817fdfd0u), 1.0);
        wrf32d(0x817fdfa4u, px_hi(f1));
        wrf32d(0x817fdfa4u, px_lo(f1));
        wrf32d(0x817fdfacu, px_hi(f2));
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r6 = rd32(0x817fdfa8u);
        r0 = rd32(0x817fdfacu);
        wr32(0x817fdfbcu, rd32(0x817fdfa4u));
        wr32(0x817fdfc0u, r6);
        wr32(0x817fdfc4u, r0);
        a.r[0] = 0x817fdfbcu;
        a.r[1] = r3;
        a.r[2] = 0x817fdfbcu;
        (void)tc_call(0x80234380u, &a);
        f1 = px_pack((f64)rdf32(0x817fdfd4u), (f64)rdf32(0x817fdfd4u));
        f2 = px_pack((f64)rdf32(0x817fdfdcu), 1.0);
        wrf32d(0x817fdf98u, px_hi(f1));
        wrf32d(0x817fdf98u, px_lo(f1));
        wrf32d(0x817fdfa0u, px_hi(f2));
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r6 = rd32(0x817fdf9cu);
        r0 = rd32(0x817fdfa0u);
        wr32(0x817fdfb0u, rd32(0x817fdf98u));
        wr32(0x817fdfb4u, r6);
        wr32(0x817fdfb8u, r0);
        a.r[0] = 0x817fdfb0u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfb0u;
        f1 = tc_callf(0x80234380u, &a);
        r4 = tc_lastr4();
        f4 = (f64)rdf32(0x817fdfb4u);
        f0 = (f64)rdf32(0x805739f0u);
        f3 = (f64)(f32)ppc_fabs((f64)(f32)px_psub(f4, (f64)rdf32(0x817fdfc0u)));
        if (f3 < f0) {
            f0 = (f64)(f32)px_padd(f4, f0);
            wrf32d(0x817fdfb4u, f0);
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = f3;
        a.f[3] = f4;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = f1;
        a.r[0] = param_1 + 0x80u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfbcu;
        a.r[3] = 0x817fdfb0u;
        (void)tc_call(0x800ca4dcu, &a);
    }
    return param_1 + 0x80u;
}
