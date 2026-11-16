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

static f64 px_pfms(f64 a, f64 c, f64 b)
{
    f64 nb = -b, s = a * c + nb;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    u64 bits = px_f2b(s);
    if ((bits & 0x1fffffffull) == 0x10000000ull) {
        f64 ap = nb - s, bp = s + ap, da = a * c + ap, db = nb - bp, err = da + db;
        if (err != 0.0) { if ((err > 0.0) == (s > 0.0)) bits += 1; else bits -= 1; }
    }
    return px_b2f(bits);
}

static f64 px_pfnm(f64 x)
{
    return x != x ? x : -x;
}

void fn_8032e25c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r29 = 0, t7 = 0, t12 = 0, t58 = 0, t61 = 0, t109 = 0, t114 = 0;
    u32 t160 = 0, t163 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfc8u, 0x43300000u);
    f1 = rdf64(0x80577cb8u);
    wr32(0x817fdfccu, param_5 ^ 0x80000000u);
    r29 = param_6;
    f0 = (f64)(f32)px_psub(rdf64(0x817fdfc8u), f1);
    f31 = (f64)(f32)ppc_fres(f0);
    f2 = px_pack((f64)(f32)px_padd(px_hi(f31), px_hi(f31)), (f64)(f32)px_padd(px_lo(f31), px_lo(f31)));
    f1 = px_pack((f64)(f32)px_pmul(px_hi(f31), px_hi(f31)), (f64)(f32)px_pmul(px_lo(f31), px_lo(f31)));
    f31 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f0), px_hi(f1), px_hi(f2))), px_pfnm((f64)(f32)px_pfms(px_lo(f0), px_lo(f1), px_lo(f2))));
    a.r[0] = 0x98u;
    a.r[1] = 0u;
    a.r[2] = (((param_5 << 1u) & 0xfffffffeu) + 2u) & 0xffffu;
    (void)tc_call(0x80250b74u, &a);
    if ((param_4 & 4u) != 0u) {
        c0lt = (s32)param_5 < 0;
        r5 = 0u;
        if (c0lt) {
            return;
        }
        r4 = param_4 & 1u;
        f1 = rdf64(0x80577cb8u);
        ctr = param_5 + 1u;
        if (c0lt) {
            return;
        }
        do {
            f6 = (f64)rdf32(r29);
            t7 = param_2 + 0x18u;
            f3 = px_pack((f64)rdf32(t7), (f64)rdf32(t7));
            f7 = (f64)rdf32(r29 + 4u);
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
            t12 = param_2 + 0xcu;
            f0 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
            f3 = px_pack((f64)rdf32(param_2 + 0x20u), 1.0);
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
            f0 = px_pack((f64)rdf32(param_2 + 0x14u), 1.0);
            wrf32d(0x817fdf98u, px_hi(f4));
            wrf32d(0x817fdf98u, px_lo(f4));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
            f5 = px_pack((f64)rdf32(param_2), (f64)rdf32(param_2));
            wrf32d(0x817fdfa4u, px_hi(f2));
            wrf32d(0x817fdfa4u, px_lo(f2));
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
            f3 = px_pack((f64)rdf32(0x817fdf98u), (f64)rdf32(0x817fdf98u));
            f0 = px_pack((f64)rdf32(0x817fdfa4u), (f64)rdf32(0x817fdfa4u));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f3)), (f64)(f32)px_padd(px_lo(f0), px_lo(f3)));
            wrf32d(0x817fdfb0u, px_hi(f0));
            wrf32d(0x817fdfb0u, px_lo(f0));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f4)), (f64)(f32)px_padd(px_lo(f2), px_lo(f4)));
            f2 = px_pack((f64)rdf32(0x817fdfb0u), (f64)rdf32(0x817fdfb0u));
            f2 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f5)), (f64)(f32)px_padd(px_lo(f2), px_lo(f5)));
            f5 = px_pack((f64)rdf32(param_2 + 8u), 1.0);
            wrf32d(0x817fdfbcu, px_hi(f2));
            wrf32d(0x817fdfbcu, px_lo(f2));
            f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f5)), (f64)(f32)px_padd(px_lo(f0), px_lo(f5)));
            f0 = (f64)rdf32(0x817fdfbcu);
            wrf32d(0x817fdfc4u, px_hi(f2));
            f2 = (f64)rdf32(0x817fdfc0u);
            wrf32d(0xcc008000u, f0);
            f0 = (f64)rdf32(0x817fdfc4u);
            wrf32d(0xcc008000u, f2);
            wrf32d(0xcc008000u, f0);
            if (r4 != 0u) {
                f2 = (f64)rdf32(param_2 + 0x24u);
                wrf32d(0xcc008000u, (f64)(f32)px_pmul(f31, (f64)(f32)px_psub(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull), f1)));
                wrf32d(0xcc008000u, f2);
            }
            t58 = (u32)param_3 + 0xcu;
            f0 = px_pack((f64)rdf32(t58), (f64)rdf32(t58));
            t61 = (u32)param_3 + 0x18u;
            f3 = px_pack((f64)rdf32(t61), (f64)rdf32(t61));
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
            f0 = px_pack((f64)rdf32((u32)param_3 + 0x14u), 1.0);
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
            f3 = px_pack((f64)rdf32((u32)param_3 + 0x20u), 1.0);
            f5 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
            wrf32d(0x817fdf74u, px_hi(f2));
            wrf32d(0x817fdf74u, px_lo(f2));
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
            wrf32d(0x817fdf68u, px_hi(f4));
            wrf32d(0x817fdf68u, px_lo(f4));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
            f0 = px_pack((f64)rdf32(0x817fdf74u), (f64)rdf32(0x817fdf74u));
            f3 = px_pack((f64)rdf32(0x817fdf68u), (f64)rdf32(0x817fdf68u));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f3)), (f64)(f32)px_padd(px_lo(f0), px_lo(f3)));
            wrf32d(0x817fdf80u, px_hi(f0));
            wrf32d(0x817fdf80u, px_lo(f0));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f4)), (f64)(f32)px_padd(px_lo(f2), px_lo(f4)));
            f2 = px_pack((f64)rdf32(0x817fdf80u), (f64)rdf32(0x817fdf80u));
            f2 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f5)), (f64)(f32)px_padd(px_lo(f2), px_lo(f5)));
            f5 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
            wrf32d(0x817fdf8cu, px_hi(f2));
            wrf32d(0x817fdf8cu, px_lo(f2));
            f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f5)), (f64)(f32)px_padd(px_lo(f0), px_lo(f5)));
            f0 = (f64)rdf32(0x817fdf8cu);
            wrf32d(0x817fdf94u, px_hi(f2));
            f2 = (f64)rdf32(0x817fdf90u);
            wrf32d(0xcc008000u, f0);
            f0 = (f64)rdf32(0x817fdf94u);
            wrf32d(0xcc008000u, f2);
            wrf32d(0xcc008000u, f0);
            if (r4 != 0u) {
                r0 = r5 ^ 0x80000000u;
                f2 = (f64)rdf32((u32)param_3 + 0x24u);
                wr32(0x817fdfccu, r0);
                wrf32d(0xcc008000u, (f64)(f32)px_pmul(f31, (f64)(f32)px_psub(px_b2f((u64)r0 | 0x4330000000000000ull), f1)));
                wrf32d(0xcc008000u, f2);
            }
            r29 = r29 + 8u;
            r5 = r5 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else {
        c0lt = (s32)param_5 < 0;
        r5 = 0u;
        if (!c0lt) {
            r4 = param_4 & 1u;
            f1 = rdf64(0x80577cb8u);
            ctr = param_5 + 1u;
            if (!c0lt) {
                do {
                    f6 = (f64)rdf32(r29);
                    t109 = (u32)param_3 + 0x18u;
                    f3 = px_pack((f64)rdf32(t109), (f64)rdf32(t109));
                    f7 = (f64)rdf32(r29 + 4u);
                    f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
                    t114 = (u32)param_3 + 0xcu;
                    f0 = px_pack((f64)rdf32(t114), (f64)rdf32(t114));
                    f3 = px_pack((f64)rdf32((u32)param_3 + 0x20u), 1.0);
                    f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
                    f0 = px_pack((f64)rdf32((u32)param_3 + 0x14u), 1.0);
                    wrf32d(0x817fdf38u, px_hi(f4));
                    wrf32d(0x817fdf38u, px_lo(f4));
                    f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
                    f5 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                    wrf32d(0x817fdf44u, px_hi(f2));
                    wrf32d(0x817fdf44u, px_lo(f2));
                    f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
                    f3 = px_pack((f64)rdf32(0x817fdf38u), (f64)rdf32(0x817fdf38u));
                    f0 = px_pack((f64)rdf32(0x817fdf44u), (f64)rdf32(0x817fdf44u));
                    f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f3)), (f64)(f32)px_padd(px_lo(f0), px_lo(f3)));
                    wrf32d(0x817fdf50u, px_hi(f0));
                    wrf32d(0x817fdf50u, px_lo(f0));
                    f0 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f4)), (f64)(f32)px_padd(px_lo(f2), px_lo(f4)));
                    f2 = px_pack((f64)rdf32(0x817fdf50u), (f64)rdf32(0x817fdf50u));
                    f2 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f5)), (f64)(f32)px_padd(px_lo(f2), px_lo(f5)));
                    f5 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                    wrf32d(0x817fdf5cu, px_hi(f2));
                    wrf32d(0x817fdf5cu, px_lo(f2));
                    f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f5)), (f64)(f32)px_padd(px_lo(f0), px_lo(f5)));
                    f0 = (f64)rdf32(0x817fdf5cu);
                    wrf32d(0x817fdf64u, px_hi(f2));
                    f2 = (f64)rdf32(0x817fdf60u);
                    wrf32d(0xcc008000u, f0);
                    f0 = (f64)rdf32(0x817fdf64u);
                    wrf32d(0xcc008000u, f2);
                    wrf32d(0xcc008000u, f0);
                    if (r4 != 0u) {
                        f2 = (f64)rdf32((u32)param_3 + 0x24u);
                        wrf32d(0xcc008000u, (f64)(f32)px_pmul(f31, (f64)(f32)px_psub(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull), f1)));
                        wrf32d(0xcc008000u, f2);
                    }
                    t160 = param_2 + 0xcu;
                    f0 = px_pack((f64)rdf32(t160), (f64)rdf32(t160));
                    t163 = param_2 + 0x18u;
                    f3 = px_pack((f64)rdf32(t163), (f64)rdf32(t163));
                    f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
                    f0 = px_pack((f64)rdf32(param_2 + 0x14u), 1.0);
                    f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
                    f3 = px_pack((f64)rdf32(param_2 + 0x20u), 1.0);
                    f5 = px_pack((f64)rdf32(param_2), (f64)rdf32(param_2));
                    wrf32d(0x817fdf14u, px_hi(f2));
                    wrf32d(0x817fdf14u, px_lo(f2));
                    f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f7)));
                    wrf32d(0x817fdf08u, px_hi(f4));
                    wrf32d(0x817fdf08u, px_lo(f4));
                    f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
                    f0 = px_pack((f64)rdf32(0x817fdf14u), (f64)rdf32(0x817fdf14u));
                    f3 = px_pack((f64)rdf32(0x817fdf08u), (f64)rdf32(0x817fdf08u));
                    f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f3)), (f64)(f32)px_padd(px_lo(f0), px_lo(f3)));
                    wrf32d(0x817fdf20u, px_hi(f0));
                    wrf32d(0x817fdf20u, px_lo(f0));
                    f0 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f4)), (f64)(f32)px_padd(px_lo(f2), px_lo(f4)));
                    f2 = px_pack((f64)rdf32(0x817fdf20u), (f64)rdf32(0x817fdf20u));
                    f2 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f5)), (f64)(f32)px_padd(px_lo(f2), px_lo(f5)));
                    f5 = px_pack((f64)rdf32(param_2 + 8u), 1.0);
                    wrf32d(0x817fdf2cu, px_hi(f2));
                    wrf32d(0x817fdf2cu, px_lo(f2));
                    f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f5)), (f64)(f32)px_padd(px_lo(f0), px_lo(f5)));
                    f0 = (f64)rdf32(0x817fdf2cu);
                    wrf32d(0x817fdf34u, px_hi(f2));
                    f2 = (f64)rdf32(0x817fdf30u);
                    wrf32d(0xcc008000u, f0);
                    f0 = (f64)rdf32(0x817fdf34u);
                    wrf32d(0xcc008000u, f2);
                    wrf32d(0xcc008000u, f0);
                    if (r4 != 0u) {
                        r0 = r5 ^ 0x80000000u;
                        f2 = (f64)rdf32(param_2 + 0x24u);
                        wr32(0x817fdfccu, r0);
                        wrf32d(0xcc008000u, (f64)(f32)px_pmul(f31, (f64)(f32)px_psub(px_b2f((u64)r0 | 0x4330000000000000ull), f1)));
                        wrf32d(0xcc008000u, f2);
                    }
                    r29 = r29 + 8u;
                    r5 = r5 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
    }
    return;
}
