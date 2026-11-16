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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8014834c(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdde0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_hi(0.0));
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_hi(0.0));
    wrf32d(0x817fdfc8u, px_lo(0.0));
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, px_hi(0.0));
    wrf32d(0x817fdfb8u, px_lo(0.0));
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, px_hi(0.0));
    wrf32d(0x817fdfa8u, px_lo(0.0));
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, px_hi(0.0));
    wrf32d(0x817fdf98u, px_lo(0.0));
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, px_hi(0.0));
    wrf32d(0x817fdf88u, px_lo(0.0));
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, px_hi(0.0));
    wrf32d(0x817fdf78u, px_lo(0.0));
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    r3 = rd32(param_r4 + 0x98u);
    f0 = (f64)rdf32(0x80574638u);
    wr32(0x817fde24u, rd32(param_r4 + 0x94u));
    r0 = 0u;
    f7 = (f64)rdf32(0x805745f0u);
    wr32(0x817fde28u, r3);
    wr32(0x817fde2cu, rd32(param_r4 + 0x9cu));
    f23 = (f64)rdf32(param_r4 + 0xacu);
    f24 = (f64)rdf32(param_r4 + 0xb0u);
    f0 = (f64)(f32)px_padd(f0, f23);
    wrf32d(param_r4 + 0xacu, f0);
    if ((f7 == (f64)rdf32(0x817fde24u) && f7 == (f64)rdf32(0x817fde28u)) && f7 == (f64)rdf32(0x817fde2cu)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fde24u;
        a.r[1] = 0x817fde24u;
        (void)tc_call(0x802343e4u, &a);
    }
    if (f23 > f24) {
        f23 = f24;
    }
    a.f[0] = f23;
    a.r[0] = 0x817fde24u;
    a.r[1] = 0x817fde24u;
    (void)tc_call(0x802343c8u, &a);
    f0 = (f64)rdf32(0x805745f0u);
    wrf32d(param_r4 + 0x94u, (f64)rdf32(0x817fde24u));
    r6 = rd32(param_r4 + 0xccu);
    r0 = rd32(param_r4 + 0xd0u);
    wrf32d(param_r4 + 0x98u, (f64)rdf32(0x817fde28u));
    f7 = (f64)rdf32(0x817fde2cu);
    wrf32d(0x817fde20u, f0);
    wrf32d(param_r4 + 0x9cu, f7);
    wr32(0x817fde00u, r6);
    wr32(0x817fde04u, r0);
    r0 = rd32(param_r4 + 0xd4u);
    wrf32d(0x817fde1cu, f0);
    wrf32d(0x817fde18u, f0);
    wr32(0x817fde08u, r0);
    a.r[0] = 0x817fde00u;
    a.r[1] = 0x817fde24u;
    a.r[2] = 0x817fde00u;
    (void)tc_call(0x80234380u, &a);
    f0 = (f64)rdf32(0x817fde04u);
    f1 = (f64)rdf32(0x817fde00u);
    f3 = (f64)(f32)px_padd(f0, (f64)rdf32(param_r4 + 0xb8u));
    f2 = (f64)rdf32(0x817fde08u);
    r0 = rd32(0x80471a18u) * 0x4150u;
    wrf32d(0x817fde18u, f1);
    wrf32d(0x817fde1cu, f0);
    wrf32d(0x817fde20u, f2);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.r[0] = r0 - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x8008a2fcu, &a);
    if (f1 < (f64)rdf32(0x80574620u)) {
        f0 = (f64)rdf32(0x817fde28u);
        f7 = (f64)(f32)px_psub((f64)rdf32(0x817fde1cu), f1);
        wrf32d(0x817fde1cu, f1);
        f0 = (f64)(f32)px_psub(f0, f7);
        wrf32d(0x817fde28u, f0);
    }
    f24 = (f64)rdf32(0x817fde18u);
    r3 = 0u;
    f23 = (f64)rdf32(param_r4 + 0xc8u);
    r4 = 0u;
    f26 = (f64)rdf32(0x817fde20u);
    r0 = 0u;
    f27 = (f64)rdf32(0x805745f0u);
    f8 = (f64)(f32)px_padd(f24, f23);
    f12 = (f64)rdf32(param_r4 + 0xbcu);
    f10 = (f64)(f32)px_psub(f24, f23);
    f25 = (f64)rdf32(0x817fde1cu);
    f30 = (f64)rdf32(param_r4 + 0xc4u);
    f28 = (f64)(f32)px_psub(f12, f23);
    f11 = (f64)rdf32(0x8057463cu);
    wrf32d(0x817fde48u, f27);
    f29 = (f64)rdf32(param_r4 + 0xc0u);
    f13 = (f64)(f32)px_padd(f12, f23);
    wrf32d(0x817fde4cu, f27);
    wrf32d(0x817fde58u, f27);
    wrf32d(0x817fde50u, f27);
    wrf32d(0x817fde5cu, f27);
    wrf32d(0x817fde54u, f27);
    wrf32d(param_r4 + 0xccu, f24);
    wrf32d(param_r4 + 0xd0u, f25);
    wrf32d(param_r4 + 0xd4u, f26);
    wrf32d(0x817fde48u, f28);
    wrf32d(0x817fde4cu, f29);
    wrf32d(0x817fde50u, (f64)(f32)px_psub(f30, f23));
    wrf32d(0x817fde54u, f13);
    wrf32d(0x817fde58u, (f64)(f32)px_padd(f29, f11));
    wrf32d(0x817fde5cu, (f64)(f32)px_padd(f30, f23));
    wrf32d(0x817fde30u, f10);
    wrf32d(0x817fde34u, f25);
    wrf32d(0x817fde38u, (f64)(f32)px_psub(f26, f23));
    wrf32d(0x817fde3cu, f8);
    wrf32d(0x817fde40u, (f64)(f32)px_padd(f25, f11));
    wrf32d(0x817fde44u, (f64)(f32)px_padd(f26, f23));
    if (((f28 < f8) || (f28 == f8)) && ((f10 < f13) || (f10 == f13))) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        f0 = (f64)rdf32(0x817fde40u);
        r0 = 0u;
        f8 = (f64)rdf32(0x817fde4cu);
        f7 = (f64)rdf32(0x817fde34u);
        c0lt = f8 < f0;
        c0eq = f8 == f0;
        f0 = (f64)rdf32(0x817fde58u);
        c0eq = c0lt || c0eq;
        if (c0eq && ((f7 < f0) || (f7 == f0))) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r4 = 1u;
        }
    }
    if (r4 != 0u) {
        f0 = (f64)rdf32(0x817fde44u);
        r0 = 0u;
        f8 = (f64)rdf32(0x817fde50u);
        f7 = (f64)rdf32(0x817fde38u);
        c0lt = f8 < f0;
        c0eq = f8 == f0;
        f0 = (f64)rdf32(0x817fde5cu);
        c0eq = c0lt || c0eq;
        if (c0eq && ((f7 < f0) || (f7 == f0))) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r3 = 1u;
        }
    }
    r0 = rd32(param_r4 + 0x28u);
    wr32(0x817fde0cu, rd32(param_r4 + 0x24u));
    wr32(0x817fde10u, r0);
    wr32(0x817fde14u, rd32(param_r4 + 0x2cu));
    a.r[0] = 0x817fde0cu;
    a.r[1] = 0x817fde24u;
    a.r[2] = 0x817fde0cu;
    (void)tc_call(0x80234380u, &a);
    f23 = (f64)rdf32(param_r4 + 0xb8u);
    wrf32d(param_r4 + 0x24u, (f64)rdf32(0x817fde0cu));
    wrf32d(param_r4 + 0x28u, (f64)rdf32(0x817fde10u));
    wrf32d(param_r4 + 0x2cu, (f64)rdf32(0x817fde14u));
    a.r[0] = 0x817fde24u;
    f1 = tc_callf(0x80234440u, &a);
    f7 = (f64)rdf32(0x805745f4u);
    f0 = (f64)rdf32(0x805745f0u);
    wrf32d(param_r4 + 0x30u, (f64)(f32)px_padd((f64)(f32)px_pdiv((f64)(f32)px_pdiv((f64)(f32)px_pmul((f64)rdf32(0x80574640u), f1), (f64)(f32)px_pmul((f64)rdf32(0x80574644u), f23)), (f64)rdf32(0x80574648u)), (f64)rdf32(param_r4 + 0x30u)));
    wrf32d(0x817fdf20u, f7);
    wrf32d(0x817fdf30u, f0);
    wrf32d(0x817fdf40u, f0);
    wrf32d(0x817fdf24u, f0);
    wrf32d(0x817fdf34u, f7);
    wrf32d(0x817fdf44u, f0);
    wrf32d(0x817fdf28u, f0);
    wrf32d(0x817fdf38u, f0);
    wrf32d(0x817fdf48u, f7);
    wrf32d(0x817fdf2cu, f0);
    wrf32d(0x817fdf3cu, f0);
    wrf32d(0x817fdf4cu, f0);
    wrf32d(0x817fddf0u, f0);
    wrf32d(0x817fddecu, f0);
    wrf32d(0x817fdde8u, f0);
    wrf32d(0x817fdde8u, (f64)rdf32(param_r4 + 0x40u));
    wrf32d(0x817fddecu, (f64)rdf32(param_r4 + 0x50u));
    wrf32d(0x817fddf0u, (f64)rdf32(param_r4 + 0x60u));
    a.r[0] = 0x817fdde8u;
    a.r[1] = param_r4 + 0x24u;
    a.r[2] = 0x817fdde8u;
    (void)tc_call(0x80234380u, &a);
    f8 = -(f64)rdf32(param_r4 + 8u);
    f7 = -(f64)rdf32(param_r4 + 4u);
    f0 = -(f64)rdf32(param_r4);
    wrf32d(0x817fddfcu, f8);
    wrf32d(0x817fddf4u, f0);
    wrf32d(0x817fddf8u, f7);
    a.f[0] = (f64)(f32)f0;
    a.f[1] = (f64)(f32)f7;
    a.f[2] = (f64)(f32)f8;
    a.r[0] = 0x817fde60u;
    (void)tc_call(0x80233c84u, &a);
    a.r[0] = 0x817fde60u;
    a.r[1] = 0x817fdf20u;
    a.r[2] = 0x817fdf20u;
    (void)tc_call(0x802337a0u, &a);
    a.f[0] = (f64)rdf32(param_r4 + 0xcu);
    a.f[1] = (f64)rdf32(param_r4 + 0x10u);
    a.f[2] = (f64)rdf32(param_r4 + 0x14u);
    a.r[0] = 0x817fde90u;
    (void)tc_call(0x80233d04u, &a);
    a.r[0] = 0x817fde90u;
    a.r[1] = 0x817fdf20u;
    a.r[2] = 0x817fdf20u;
    (void)tc_call(0x802337a0u, &a);
    f0 = (f64)(f32)px_pmul((f64)rdf32(0x805745fcu), (f64)rdf32(param_r4 + 0x30u));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdf50u, f0);
    a.r[0] = 0x817fdec0u;
    a.r[1] = param_r4 + 0x18u;
    a.r[2] = (u32)(s16)rd32(0x817fdf54u);
    (void)tc_call(0x80041da0u, &a);
    a.r[0] = 0x817fdec0u;
    a.r[1] = 0x817fdf20u;
    a.r[2] = 0x817fdf20u;
    (void)tc_call(0x802337a0u, &a);
    a.f[0] = (f64)rdf32(0x80574640u);
    a.r[0] = 0x817fddf4u;
    a.r[1] = 0x817fddf4u;
    (void)tc_call(0x802343c8u, &a);
    a.f[0] = (f64)rdf32(0x817fddf4u);
    a.f[1] = (f64)rdf32(0x817fddf8u);
    a.f[2] = (f64)rdf32(0x817fddfcu);
    a.r[0] = 0x817fde60u;
    (void)tc_call(0x80233c84u, &a);
    a.r[0] = 0x817fde60u;
    a.r[1] = 0x817fdf20u;
    a.r[2] = 0x817fdf20u;
    (void)tc_call(0x802337a0u, &a);
    a.f[0] = (f64)rdf32(0x817fdde8u);
    a.f[1] = (f64)rdf32(0x817fddecu);
    a.f[2] = (f64)rdf32(0x817fddf0u);
    a.r[0] = 0x817fde60u;
    (void)tc_call(0x80233c84u, &a);
    a.r[0] = 0x817fde60u;
    a.r[1] = 0x817fdf20u;
    a.r[2] = 0x817fdf20u;
    (void)tc_call(0x802337a0u, &a);
    f1 = px_pack((f64)rdf32(0x817fdf20u), (f64)rdf32(0x817fdf20u));
    wrf32d(0x817fdef0u, px_hi(f1));
    wrf32d(0x817fdef0u, px_lo(f1));
    f2 = px_pack((f64)rdf32(0x817fdf28u), (f64)rdf32(0x817fdf28u));
    wrf32d(0x817fdef8u, px_hi(f2));
    wrf32d(0x817fdef8u, px_lo(f2));
    f3 = px_pack((f64)rdf32(0x817fdf30u), (f64)rdf32(0x817fdf30u));
    wrf32d(0x817fdf00u, px_hi(f3));
    wrf32d(0x817fdf00u, px_lo(f3));
    f4 = px_pack((f64)rdf32(0x817fdf38u), (f64)rdf32(0x817fdf38u));
    wrf32d(0x817fdf08u, px_hi(f4));
    wrf32d(0x817fdf08u, px_lo(f4));
    f5 = px_pack((f64)rdf32(0x817fdf40u), (f64)rdf32(0x817fdf40u));
    wrf32d(0x817fdf10u, px_hi(f5));
    wrf32d(0x817fdf10u, px_lo(f5));
    f6 = px_pack((f64)rdf32(0x817fdf48u), (f64)rdf32(0x817fdf48u));
    wrf32d(0x817fdf18u, px_hi(f6));
    wrf32d(0x817fdf18u, px_lo(f6));
    r28 = rd32(0x817fdef4u);
    r29 = rd32(0x817fdef8u);
    r12 = rd32(0x817fdefcu);
    r11 = rd32(0x817fdf00u);
    r10 = rd32(0x817fdf04u);
    r9 = rd32(0x817fdf08u);
    r8 = rd32(0x817fdf0cu);
    r7 = rd32(0x817fdf10u);
    r6 = rd32(0x817fdf14u);
    r5 = rd32(0x817fdf18u);
    r0 = rd32(0x817fdf1cu);
    wr32(param_r4 + 0x64u, rd32(0x817fdef0u));
    wr32(param_r4 + 0x68u, r28);
    wr32(param_r4 + 0x6cu, r29);
    wr32(param_r4 + 0x70u, r12);
    wr32(param_r4 + 0x74u, r11);
    wr32(param_r4 + 0x78u, r10);
    wr32(param_r4 + 0x7cu, r9);
    wr32(param_r4 + 0x80u, r8);
    wr32(param_r4 + 0x84u, r7);
    wr32(param_r4 + 0x88u, r6);
    wr32(param_r4 + 0x8cu, r5);
    wr32(param_r4 + 0x90u, r0);
    a.r[0] = param_r3;
    a.r[1] = 0x817fdf20u;
    (void)tc_call(0x800315c0u, &a);
    return;
}
