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

void fn_801d46b4(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f10 = 0.0, f11 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f11 = (f64)rdf32(0x80576020u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    f1 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd04u));
    f2 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd08u));
    f3 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd0cu));
    f4 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd10u));
    f5 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd14u));
    f6 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd18u));
    f7 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd1cu));
    f8 = (f64)rdf32((u32)param_1 + 0xd20u);
    wrf32d((u32)param_1 + 0xd00u, (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd00u)));
    f0 = (f64)(f32)(f11 * f8);
    f10 = (f64)rdf32((u32)param_1 + 0xd28u);
    f8 = (f64)(f32)(f11 * (f64)rdf32((u32)param_1 + 0xd24u));
    wrf32d((u32)param_1 + 0xd04u, f1);
    wrf32d((u32)param_1 + 0xd08u, f2);
    wrf32d((u32)param_1 + 0xd0cu, f3);
    wrf32d((u32)param_1 + 0xd10u, f4);
    wrf32d((u32)param_1 + 0xd14u, f5);
    wrf32d((u32)param_1 + 0xd18u, f6);
    wrf32d((u32)param_1 + 0xd1cu, f7);
    wrf32d((u32)param_1 + 0xd20u, f0);
    wrf32d((u32)param_1 + 0xd24u, f8);
    wrf32d((u32)param_1 + 0xd28u, (f64)(f32)(f11 * f10));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d4810u, &a);
    wr32(0x817fdfccu, rd32((u32)param_1 + 0xd78u));
    a.r[0] = 0x817fdfccu;
    a.r[1] = 9u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf64(0x817fdfd0u, px_ctiw(f1, ppc_fctiwz(f1)));
    wr32((u32)param_1 + 0xd40u, rd32(0x817fdfd4u));
    a.r[0] = 0x817fdfccu;
    a.r[1] = 0xau;
    f1 = tc_callf(0x8014a130u, &a);
    r0 = rd32((u32)param_1 + 0xd78u) + 1u;
    wrf64(0x817fdfd8u, px_ctiw(f1, ppc_fctiwz(f1)));
    wr32((u32)param_1 + 0xd44u, rd32(0x817fdfdcu));
    wr32(0x817fdfc8u, r0);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 6u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf64(0x817fdfe0u, px_ctiw(f1, ppc_fctiwz(f1)));
    wr32((u32)param_1 + 0xd48u, rd32(0x817fdfe4u));
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 7u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf64(0x817fdfe8u, px_ctiw(f1, ppc_fctiwz(f1)));
    wr32((u32)param_1 + 0xd4cu, rd32(0x817fdfecu));
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 8u;
    f1 = tc_callf(0x8014a130u, &a);
    wr32((u32)param_1 + 0xd74u, 2u);
    wrf64(0x817fdff0u, px_ctiw(f1, ppc_fctiwz(f1)));
    wr32((u32)param_1 + 0xd50u, rd32(0x817fdff4u));
    return;
}
