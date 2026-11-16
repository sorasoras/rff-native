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

void fn_8018ece4(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(param_r3 + 0x50u, 0x3bu);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = 0xecu;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xecu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = 0xecu;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    r31 = r3;
    r3 = r3;
    r4 = 0u;
    while ((s32)r4 < (s32)rd32(param_r3 + 0x50u)) {
        wr32(r3, r4);
        r3 = r3 + 4u;
        r4 = r4 + 1u;
    }
    f28 = rdf64(0x80575348u);
    r28 = r31;
    f29 = rdf64(0x80575350u);
    r27 = 0u;
    f30 = (f64)rdf32(0x80575340u);
    f31 = (f64)rdf32(0x80575344u);
    while ((s32)r27 < (s32)(rd32(param_r3 + 0x50u) - 2u)) {
        r3 = tc_call(0x80040b64u, &a);
        f1 = tc_lastf();
        r0 = rd32(param_r3 + 0x50u) - 1u;
        r4 = rd32(r28);
        r0 = r0 - r27;
        r0 = r0 ^ 0x80000000u;
        f0 = (f64)(f32)px_pdiv((f64)(f32)px_pmul((f64)(f32)px_padd(f30, (f64)(f32)px_psub(px_b2f((u64)r0 | 0x4330000000000000ull), f29)), (f64)(f32)px_psub(px_b2f((u64)r3 | 0x4330000000000000ull), f28)), f31);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r0 = r27 + (u32)px_f2b(f0);
        r27 = r27 + 1u;
        r3 = (r0 << 2u) & 0xfffffffcu;
        wr32(r28, rd32(r31 + r3));
        r28 = r28 + 4u;
        wr32(r31 + r3, r4);
    }
    r0 = (rd32(r31) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x54u, r0);
    r0 = (rd32(r31 + 4u) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x58u, r0);
    r0 = (rd32(r31 + 8u) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x5cu, r0);
    r0 = (rd32(r31 + 0xcu) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x60u, r0);
    r0 = (rd32(r31 + 0x10u) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x64u, r0);
    r0 = (rd32(r31 + 0x14u) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x68u, r0);
    r0 = (rd32(r31 + 0x18u) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x6cu, r0);
    r0 = (rd32(r31 + 0x1cu) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x70u, r0);
    r0 = (rd32(r31 + 0x20u) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x74u, r0);
    r0 = (rd32(r31 + 0x24u) << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + 0x500u) + r0;
    wr32(param_r3 + 0x78u, r0);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040e98u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r31;
            r3 = tc_call(0x80094ec0u, &a);
            f1 = tc_lastf();
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040e98u, &a);
            f1 = tc_lastf();
        }
    }
    return;
}
