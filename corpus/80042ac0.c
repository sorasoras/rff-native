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

s32 fn_80042ac0(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(param_1 + 0xcu);
    f1 = tc_callf(0x80262c60u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)(f32)ppc_fabs(f1) < (f64)rdf32(0x80572080u)) {
        f0 = (f64)rdf32(0x80572084u);
        wrf32d(param_2, f0);
        wrf32d(param_2 + 4u, f0);
        wrf32d(param_2 + 8u, f0);
    } else {
        f3 = (f64)(f32)px_fdiv((f64)rdf32(0x80572060u), f1);
        f1 = (f64)(f32)((f64)rdf32(param_1 + 4u) * f3);
        f0 = (f64)(f32)((f64)rdf32(param_1 + 8u) * f3);
        wrf32d(param_2, (f64)(f32)((f64)rdf32(param_1) * f3));
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f0);
    }
    f0 = (f64)(f32)((f64)rdf32(0x80572088u) * f31);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    return (s32)px_f2b(f0);
}
