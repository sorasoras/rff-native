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

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pack(f64 a, f64 b)
{
    return px_b2f(((u64)ppc_single_bits(a) << 32) | (u64)ppc_single_bits(b));
}

f64 fn_8025436c(void)
{
    u32 r3 = 0, t0 = 0, t3 = 0, t6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, t1 = 0.0, t4 = 0.0, t7 = 0.0;
    wr8(0xcc008000u, 0x10u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, 0x61020u);
    t0 = r3 + 0x52cu;
    t1 = (f64)rdf32(t0);
    f2 = px_pack(t1, (f64)rdf32(t0));
    t3 = r3 + 0x534u;
    t4 = (f64)rdf32(t3);
    f1 = px_pack(t4, (f64)rdf32(t3));
    t6 = r3 + 0x53cu;
    t7 = (f64)rdf32(t6);
    f0 = px_pack(t7, (f64)rdf32(t6));
    wrf32d(0xcc008000u, px_lo(f2));
    wrf32d(0xcc008000u, px_lo(f1));
    wrf32d(0xcc008000u, px_lo(f0));
    wr32(0xcc008000u, rd32(r3 + 0x528u));
    return f1;
}
