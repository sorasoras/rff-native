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

void fn_800625b8(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r30 = 0, t20 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    r4 = 0u;
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    r0 = rd32(param_1 + 0xf8u);
    wr32(param_1 + 0x110u, 0u);
    if (r0 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x5cu), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x4cu), &a);
        r4 = tc_lastr4();
        if (rd32(param_1 + 0x110u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x58u), &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x60u), &a);
        r4 = tc_lastr4();
    }
    r0 = rd32(param_1 + 0x88u);
    wr32(0x817fdfccu, rd32(param_1 + 0x84u));
    wr32(0x817fdfd0u, r0);
    wr32(0x817fdfd4u, rd32(param_1 + 0x8cu));
    if (rd32(param_1 + 0x118u) != 0u && (u32)((s32)((rd32(param_1 + 0x9cu) << 8u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = rd32(param_1 + 0x70u);
        a.r[1] = 0x1du;
        r3 = tc_call(0x80031cf8u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r30 = r3;
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x48u);
            if (r3 != 0u) {
                f1 = px_pack((f64)rdf32(r3), (f64)rdf32(r3));
                f2 = px_pack((f64)rdf32(r3 + 8u), 1.0);
                wrf32d(0x817fdfc0u, px_hi(f1));
                wrf32d(0x817fdfc0u, px_lo(f1));
                wrf32d(0x817fdfc8u, px_hi(f2));
                r6 = rd32(0x817fdfc4u);
                r0 = rd32(0x817fdfc8u);
                wr32(0x817fdfb4u, rd32(0x817fdfc0u));
                wr32(0x817fdfb8u, r6);
                wr32(0x817fdfbcu, r0);
                a.r[0] = 0x817fdfb4u;
                a.r[1] = param_1 + 0xd4u;
                a.r[2] = 0x817fdfb4u;
                (void)tc_call(0x802343a4u, &a);
                f4 = (f64)rdf32(0x817fdfb4u);
                f3 = (f64)rdf32(0x817fdfb8u);
                f0 = (f64)rdf32(0x817fdfbcu);
                wrf32d(0x817fdfc0u, f4);
                wrf32d(0x817fdfc4u, f3);
                wrf32d(0x817fdfc8u, f0);
                r3 = rd32(r30 + 0x48u);
                f1 = px_pack((f64)rdf32(r3), (f64)rdf32(r3));
                f2 = px_pack((f64)rdf32(r3 + 8u), 1.0);
                t20 = param_1 + 0xd4u;
                wrf32d(t20, px_hi(f1));
                wrf32d(t20, px_lo(f1));
                wrf32d(param_1 + 0xdcu, px_hi(f2));
                wrf32d(0x817fdfc4u, (f64)rdf32(0x80572550u));
                if (rd32(param_1 + 0xb8u) == 0u) {
                    f4 = (f64)rdf32(0x80572564u);
                    f0 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdfc0u));
                    if (!(f4 < f0)) {
                        f4 = f0;
                    }
                    if (!((f64)rdf32(0x817fdfc0u) > (f64)rdf32(0x80572550u))) {
                        f0 = (f64)rdf32(0x80572560u);
                    } else {
                        f0 = (f64)rdf32(0x80572554u);
                    }
                    f0 = (f64)(f32)px_pmul(f0, f4);
                    f4 = (f64)rdf32(0x80572564u);
                    f3 = ppc_fabs((f64)rdf32(0x817fdfc8u));
                    wrf32d(0x817fdfc0u, f0);
                    f0 = (f64)(f32)f3;
                    if (!(f4 < f0)) {
                        f4 = f0;
                    }
                    f3 = (f64)rdf32(0x817fdfc8u);
                    if (!(f3 > (f64)rdf32(0x80572550u))) {
                        f0 = (f64)rdf32(0x80572560u);
                    } else {
                        f0 = (f64)rdf32(0x80572554u);
                    }
                    f0 = (f64)(f32)px_pmul(f0, f4);
                    wrf32d(0x817fdfc8u, f0);
                }
                f0 = (f64)rdf32(0x80572550u);
                wrf32d(rd32(r30 + 0x48u) + 8u, f0);
                r4 = rd32(r30 + 0x48u);
                wrf32d(r4, f0);
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                f31 = f1;
                r3 = rd32(0x817fdfc4u);
                r0 = rd32(0x817fdfc8u);
                wr32(0x817fdfa8u, rd32(0x817fdfc0u));
                wr32(0x817fdfacu, r3);
                wr32(0x817fdfb0u, r0);
                a.f[0] = f1;
                f1 = tc_callf(0x80262704u, &a);
                f30 = (f64)(f32)f1;
                a.f[0] = f31;
                f1 = tc_callf(0x80262b10u, &a);
                f6 = (f64)(f32)f1;
                f3 = (f64)rdf32(0x817fdfb0u);
                f5 = (f64)rdf32(0x817fdfa8u);
                wrf32d(0x817fdfc0u, (f64)(f32)px_sfma(f5, f30, (f64)(f32)px_pmul(f3, f6)));
                wrf32d(0x817fdfc8u, (f64)(f32)px_sfma(f5, -f6, (f64)(f32)px_pmul(f3, f30)));
                a.r[0] = 0x817fdfccu;
                a.r[1] = 0x817fdfc0u;
                a.r[2] = 0x817fdfccu;
                f1 = tc_callf(0x80234380u, &a);
                r4 = tc_lastr4();
            }
        }
    }
    if ((u32)((s32)((rd32(param_1 + 0x9cu) << 9u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = 0x817fdfccu;
        a.r[1] = param_1 + 0x90u;
        a.r[2] = 0x817fdfccu;
        (void)tc_call(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfccu;
        f1 = tc_callf(0x800629e8u, &a);
        r4 = tc_lastr4();
        f3 = 0.0;
        f4 = 0.0;
        wrf32d(param_1 + 0x84u, (f64)rdf32(0x817fdfccu));
        wrf32d(param_1 + 0x88u, (f64)rdf32(0x817fdfd0u));
        wrf32d(param_1 + 0x8cu, (f64)rdf32(0x817fdfd4u));
    } else {
        f4 = (f64)rdf32(param_1 + 0x28u);
        f3 = (f64)rdf32(param_1 + 0x2cu);
        f0 = (f64)rdf32(param_1 + 0x30u);
        wrf32d(param_1 + 0x84u, f4);
        wrf32d(param_1 + 0x88u, f3);
        wrf32d(param_1 + 0x8cu, f0);
        wrf32d(0x817fdfccu, f4);
        wrf32d(0x817fdfd0u, (f64)rdf32(param_1 + 0x88u));
        wrf32d(0x817fdfd4u, (f64)rdf32(param_1 + 0x8cu));
    }
    c0eq = rd32(param_1 + 0xf8u) == 0u;
    wrf32d(param_1 + 0x90u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x94u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x98u, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 4u, (f64)rdf32(0x817fdfccu));
    wrf32d(param_1 + 8u, (f64)rdf32(0x817fdfd0u));
    wrf32d(param_1 + 0xcu, (f64)rdf32(0x817fdfd4u));
    if (!c0eq && rd32(param_1 + 0x110u) != 0u) {
        if (rd32(param_1 + 0x114u) != 0u) {
            f30 = (f64)rdf32(param_1 + 0x10cu);
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0x100u);
            a.r[2] = 1u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            a.f[0] = (f64)rdf32(0x80572550u);
            a.f[1] = 0.0;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f30;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x50u), &a);
            r4 = tc_lastr4();
            f3 = 0.0;
            f4 = 0.0;
        }
        wr32(param_1 + 0x110u, 1u);
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
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xb0u), &a);
    return;
}
