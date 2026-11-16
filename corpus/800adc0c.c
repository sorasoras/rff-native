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

u32 fn_800adc0c(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(param_1);
    a.f[1] = (f64)rdf32(0x80572bc0u);
    a.f[2] = (f64)rdf32(0x80572bf0u);
    f1 = tc_callf(0x800acaf8u, &a);
    f0 = px_ctiw(f1, ppc_fctiwz(f1));
    f1 = (f64)rdf32(param_1 + 4u);
    f2 = (f64)rdf32(0x80572bc0u);
    f3 = (f64)rdf32(0x80572bf0u);
    wr8(0x817fdfc8u, (u8)px_f2b(f0));
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    f1 = tc_callf(0x800acaf8u, &a);
    f0 = px_ctiw(f1, ppc_fctiwz(f1));
    f1 = (f64)rdf32(param_1 + 8u);
    f2 = (f64)rdf32(0x80572bc0u);
    f3 = (f64)rdf32(0x80572bf0u);
    wr8(0x817fdfc9u, (u8)px_f2b(f0));
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    f1 = tc_callf(0x800acaf8u, &a);
    f0 = px_ctiw(f1, ppc_fctiwz(f1));
    f1 = (f64)rdf32(param_1 + 0xcu);
    f2 = (f64)rdf32(0x80572bc0u);
    f3 = (f64)rdf32(0x80572bf0u);
    wr8(0x817fdfcau, (u8)px_f2b(f0));
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    f1 = tc_callf(0x800acaf8u, &a);
    wr8(0x817fdfcbu, (u8)px_f2b(px_ctiw(f1, ppc_fctiwz(f1))));
    return rd32(0x817fdfc8u);
}
