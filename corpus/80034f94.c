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

void fn_80034f94(f64 param_1, u32 param_2, s32 param_3)
{
    u32 lr = 0, r1 = 0, r3 = 0, r4 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_2;
    r4 = (u32)param_3;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wrf64(r1 + 0x10u, f31);
        wrf32d(r1 + 0x18u, px_lo(f31));
        f31 = param_1;
        r12 = rd32(r4 + 0x14u);
        wr32(r1 + 0xcu, r31);
        r31 = r4;
        wr32(r1 + 8u, r30);
        r30 = r3;
        lr = 0x80034fc8u;
        if (r12 != 0x80034f94u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = param_1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r12 = rd32(r4 + 0x2cu);
            r3 = r30 + 4u;
            r4 = r4 + 0x18u;
            lr = 0x80034fe0u;
            if (r12 != 0x80034f94u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = param_1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r12 = rd32(r31 + 0x44u);
                r3 = r30 + 8u;
                r4 = r31 + 0x30u;
                lr = 0x80034ff8u;
                if (r12 != 0x80034f94u) {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.f[0] = param_1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    r12 = rd32(r31 + 0x5cu);
                    r3 = r30 + 0xcu;
                    r4 = r31 + 0x48u;
                    lr = 0x80035010u;
                    if (r12 != 0x80034f94u) break;
                }
            }
        }
    }
    a.r[0] = r3;
    a.r[1] = r4;
    a.f[0] = param_1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    f5 = (f64)rdf32(r30 + 4u);
    f2 = (f64)rdf32(r30);
    f4 = (f64)rdf32(r30 + 8u);
    f0 = (f64)rdf32(r30 + 0xcu);
    f1 = (f64)(f32)px_sfma(f0, f0, (f64)(f32)px_sfma(f4, f4, (f64)(f32)px_sfma(f2, f2, (f64)(f32)px_pmul(f5, f5))));
    f6 = px_pack((f64)(f32)ppc_frsqrte(px_hi(f1)), (f64)(f32)ppc_frsqrte(px_lo(f1)));
    f0 = (f64)(f32)px_pmul(f0, f6);
    wrf32d(r30, (f64)(f32)px_pmul(f2, f6));
    wrf32d(r30 + 4u, (f64)(f32)px_pmul(f5, f6));
    wrf32d(r30 + 8u, (f64)(f32)px_pmul(f4, f6));
    wrf32d(r30 + 0xcu, f0);
    return;
}
