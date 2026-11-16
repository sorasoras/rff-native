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

f64 fn_80254460(u32 param_1)
{
    u32 r4 = 0, t0 = 0, t3 = 0, t6 = 0, t9 = 0, t10 = 0, t11 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    if (rd32(rd32(0x80576c88u) + 0x528u) != 0u) {
        f0 = (f64)rdf32(0x80576d54u);
    } else {
        f0 = (f64)rdf32(0x80576d50u);
    }
    wrf32d(param_1, f0);
    r4 = rd32(0x80576c88u);
    t0 = r4 + 0x52cu;
    f2 = px_pack((f64)rdf32(t0), (f64)rdf32(t0));
    t3 = r4 + 0x534u;
    f1 = px_pack((f64)rdf32(t3), (f64)rdf32(t3));
    t6 = r4 + 0x53cu;
    f0 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
    t9 = param_1 + 4u;
    wrf32d(t9, px_hi(f2));
    wrf32d(t9, px_lo(f2));
    t10 = param_1 + 0xcu;
    wrf32d(t10, px_hi(f1));
    wrf32d(t10, px_lo(f1));
    t11 = param_1 + 0x14u;
    wrf32d(t11, px_hi(f0));
    wrf32d(t11, px_lo(f0));
    return f1;
}
