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

u32 fn_80148db4(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801f02a4u, &a);
    a.r[0] = param_1 + 0x150u;
    f1 = tc_callf(0x80147160u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0xe0u), &a);
    f1 = (f64)rdf32(param_1 + 0x768u);
    f0 = (f64)rdf32(0x80574688u);
    wr32(param_1 + 0x148u, 1u);
    f0 = (f64)(f32)(f0 * f1);
    wr32(param_1 + 0x770u, 0u);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32(param_1 + 0x14cu, 0u);
    wr32(param_1 + 0x76cu, (u32)px_f2b(f0));
    return 0u;
}
