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

static f64 px_sfms(f64 a, f64 c, f64 b)
{
    f64 s = a * c - b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80152a9c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfecu, 0u);
    r3 = rd32(param_1 + 4u);
    wr32(0x817fdfc8u, 0x43300000u);
    r12 = rd32(r3);
    wr32(0x817fdfd0u, 0x43300000u);
    r12 = rd32(r12 + 0x2cu);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    f1 = tc_callf(r12, &a);
    f0 = (f64)rdf32(0x80574870u);
    wr16(param_1 + 0xd4u, 0u);
    f0 = (f64)(f32)px_pmul(f0, f1);
    wrf32d(param_1 + 0x2cu, f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfd8u, f0);
    wr16(param_1 + 0xd6u, (u16)rd32(0x817fdfdcu));
    a.r[0] = 0x817fdfb8u;
    a.r[1] = param_1;
    (void)tc_call(0x80152a04u, &a);
    wrf32d(param_1 + 0x10u, (f64)rdf32(0x817fdfb8u));
    wrf32d(param_1 + 0x14u, (f64)rdf32(0x817fdfbcu));
    wrf32d(param_1 + 0x18u, (f64)rdf32(0x817fdfc0u));
    a.r[0] = param_1;
    (void)tc_call(0x8015323cu, &a);
    r3 = (u32)(s16)rd16(param_1 + 0xd4u);
    f3 = rdf64(0x80574898u);
    f0 = (f64)rdf32(0x80574878u);
    wr32(0x817fdfccu, r3 ^ 0x80000000u);
    f1 = (f64)rdf32(0x80574874u);
    f5 = (f64)rdf32(0x8057487cu);
    f2 = (f64)(f32)px_psub(rdf64(0x817fdfc8u), f3);
    f4 = (f64)rdf32(0x80574880u);
    f3 = (f64)rdf32(0x8057484cu);
    f2 = (f64)(f32)px_sfma(f0, f2, f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574888u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)px_psub((f64)rdf32(0x80574884u), (f64)(f32)px_psub(f2, f0));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
        } else {
            f2 = (f64)(f32)px_psub(f2, f1);
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80574884u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)px_psub(f1, (f64)(f32)px_psub(f2, f1));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = -f5;
        } else {
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
        }
    }
    f31 = -f5;
    wr32(0x817fdfd4u, r3 ^ 0x80000000u);
    f1 = (f64)rdf32(0x80574874u);
    f5 = (f64)rdf32(0x8057488cu);
    f4 = (f64)rdf32(0x80574890u);
    f2 = (f64)(f32)px_sfma((f64)rdf32(0x80574878u), (f64)(f32)px_psub(rdf64(0x817fdfd0u), rdf64(0x80574898u)), f1);
    f3 = (f64)rdf32(0x8057484cu);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574888u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)px_psub((f64)rdf32(0x80574884u), (f64)(f32)px_psub(f2, f0));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
            f5 = -f5;
        } else {
            f2 = (f64)(f32)px_psub(f2, f1);
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80574884u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)px_psub(f1, (f64)(f32)px_psub(f2, f1));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
        } else {
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
        }
    }
    f6 = -f5;
    f3 = rdf64(0x80574898u);
    f0 = (f64)rdf32(0x80574878u);
    wr32(0x817fdfccu, (u32)(s16)rd16(param_1 + 0xd6u) ^ 0x80000000u);
    f1 = (f64)rdf32(0x80574874u);
    f5 = (f64)rdf32(0x8057488cu);
    f2 = (f64)(f32)px_psub(rdf64(0x817fdfc8u), f3);
    f4 = (f64)rdf32(0x80574890u);
    f3 = (f64)rdf32(0x8057484cu);
    f2 = (f64)(f32)px_sfma(f0, f2, f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574888u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)px_psub((f64)rdf32(0x80574884u), (f64)(f32)px_psub(f2, f0));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
            f5 = -f5;
        } else {
            f2 = (f64)(f32)px_psub(f2, f1);
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80574884u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)px_psub(f1, (f64)(f32)px_psub(f2, f1));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
        } else {
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
        }
    }
    f3 = rdf64(0x80574898u);
    f0 = (f64)rdf32(0x80574878u);
    wr32(0x817fdfd4u, (u32)(s16)rd16(param_1 + 0xd6u) ^ 0x80000000u);
    f1 = (f64)rdf32(0x80574874u);
    f2 = rdf64(0x817fdfd0u);
    wrf32d(param_1 + 0x40u, (f64)(f32)px_pmul(f31, -f5));
    f2 = (f64)(f32)px_psub(f2, f3);
    f5 = (f64)rdf32(0x8057487cu);
    wrf32d(param_1 + 0x44u, f6);
    f4 = (f64)rdf32(0x80574880u);
    f2 = (f64)(f32)px_sfma(f0, f2, f1);
    f3 = (f64)rdf32(0x8057484cu);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574888u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)px_psub((f64)rdf32(0x80574884u), (f64)(f32)px_psub(f2, f0));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
        } else {
            f2 = (f64)(f32)px_psub(f2, f1);
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80574884u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)px_psub(f1, (f64)(f32)px_psub(f2, f1));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = -f5;
        } else {
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
        }
    }
    r3 = param_1 + 0x40u;
    f1 = (f64)rdf32(param_1 + 0xc8u);
    wrf32d(param_1 + 0x48u, (f64)(f32)px_pmul(f31, -f5));
    a.f[0] = f1;
    a.r[0] = r3;
    a.r[1] = r3;
    (void)tc_call(0x802343c8u, &a);
    f3 = rdf64(0x80574898u);
    f0 = (f64)rdf32(0x80574878u);
    wr32(0x817fdfccu, (u32)(s16)rd16(param_1 + 0xd6u) ^ 0x80000000u);
    f1 = (f64)rdf32(0x80574874u);
    f5 = (f64)rdf32(0x8057488cu);
    f2 = (f64)(f32)px_psub(rdf64(0x817fdfc8u), f3);
    f4 = (f64)rdf32(0x80574890u);
    f3 = (f64)rdf32(0x8057484cu);
    f2 = (f64)(f32)px_sfma(f0, f2, f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574888u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)px_psub((f64)rdf32(0x80574884u), (f64)(f32)px_psub(f2, f0));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
            f5 = -f5;
        } else {
            f2 = (f64)(f32)px_psub(f2, f1);
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80574884u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)px_psub(f1, (f64)(f32)px_psub(f2, f1));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
        } else {
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = (f64)(f32)px_pmul(f5, f2);
        }
    }
    f4 = (f64)rdf32(0x8057483cu);
    f3 = rdf64(0x80574898u);
    wr32(0x817fdfd4u, (u32)(s16)rd16(param_1 + 0xd6u) ^ 0x80000000u);
    f5 = (f64)(f32)px_pmul(f31, -f5);
    f0 = (f64)rdf32(0x80574878u);
    f2 = rdf64(0x817fdfd0u);
    wrf32d(param_1 + 0x4cu, f5);
    f2 = (f64)(f32)px_psub(f2, f3);
    f1 = (f64)rdf32(0x80574874u);
    wrf32d(param_1 + 0x50u, f4);
    f5 = (f64)rdf32(0x8057487cu);
    f2 = (f64)(f32)px_sfma(f0, f2, f1);
    f4 = (f64)rdf32(0x80574880u);
    f3 = (f64)rdf32(0x8057484cu);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574888u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)px_psub((f64)rdf32(0x80574884u), (f64)(f32)px_psub(f2, f0));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
        } else {
            f2 = (f64)(f32)px_psub(f2, f1);
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80574884u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)px_psub(f1, (f64)(f32)px_psub(f2, f1));
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
            f5 = -f5;
        } else {
            f0 = (f64)(f32)px_pmul(f2, f2);
            f5 = (f64)(f32)px_sfms(f5, f0, f4);
            f5 = (f64)(f32)px_sfma(f5, f0, f3);
        }
    }
    r3 = param_1 + 0x4cu;
    f1 = (f64)rdf32(param_1 + 0xccu);
    wrf32d(param_1 + 0x54u, (f64)(f32)px_pmul(f31, -f5));
    a.f[0] = f1;
    a.r[0] = r3;
    a.r[1] = r3;
    (void)tc_call(0x802343c8u, &a);
    f0 = (f64)rdf32(param_1 + 0xd0u);
    wr32(param_1 + 0xd8u, 1u);
    f0 = -f0;
    wr32(param_1 + 0xbcu, 0x14u);
    wrf32d(param_1 + 0x50u, f0);
    wr8(param_1 + 0x3cu, 1u);
    wr8(param_1 + 1u, 1u);
    wr8(param_1, 1u);
    a.r[0] = param_1;
    (void)tc_call(0x801530e8u, &a);
    r4 = tc_lastr4();
    r3 = rd32(param_1 + 4u);
    if (r3 != 0u) {
        f0 = (f64)rdf32(param_1 + 0x1e8u);
        wrf32d(param_1 + 0x34u, (f64)rdf32(r3 + 0x20u));
        f1 = (f64)rdf32(r3 + 0x20u);
        f0 = (f64)(f32)px_pmul(f0, f1);
        wrf32d(param_1 + 0x118u, f0);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x120u), &a);
        f1 = rdf64(0x80574898u);
        wr32(0x817fdfccu, r3 ^ 0x80000000u);
        r3 = rd32(param_1 + 4u);
        wrf32d(param_1 + 0x11cu, (f64)(f32)px_psub(rdf64(0x817fdfc8u), f1));
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x100u), &a);
        f1 = tc_lastf();
        wr8(param_1 + 0x120u, (u8)r3);
        r3 = rd32(param_1 + 4u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x108u), &a);
        f1 = tc_lastf();
        wr8(param_1 + 0x120u, (u8)r3);
        r3 = rd32(param_1 + 4u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x110u), &a);
        f1 = tc_lastf();
        wr8(param_1 + 0x120u, (u8)r3);
        r3 = rd32(param_1 + 4u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x118u), &a);
        wr8(param_1 + 0x120u, (u8)r3);
    }
    return;
}
