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

static f64 px_sfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

void fn_800f905c(u32 param_1, u32 param_2, s32 param_3, s32 param_4, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    if (param_2 != 0u) {
        if ((u32)param_3 == 0u) {
            return;
        }
        a.r[0] = param_2;
        (void)tc_call(0x80100d00u, &a);
        r31 = rd32((u32)param_3 + 0x10u);
        r5 = ppc_mulhw(1431655766, (s32)rd8(r31 + 0xbau));
        r0 = r5 + ((r5 >> 0x1fu) & 1u);
        r5 = r0 & 0xffu;
        r0 = (r0 << 2u) & 0x3fcu;
        r5 = r0 - r5;
        r6 = (r5 + 1u) & 0xffu;
        r5 = ppc_mulhw(1431655766, (s32)r6);
        r5 = (r6 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 3u)) & 0xffu;
        wr8(r31 + 0xbau, (u8)(r5 + 3u));
        r5 = rd32(r31 + 0xa0u);
        wr32(0x817fdfb4u, rd32(r31 + 0x90u));
        r0 = rd32(r31 + 0xb0u);
        wr32(0x817fdfc4u, r5);
        r12 = rd32(r31 + 0x84u);
        wr32(0x817fdfd4u, r0);
        r11 = rd32(r31 + 0x88u);
        r10 = rd32(r31 + 0x8cu);
        r9 = rd32(r31 + 0x94u);
        r8 = rd32(r31 + 0x98u);
        r7 = rd32(r31 + 0x9cu);
        r6 = rd32(r31 + 0xa4u);
        r5 = rd32(r31 + 0xa8u);
        r0 = rd32(r31 + 0xacu);
        f2 = (f64)rdf32(0x817fdfb4u);
        f1 = (f64)rdf32(0x817fdfc4u);
        f0 = (f64)rdf32(0x817fdfd4u);
        wr32(0x817fdfa8u, r12);
        wr32(0x817fdfacu, r11);
        wr32(0x817fdfb0u, r10);
        wr32(0x817fdfb8u, r9);
        wr32(0x817fdfbcu, r8);
        wr32(0x817fdfc0u, r7);
        wr32(0x817fdfc8u, r6);
        wr32(0x817fdfccu, r5);
        wr32(0x817fdfd0u, r0);
        wrf32d(param_1, f2);
        wrf32d(param_1 + 4u, f1);
        wrf32d(param_1 + 8u, f0);
        a.r[0] = 0x817fdf74u;
        a.r[1] = param_2;
        (void)tc_call(0x80100db8u, &a);
        f0 = px_pack((f64)rdf32(0x817fdf74u), (f64)rdf32(0x817fdf74u));
        f1 = px_pack((f64)rdf32(param_1), (f64)rdf32(param_1));
        f0 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
        wrf32d(0x817fdf80u, px_hi(f0));
        wrf32d(0x817fdf80u, px_lo(f0));
        f0 = px_pack((f64)rdf32(0x817fdf7cu), 1.0);
        f1 = px_pack((f64)rdf32(param_1 + 8u), 1.0);
        f0 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
        wrf32d(0x817fdf88u, px_hi(f0));
        f3 = (f64)rdf32(0x817fdf84u);
        f4 = (f64)rdf32(0x817fdf80u);
        f2 = (f64)rdf32(0x817fdf88u);
        wrf32d(0x817fdf98u, f4);
        wrf32d(0x817fdf9cu, f3);
        wrf32d(0x817fdfa0u, f2);
        if ((f64)(f32)px_sfma(f2, f2, (f64)(f32)px_sfma(f4, f4, (f64)(f32)px_pmul(f3, f3))) > (f64)(f32)px_pmul(param_f1, param_f1)) {
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdf98u;
            (void)tc_call(0x802343e4u, &a);
            f0 = px_pack((f64)rdf32(0x817fdf98u), (f64)rdf32(0x817fdf98u));
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(param_f1)), (f64)(f32)px_pmul(px_lo(f0), px_hi(param_f1)));
            wrf32d(0x817fdf98u, px_hi(f0));
            wrf32d(0x817fdf98u, px_lo(f0));
            f0 = px_pack((f64)rdf32(0x817fdfa0u), 1.0);
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(param_f1)), (f64)(f32)px_pmul(px_lo(f0), px_hi(param_f1)));
            wrf32d(0x817fdfa0u, px_hi(f0));
            f0 = px_pack((f64)rdf32(param_1), (f64)rdf32(param_1));
            f1 = px_pack((f64)rdf32(0x817fdf98u), (f64)rdf32(0x817fdf98u));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
            wrf32d(param_1, px_hi(f0));
            wrf32d(param_1, px_lo(f0));
            f0 = px_pack((f64)rdf32(param_1 + 8u), 1.0);
            f1 = px_pack((f64)rdf32(0x817fdfa0u), 1.0);
            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
            wrf32d(param_1 + 8u, px_hi(f0));
        } else {
            a.r[0] = 0x817fdf68u;
            a.r[1] = param_2;
            (void)tc_call(0x80100db8u, &a);
            wrf32d(param_1, (f64)rdf32(0x817fdf68u));
            wrf32d(param_1 + 4u, (f64)rdf32(0x817fdf6cu));
            wrf32d(param_1 + 8u, (f64)rdf32(0x817fdf70u));
        }
        wrf32d(r31 + 0x2cu, (f64)rdf32(param_1));
        wrf32d(r31 + 0x30u, (f64)rdf32(param_1 + 4u));
        wrf32d(r31 + 0x34u, (f64)rdf32(param_1 + 8u));
        if ((u32)param_4 != 0u) {
            a.r[0] = param_2;
            r3 = tc_call(0x80100fd8u, &a);
            wr32(0x817fdf58u, r3);
            f1 = (f64)rdf32(0x817fdf58u);
            wr32(0x817fdf5cu, tc_lastr4());
            f0 = (f64)rdf32(0x817fdf5cu);
            wrf32d(r31 + 0x44u, f1);
            wrf32d(0x817fdf60u, f1);
            wrf32d(0x817fdf64u, f0);
            wrf32d(r31 + 0x48u, f0);
        }
        a.r[0] = 0x817fdf8cu;
        a.r[1] = param_2;
        (void)tc_call(0x80101060u, &a);
        wrf32d(r31 + 0x38u, (f64)rdf32(0x817fdf8cu));
        wrf32d(r31 + 0x3cu, (f64)rdf32(0x817fdf90u));
        wrf32d(r31 + 0x40u, (f64)rdf32(0x817fdf94u));
        a.r[0] = param_2;
        r3 = tc_call(0x801010c4u, &a);
        wr8(r31 + 0xbbu, (u8)(((u32)rd8(r31 + 0xbbu) & 0xfdu) | 2u));
        wr8(r31 + 0xb8u, (u8)r3);
        a.r[0] = (u32)param_3;
        (void)tc_call(0x800fe6e4u, &a);
    }
    return;
}
