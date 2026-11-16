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

f64 fn_80178164(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80574fa4u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = (u32)param_1 + 0x10cu;
    (void)tc_call(0x8004c730u, &a);
    f2 = (f64)rdf32(0x817fdfecu);
    f0 = (f64)rdf32(0x80574fa4u);
    wrf32d(0x817fdfd8u, (f64)rdf32(0x817fdfe4u));
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfe0u, f2);
    a.r[0] = 0x817fdfd8u;
    f1 = tc_callf(0x80234440u, &a);
    a.f[0] = -(f64)rdf32(0x817fdfe8u);
    a.f[1] = f1;
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    f0 = (f64)rdf32(0x80574f8cu);
    f3 = rdf64(0x80574f98u);
    wr32(0x817fdff8u, 0x43300000u);
    f2 = (f64)(f32)(f0 * f1);
    f1 = (f64)rdf32(0x80574fb0u);
    f0 = (f64)rdf32(0x80574fb4u);
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    wrf64(0x817fdff0u, f2);
    wr32(0x817fdffcu, (u32)(s16)rd32(0x817fdff4u) ^ 0x80000000u);
    f1 = (f64)(f32)(f1 * (f64)(f32)(rdf64(0x817fdff8u) - f3));
    f1 = (f64)(f32)(f0 * f1);
    return f1;
}
