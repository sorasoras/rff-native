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

void fn_800a3928(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f5 = 0.0, f6 = 0.0, f9 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572ae0u);
    wr32(0x817fe004u, 0x817ff000u);
    f9 = (f64)(f32)(f0 * param_f5);
    f5 = (f64)(f32)(f0 * param_f7);
    f6 = (f64)(f32)(f0 * param_f6);
    f0 = (f64)(f32)(f0 * param_f8);
    f6 = px_ctiw(f6, ppc_fctiwz(f6));
    f5 = px_ctiw(f5, ppc_fctiwz(f5));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfe0u, px_ctiw(f9, ppc_fctiwz(f9)));
    wrf64(0x817fdfe8u, f6);
    r6 = rd32(0x817fdfe4u);
    wrf64(0x817fdff0u, f5);
    r5 = rd32(0x817fdfecu);
    wrf64(0x817fdff8u, f0);
    r4 = rd32(0x817fdff4u);
    r0 = rd32(0x817fdffcu);
    wr8(0x817fdfdcu, (u8)r6);
    wr8(0x817fdfddu, (u8)r5);
    wr8(0x817fdfdeu, (u8)r4);
    wr8(0x817fdfdfu, (u8)r0);
    wr32(0x817fdfd8u, rd32(0x817fdfdcu));
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x800a376cu, &a);
    return;
}
