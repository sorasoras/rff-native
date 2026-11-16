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

u32 fn_8020fe48(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r0 = rd32(param_1 + 0x78u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0x817fdfc0u;
        (void)tc_call(0x80031998u, &a);
        f1 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
        f2 = px_pack((f64)rdf32(0x817fdfc8u), 1.0);
        wrf32d(0x817fdfb4u, px_hi(f1));
        wrf32d(0x817fdfb4u, px_lo(f1));
        wrf32d(0x817fdfbcu, px_hi(f2));
        f1 = px_pack((f64)rdf32(0x817fdfccu), (f64)rdf32(0x817fdfccu));
        f2 = px_pack((f64)rdf32(0x817fdfd4u), 1.0);
        wrf32d(0x817fdfa8u, px_hi(f1));
        wrf32d(0x817fdfa8u, px_lo(f1));
        wrf32d(0x817fdfb0u, px_hi(f2));
        f5 = (f64)rdf32(0x80576870u);
        f3 = (f64)rdf32(0x80576874u);
        f4 = (f64)rdf32(0x8057685cu);
        f0 = (f64)rdf32(0x80576878u);
        wrf32d(0x817fdfb4u, f5);
        wrf32d(0x817fdfbcu, f5);
        wrf32d(0x817fdfb8u, f4);
        wrf32d(0x817fdfa8u, f3);
        wrf32d(0x817fdfb0u, f3);
        wrf32d(0x817fdfacu, f0);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x817fdfb4u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfb4u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x817fdfa8u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfa8u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = f1;
        a.r[0] = param_1 + 0x80u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfb4u;
        a.r[3] = 0x817fdfa8u;
        (void)tc_call(0x800ca4dcu, &a);
    }
    return param_1 + 0x80u;
}
