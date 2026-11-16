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

void fn_800d3f68(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f28 = param_1;
    f29 = param_2;
    a.r[0] = param_3;
    r3 = tc_call(0x800d5790u, &a);
    if (r3 == 0u) {
        f1 = tc_callf(0x800d5a90u, &a);
        f28 = (f64)(f32)(param_1 + f1);
    }
    a.r[0] = param_3;
    r3 = tc_call(0x800d3f48u, &a);
    if (r3 != 0u) {
        f31 = (f64)rdf32(0x8057316cu);
        f30 = f31;
    } else {
        f31 = (f64)rdf32(0x80573164u);
        f30 = (f64)rdf32(0x80573168u);
    }
    if (!(f28 > f31)) {
        f28 = f31;
    }
    if (!(param_2 > f30)) {
        f29 = f30;
    }
    a.r[0] = param_3;
    f1 = tc_callf(0x800d59d8u, &a);
    if (f1 > (f64)rdf32(0x80573124u)) {
        a.r[0] = param_3;
        f1 = tc_callf(0x800d59d8u, &a);
        f28 = f1;
    }
    a.r[0] = param_3;
    f1 = tc_callf(0x800d59e0u, &a);
    if (f1 > (f64)rdf32(0x80573124u)) {
        a.r[0] = param_3;
        f1 = tc_callf(0x800d59e0u, &a);
        f29 = f1;
    }
    a.r[0] = param_3;
    r3 = tc_call(0x800d3f48u, &a);
    if (r3 == 0u) {
        f28 = (f64)(f32)(f28 - f31);
        f5 = (f64)rdf32(0x80570788u);
        f29 = (f64)(f32)(f29 - f30);
        f1 = (f64)rdf32(0x8057078cu);
        f4 = (f64)rdf32(0x80573110u);
        f3 = rdf64(0x80573158u);
        f2 = (f64)(f32)(f4 + (f64)(f32)px_fdiv(f28, f5));
        f0 = (f64)(f32)(f4 + (f64)(f32)px_fdiv(f29, f1));
        f2 = px_ctiw(f2, ppc_fctiwz(f2));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        f2 = px_b2f((u64)((u32)px_f2b(f2) ^ 0x80000000u) | 0x4330000000000000ull);
        f0 = px_b2f((u64)((u32)px_f2b(f0) ^ 0x80000000u) | 0x4330000000000000ull);
        f2 = (f64)(f32)(f2 - f3);
        f0 = (f64)(f32)(f0 - f3);
        f28 = (f64)(f32)((f64)(f32)(f5 * f2) + f31);
        f29 = (f64)(f32)((f64)(f32)(f1 * f0) + f30);
    }
    a.r[0] = param_3;
    r3 = tc_call(0x800d3f48u, &a);
    if (r3 == 0u) {
        f0 = (f64)rdf32(0x80573178u);
        f1 = (f64)rdf32(0x80573140u);
    } else {
        f0 = (f64)rdf32(0x80573170u);
        f1 = (f64)rdf32(0x80573174u);
    }
    if (!(f0 < f28)) {
        f0 = f28;
    }
    if (!(f1 < f29)) {
        f1 = f29;
    }
    wrf32d(param_4, f0);
    wrf32d(param_5, f1);
    return;
}
