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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_800ac4c0(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (((rd32(0x8057118cu) & 0x1000u) != 0u && rd32((u32)param_1 + 0xcu) == 3u) && rd32((u32)param_1 + 0x58u) == 0u) {
        wr32((u32)param_1 + 0x58u, param_2);
        f1 = (f64)rdf32(0x80572bd4u);
        wr32((u32)param_1 + 0xcu, 0u);
        f1 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80571118u));
        f0 = (f64)(f32)((f64)rdf32(0x80572bd0u) * f1);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 8u);
        wr32(r3 + 0x6cu, (u32)px_f2b(f0));
    }
    return;
}
