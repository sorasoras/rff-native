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

void fn_80045964(f64 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5, f64 param_f2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f8 = 0.0, f9 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f3 = rdf64(0x80572138u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0x43300000u);
    r0 = (u32)param_5 - 4u;
    wr32(0x817fdfdcu, ((u32)param_5 - 2u) ^ 0x80000000u);
    f0 = rdf64(0x817fdfd8u);
    wr32(0x817fdffcu, 0u);
    f0 = (f64)(f32)(f0 - f3);
    wr32(0x817fdff8u, 0u);
    f1 = (f64)(f32)(param_1 * f0);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wrf64(0x817fdfe0u, px_ctiw(f1, ppc_fctiwz(f1)));
    r30 = rd32(0x817fdfe4u);
    if ((s32)r30 > (s32)r0) {
        f1 = (f64)rdf32(0x8057211cu);
        r30 = r0;
    } else {
        wr32(0x817fdfe0u, 0x43300000u);
        wr32(0x817fdfe4u, r30 ^ 0x80000000u);
        f1 = (f64)(f32)(f1 - (f64)(f32)(rdf64(0x817fdfe0u) - f3));
    }
    a.f[0] = f1;
    a.f[1] = param_f2;
    a.r[0] = 0x817fdfc8u;
    (void)tc_call(0x800456b8u, &a);
    r5 = (u32)param_3 + ((u32)param_4 * (r30 + 1u));
    f5 = (f64)rdf32(r5 + 4u);
    r4 = ((u32)param_4 * r30) + (u32)param_3;
    f1 = (f64)rdf32(r5 + 8u);
    r3 = ((u32)param_4 * (r30 + 2u)) + (u32)param_3;
    f8 = (f64)rdf32(r4 + 4u);
    f9 = ppc_fmadds((f64)rdf32(0x817fdfd0u), (f64)rdf32(r3), ppc_fmadds((f64)rdf32(0x817fdfc8u), (f64)rdf32(r4), (f64)(f32)((f64)rdf32(0x817fdfccu) * (f64)rdf32(r5))));
    f4 = (f64)rdf32(r4 + 8u);
    r0 = (u32)param_4 * (r30 + 3u);
    f6 = (f64)rdf32(r3 + 4u);
    f2 = (f64)rdf32(r3 + 8u);
    r3 = (u32)param_3 + r0;
    f3 = (f64)rdf32(r3 + 4u);
    f0 = (f64)rdf32(r3 + 8u);
    wrf32d(param_2, ppc_fmadds((f64)rdf32(0x817fdfd4u), (f64)rdf32((u32)param_3 + r0), f9));
    f8 = ppc_fmadds((f64)rdf32(0x817fdfc8u), f8, (f64)(f32)((f64)rdf32(0x817fdfccu) * f5));
    f6 = ppc_fmadds((f64)rdf32(0x817fdfd0u), f6, f8);
    f3 = ppc_fmadds((f64)rdf32(0x817fdfd4u), f3, f6);
    wrf32d(param_2 + 4u, f3);
    f4 = ppc_fmadds((f64)rdf32(0x817fdfc8u), f4, (f64)(f32)((f64)rdf32(0x817fdfccu) * f1));
    f2 = ppc_fmadds((f64)rdf32(0x817fdfd0u), f2, f4);
    f0 = ppc_fmadds((f64)rdf32(0x817fdfd4u), f0, f2);
    wrf32d(param_2 + 8u, f0);
    return;
}
