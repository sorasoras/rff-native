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

u32 fn_80051534(f32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = param_2;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(param_2) != (u32)param_3 && (u32)param_3 != 0u) {
        a.r[0] = (u32)param_3;
        a.r[1] = 0x817fdfe0u;
        r3 = tc_call(0x80031998u, &a);
        f1 = px_pack((f64)rdf32(0x817fdfe0u), (f64)rdf32(0x817fdfe0u));
        f2 = px_pack((f64)rdf32(0x817fdfe8u), 1.0);
        wrf32d(0x817fdfd4u, px_hi(f1));
        wrf32d(0x817fdfd4u, px_lo(f1));
        wrf32d(0x817fdfdcu, px_hi(f2));
        f3 = (f64)rdf32(0x817fdfd8u);
        f0 = (f64)rdf32(0x817fdfdcu);
        wrf32d(param_2 + 0x28u, (f64)rdf32(0x817fdfd4u));
        wrf32d(param_2 + 0x2cu, f3);
        wrf32d(param_2 + 0x30u, f0);
        f1 = px_pack((f64)rdf32(0x817fdfecu), (f64)rdf32(0x817fdfecu));
        f2 = px_pack((f64)rdf32(0x817fdff4u), 1.0);
        wrf32d(0x817fdfc8u, px_hi(f1));
        wrf32d(0x817fdfc8u, px_lo(f1));
        wrf32d(0x817fdfd0u, px_hi(f2));
        f3 = (f64)rdf32(0x817fdfccu);
        f0 = (f64)rdf32(0x817fdfd0u);
        wrf32d(param_2 + 0x34u, (f64)rdf32(0x817fdfc8u));
        wrf32d(param_2 + 0x38u, f3);
        wrf32d(param_2 + 0x3cu, f0);
    }
    wr32(param_2, (u32)param_3);
    return r3;
}
