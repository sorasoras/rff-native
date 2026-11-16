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

void fn_80330010(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0, t33 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = (u32)rd8((u32)param_3 + 0xaeu);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    do {
        if (r0 != 7u) {
            r0 = (u32)rd8((u32)param_3 + 0xb2u) & 0x38u;
            if (r0 <= 0x18u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r4 = rd32(r0 - 0x7fc623a8u);
                sw_ = r4;
                switch (sw_) {
                case 0x803301c4u:
                    fl_ = 2u;
                    break;
                case 0x803301a0u:
                    a.r[0] = param_1;
                    a.r[1] = (u32)param_4 + 8u;
                    a.r[2] = 0x805705b0u;
                    (void)tc_call(0x802f031cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = (u32)param_4 + 0x68u;
                    a.r[2] = param_1;
                    (void)tc_call(0x802f031cu, &a);
                    fl_ = 1u;
                    break;
                case 0x803301e0u:
                    a.r[0] = param_1;
                    a.r[1] = (u32)param_4 + 8u;
                    a.r[2] = 0x805705c8u;
                    (void)tc_call(0x802f031cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = (u32)param_4 + 0x68u;
                    a.r[2] = param_1;
                    (void)tc_call(0x802f031cu, &a);
                    fl_ = 1u;
                    break;
                case 0x80330204u:
                    f0 = (f64)rdf32(0x80577cb4u);
                    wrf32d(0x817fdfe8u, f0);
                    wrf32d(0x817fdfecu, f0);
                    wrf32d(0x817fdff0u, f0);
                    a.r[0] = param_1;
                    a.r[1] = (u32)param_4 + 8u;
                    a.r[2] = 0x817fdfe8u;
                    (void)tc_call(0x802f031cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = (u32)param_4 + 0x68u;
                    a.r[2] = param_1;
                    (void)tc_call(0x802f031cu, &a);
                    fl_ = 1u;
                    break;
                default:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = (u32)param_3;
                    a.r[3] = (u32)param_4;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    r3 = tc_call(sw_, &a);
                    r0 = 0u;
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    r11 = 0u;
                    r12 = 0u;
                    f0 = 0.0;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    f9 = 0.0;
                    f10 = 0.0;
                    f11 = 0.0;
                    f12 = 0.0;
                    f13 = 0.0;
                    ctr = 0u;
                    return;
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
            }
            f1 = (f64)rdf32((u32)param_4 + 0x9cu);
            f0 = (f64)rdf32((u32)param_4 + 0xa0u);
            wrf32d(param_1, (f64)rdf32((u32)param_4 + 0x98u));
            wrf32d(param_1 + 4u, f1);
            wrf32d(param_1 + 8u, f0);
            return;
        }
        r0 = (u32)rd8((u32)param_3 + 0xb2u) & 0x38u;
        if (r0 <= 0x18u) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r4 = rd32(r0 - 0x7fc62344u);
            sw_ = r4;
            switch (sw_) {
            case 0x80330088u:
                fl_ = 4u;
                break;
            case 0x80330060u:
                f2 = (f64)rdf32((u32)param_4 + 0x88u);
                f1 = (f64)rdf32((u32)param_4 + 0x78u);
                f0 = (f64)rdf32((u32)param_4 + 0x68u);
                wrf32d(0x817fdfe0u, f1);
                wrf32d(0x817fdfdcu, f0);
                wrf32d(0x817fdfe4u, f2);
                wrf32d(param_1, f0);
                wrf32d(param_1 + 4u, f1);
                wrf32d(param_1 + 8u, f2);
                fl_ = 3u;
                break;
            case 0x803300b0u:
                f2 = (f64)rdf32((u32)param_4 + 0x90u);
                f1 = (f64)rdf32((u32)param_4 + 0x80u);
                f0 = (f64)rdf32((u32)param_4 + 0x70u);
                wrf32d(0x817fdfc8u, f1);
                wrf32d(0x817fdfc4u, f0);
                wrf32d(0x817fdfccu, f2);
                wrf32d(param_1, f0);
                wrf32d(param_1 + 4u, f1);
                wrf32d(param_1 + 8u, f2);
                fl_ = 3u;
                break;
            case 0x803300d8u:
                f3 = (f64)rdf32((u32)param_4 + 0x7cu);
                f1 = (f64)rdf32((u32)param_4 + 0x78u);
                f0 = (f64)rdf32((u32)param_4 + 0x68u);
                wrf32d(0x817fdf94u, (f64)rdf32((u32)param_4 + 0x6cu));
                f4 = (f64)rdf32((u32)param_4 + 0x8cu);
                wrf32d(0x817fdf98u, f3);
                f2 = (f64)rdf32((u32)param_4 + 0x88u);
                f5 = (f64)rdf32((u32)param_4 + 0x80u);
                f3 = (f64)rdf32((u32)param_4 + 0x70u);
                f6 = (f64)rdf32((u32)param_4 + 0x90u);
                wrf32d(0x817fdfa0u, f0);
                f7 = px_pack((f64)rdf32(0x817fdf94u), (f64)rdf32(0x817fdf94u));
                wrf32d(0x817fdfa4u, f1);
                f0 = px_pack((f64)rdf32(0x817fdfa0u), (f64)rdf32(0x817fdfa0u));
                wrf32d(0x817fdf9cu, f4);
                f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f7)), (f64)(f32)px_padd(px_lo(f0), px_lo(f7)));
                wrf32d(0x817fdfa8u, f2);
                f7 = px_pack((f64)rdf32(0x817fdf9cu), 1.0);
                wrf32d(0x817fdfacu, px_hi(f0));
                wrf32d(0x817fdfacu, px_lo(f0));
                f0 = px_pack((f64)rdf32(0x817fdfa8u), 1.0);
                wrf32d(0x817fdf88u, f3);
                f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f7)), (f64)(f32)px_padd(px_lo(f0), px_lo(f7)));
                f1 = px_pack((f64)rdf32(0x817fdfacu), (f64)rdf32(0x817fdfacu));
                wrf32d(0x817fdf8cu, f5);
                f2 = px_pack((f64)rdf32(0x817fdf88u), (f64)rdf32(0x817fdf88u));
                wrf32d(0x817fdf90u, f6);
                f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f2)), (f64)(f32)px_padd(px_lo(f1), px_lo(f2)));
                f2 = px_pack((f64)rdf32(0x817fdf90u), 1.0);
                wrf32d(0x817fdfb4u, px_hi(f0));
                wrf32d(0x817fdfb8u, px_hi(f1));
                wrf32d(0x817fdfb8u, px_lo(f1));
                f1 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f2)), (f64)(f32)px_padd(px_lo(f0), px_lo(f2)));
                f2 = (f64)rdf32(0x817fdfb8u);
                wrf32d(0x817fdfc0u, px_hi(f1));
                f1 = (f64)rdf32(0x817fdfbcu);
                f0 = (f64)rdf32(0x817fdfc0u);
                wrf32d(param_1, f2);
                wrf32d(param_1 + 4u, f1);
                wrf32d(param_1 + 8u, f0);
                fl_ = 3u;
                break;
            default:
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = (u32)param_3;
                a.r[3] = (u32)param_4;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return;
            }
            if (fl_ == 4u) {
                fl_ = 0u;
            } else if (fl_ == 3u) {
                fl_ = 0u;
                break;
            }
        }
        f2 = (f64)rdf32((u32)param_4 + 0x8cu);
        f1 = (f64)rdf32((u32)param_4 + 0x7cu);
        f0 = (f64)rdf32((u32)param_4 + 0x6cu);
        wrf32d(0x817fdfd4u, f1);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfd8u, f2);
        wrf32d(param_1, f0);
        wrf32d(param_1 + 4u, f1);
        wrf32d(param_1 + 8u, f2);
    } while (0);
    t33 = param_1 + 4u;
    f1 = px_pack((f64)rdf32(t33), (f64)rdf32(t33));
    f2 = px_pack((f64)rdf32(param_1), 1.0);
    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f1)));
    f2 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f2), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f2), px_lo(f2), px_lo(f1)));
    f1 = px_pack((f64)(f32)px_padd(px_hi(f2), px_lo(f1)), px_lo(f1));
    if (!(f1 < (f64)rdf32(0x80577cc0u))) {
        a.f[0] = f1;
        f1 = tc_callf(0x802eff54u, &a);
        f2 = px_pack((f64)rdf32(param_1), (f64)rdf32(param_1));
        r0 = 1u;
        f0 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)));
        f2 = px_pack((f64)rdf32(param_1 + 8u), 1.0);
        wrf32d(param_1, px_hi(f0));
        wrf32d(param_1, px_lo(f0));
        wrf32d(param_1 + 8u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)))));
    } else {
        r0 = 0u;
    }
    if (r0 == 0u) {
        f1 = (f64)rdf32((u32)param_4 + 0x9cu);
        f0 = (f64)rdf32((u32)param_4 + 0xa0u);
        wrf32d(param_1, (f64)rdf32((u32)param_4 + 0x98u));
        wrf32d(param_1 + 4u, f1);
        wrf32d(param_1 + 8u, f0);
    }
    return;
}
