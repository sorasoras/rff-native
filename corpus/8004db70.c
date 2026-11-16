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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

s32 fn_8004db70(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1;
    a.f[0] = 0.0;
    (void)tc_call(rd32((u32)param_1 + 0x14u), &a);
    f0 = (f64)(f32)((f64)rdf32(0x80572210u) * (f64)rdf32(0x817fdfe8u));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdff0u, f0);
    return (s32)rd32(0x817fdff4u);
}
