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

void fn_8030022c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r31 = 0, t3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, t7 = 0.0, t9 = 0.0, t12 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    t3 = param_2 + 0x30u;
    t7 = (f64)(f32)((f64)rdf32((u32)param_3 + 4u) - (f64)rdf32(t3 + 4u));
    t9 = (f64)rdf32((u32)param_3 + 8u);
    t12 = (f64)rdf32(param_2 + 0x38u);
    wrf32d(0x817fdfc8u, (f64)(f32)((f64)rdf32((u32)param_3) - (f64)rdf32(t3)));
    wrf32d(0x817fdfccu, t7);
    wrf32d(0x817fdfd0u, (f64)(f32)(t9 - t12));
    a.r[0] = 0x817fdfc8u;
    f1 = tc_callf(0x80234440u, &a);
    r3 = (u32)rd8((u32)param_3 + 0x1du);
    wr32(0x817fdfd8u, 0x43300000u);
    f5 = (f64)rdf32(param_2 + 0x4cu);
    wr32(0x817fdfdcu, r3);
    f4 = (f64)rdf32(param_2 + 0x50u);
    r31 = rd32(param_1 + 0x1cu);
    r0 = (u32)rd8((u32)param_3 + 0x1cu);
    f2 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - rdf64(0x80577708u)) * (f64)rdf32(0x805776f8u));
    f3 = (f64)rdf32(0x805776fcu);
    if (f1 > f5) {
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            f1 = (f64)(f32)(f1 - f5);
            f0 = (f64)rdf32(0x80577700u);
            f2 = (f64)(f32)(f3 - f2);
            f1 = (f64)(f32)px_fdiv(f1, f4);
            f1 = (f64)(f32)(f2 * f1);
            f3 = (f64)(f32)(f3 - f1);
            if (f3 < f0) {
                f3 = f0;
            }
        } else if (c0lt && (s32)r0 >= 1) {
            a.f[0] = f2;
            a.f[1] = (f64)(f32)px_fdiv((f64)(f32)(f1 - f5), f4);
            f1 = tc_callf(0x80262c74u, &a);
            f3 = (f64)(f32)f1;
        }
    }
    f0 = (f64)rdf32(0x805776fcu);
    wr32(0x817fdfdcu, r31 ^ 0x80000000u);
    f1 = rdf64(0x80577710u);
    f2 = (f64)(f32)(f0 - f3);
    wr32(0x817fdfd8u, 0x43300000u);
    f0 = rdf64(0x817fdfd8u);
    wrf32d(param_4, f3);
    f0 = (f64)(f32)(f0 - f1);
    f0 = (f64)(f32)(f2 * f0);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfe0u, f0);
    wr32(param_5, 0u - rd32(0x817fdfe4u));
    return;
}
