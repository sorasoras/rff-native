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

static f64 px_pdiv(f64 a, f64 b)
{
    f64 r = a / b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

void fn_803009b8(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    a.f[0] = param_2;
    a.f[1] = param_1;
    a.r[0] = param_5;
    a.r[1] = 0x817fdfccu;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x80300b38u, &a);
    f1 = (f64)rdf32(0x80577720u);
    f6 = -param_4;
    f2 = (f64)rdf32(0x80577728u);
    f5 = (f64)(f32)px_padd(f1, param_4);
    f3 = (f64)rdf32(0x817fdfccu);
    f7 = (f64)(f32)px_psub(f2, param_4);
    if (!(f3 < f5)) {
        if (!(f3 < f6)) {
            if (!(f3 < param_4)) {
                if (!(f3 < f7)) {
                    if (f7 != f2) {
                        f4 = (f64)(f32)px_psub(f7, f2);
                        f2 = (f64)(f32)px_padd((f64)(f32)px_pdiv((f64)(f32)px_pmul(f3, (f64)rdf32(0x805776fcu)), f4), (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)(f32)px_pmul(f7, (f64)rdf32(0x80577700u)), f2), f4));
                    } else {
                        f2 = (f64)rdf32(0x80577734u);
                    }
                } else {
                    f2 = (f64)rdf32(0x805776fcu);
                }
            } else if (f6 != param_4) {
                f4 = (f64)(f32)px_psub(f6, param_4);
                f2 = (f64)(f32)px_padd((f64)(f32)px_pdiv((f64)(f32)px_pmul(f3, (f64)rdf32(0x8057773cu)), f4), (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)(f32)px_pmul(f6, (f64)rdf32(0x805776fcu)), (f64)(f32)px_pmul(param_4, (f64)rdf32(0x80577730u))), f4));
            } else {
                f2 = (f64)rdf32(0x80577700u);
            }
        } else {
            f2 = (f64)rdf32(0x80577730u);
        }
    } else if (f1 != f5) {
        f4 = (f64)(f32)px_psub(f1, f5);
        f2 = (f64)(f32)px_padd((f64)(f32)px_pdiv((f64)(f32)px_pmul(f3, (f64)rdf32(0x805776fcu)), f4), (f64)(f32)px_pdiv((f64)(f32)px_psub(f2, (f64)(f32)px_pmul(f5, (f64)rdf32(0x80577700u))), f4));
    } else {
        f2 = (f64)rdf32(0x80577724u);
    }
    f2 = (f64)(f32)px_pmul(f2, param_3);
    f0 = (f64)rdf32(0x80577700u);
    wrf32d(param_6, (f64)(f32)px_pmul(f2, (f64)rdf32(0x817fdfc8u)));
    wrf32d(param_7, f0);
    return;
}
