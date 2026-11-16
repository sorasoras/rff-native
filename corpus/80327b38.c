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

static f64 px_pfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    u64 bits = px_f2b(s);
    if ((bits & 0x1fffffffull) == 0x10000000ull) {
        f64 ap = b - s, bp = s + ap, da = a * c + ap, db = b - bp, err = da + db;
        if (err != 0.0) { if ((err > 0.0) == (s > 0.0)) bits += 1; else bits -= 1; }
    }
    return px_b2f(bits);
}

u32 fn_80327b38(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(param_1 + 4u, (u32)param_2);
    wr32(param_1, (u32)param_3);
    a.r[0] = rd32((u32)param_3 + 0x20u);
    a.r[1] = param_1 + 8u;
    (void)tc_call(0x80313b9cu, &a);
    a.r[0] = (u32)param_3;
    a.r[1] = param_1 + 0x38u;
    (void)tc_call(0x8031efa8u, &a);
    a.r[0] = param_1 + 0x38u;
    a.r[1] = param_1 + 0x68u;
    (void)tc_call(0x8023386cu, &a);
    f2 = (f64)rdf32(param_1 + 0x2cu);
    f1 = (f64)rdf32(param_1 + 0x1cu);
    wrf32d(0x817fdfe8u, (f64)rdf32(param_1 + 0xcu));
    wrf32d(0x817fdfecu, f1);
    wrf32d(0x817fdff0u, f2);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_1 + 0x68u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802f031cu, &a);
    f1 = px_pack((f64)rdf32(0x817fdfecu), (f64)rdf32(0x817fdfecu));
    f2 = px_pack((f64)rdf32(0x817fdfe8u), 1.0);
    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f1)));
    f2 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f2), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f2), px_lo(f2), px_lo(f1)));
    f1 = px_pack((f64)(f32)px_padd(px_hi(f2), px_lo(f1)), px_lo(f1));
    if (!(f1 < (f64)rdf32(0x80577c08u))) {
        a.f[0] = f1;
        f1 = tc_callf(0x802eff54u, &a);
        f2 = px_pack((f64)rdf32(0x817fdfe8u), (f64)rdf32(0x817fdfe8u));
        r0 = 1u;
        f0 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)));
        f2 = px_pack((f64)rdf32(0x817fdff0u), 1.0);
        wrf32d(0x817fdfe8u, px_hi(f0));
        wrf32d(0x817fdfe8u, px_lo(f0));
        wrf32d(0x817fdff0u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)))));
    } else {
        r0 = 0u;
    }
    if (r0 == 0u) {
        f1 = (f64)rdf32(0x80577be4u);
        f0 = (f64)rdf32(0x80577be0u);
        wrf32d(0x817fdfc4u, f1);
        wrf32d(0x817fdfc8u, f0);
        wrf32d(0x817fdfccu, f1);
        wrf32d(0x817fdfe8u, f1);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdff0u, f1);
    }
    f3 = (f64)rdf32(param_1 + 0x34u);
    wrf32d(param_1 + 0x98u, (f64)rdf32(0x817fdfe8u));
    f2 = (f64)rdf32(param_1 + 0x24u);
    f1 = (f64)rdf32(param_1 + 0x14u);
    wrf32d(param_1 + 0x9cu, (f64)rdf32(0x817fdfecu));
    wrf32d(param_1 + 0xa0u, (f64)rdf32(0x817fdff0u));
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfe0u, f2);
    wrf32d(0x817fdfe4u, f3);
    a.r[0] = param_1 + 0x68u;
    a.r[1] = 0x817fdfdcu;
    a.r[2] = 0x817fdfdcu;
    (void)tc_call(0x8023411cu, &a);
    wrf32d(param_1 + 0xa4u, (f64)rdf32(0x817fdfdcu));
    wrf32d(param_1 + 0xa8u, (f64)rdf32(0x817fdfe0u));
    wrf32d(param_1 + 0xacu, (f64)rdf32(0x817fdfe4u));
    r0 = (u32)rd8(rd32((u32)param_3 + 0x24u) + 0x14au);
    c0lt = (s32)r0 < 6;
    if (r0 != 6u) {
        if (!c0lt) {
            if ((s32)r0 >= 8) {
                return param_1;
            }
        } else if ((s32)r0 < 5) {
            return param_1;
        }
        f0 = (f64)rdf32(param_1 + 0x7cu);
        wrf32d(0x817fdfd8u, (f64)rdf32(param_1 + 0x8cu));
        f1 = (f64)rdf32(param_1 + 0x6cu);
        wrf32d(0x817fdfd4u, f0);
        f0 = (f64)rdf32(0x80577c08u);
        f2 = px_pack((f64)rdf32(0x817fdfd4u), (f64)rdf32(0x817fdfd4u));
        wrf32d(0x817fdfd0u, f1);
        f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
        f1 = px_pack((f64)rdf32(0x817fdfd0u), 1.0);
        f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f1), px_lo(f2)));
        f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_lo(f2)), px_lo(f2));
        if (!(f1 < f0)) {
            a.f[0] = f1;
            f1 = tc_callf(0x802eff54u, &a);
            f2 = px_pack((f64)rdf32(0x817fdfd0u), (f64)rdf32(0x817fdfd0u));
            r0 = 1u;
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)));
            f2 = px_pack((f64)rdf32(0x817fdfd8u), 1.0);
            wrf32d(0x817fdfd0u, px_hi(f0));
            wrf32d(0x817fdfd0u, px_lo(f0));
            wrf32d(0x817fdfd8u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)))));
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) {
            f1 = (f64)rdf32(0x80577be4u);
            f0 = (f64)rdf32(0x80577be0u);
            wrf32d(0x817fdfb8u, f1);
            wrf32d(0x817fdfbcu, f0);
            wrf32d(0x817fdfc0u, f1);
            wrf32d(0x817fdfd0u, f1);
            wrf32d(0x817fdfd4u, f0);
            wrf32d(0x817fdfd8u, f1);
        }
        f1 = (f64)rdf32(0x817fdfd4u);
        f0 = (f64)rdf32(0x817fdfd8u);
        wrf32d(param_1 + 0xb0u, (f64)rdf32(0x817fdfd0u));
        wrf32d(param_1 + 0xb4u, f1);
        wrf32d(param_1 + 0xb8u, f0);
    }
    return param_1;
}
