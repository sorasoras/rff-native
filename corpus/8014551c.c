#include "tc_rt.h"

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

void fn_8014551c(s32 param_1, u32 param_2, s32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f11 = 0.0;
    f3 = rdf64(0x805745b8u);
    f9 = (f64)rdf32(0x805745b4u);
    f11 = (f64)rdf32((u32)param_1 + 0x34cu);
    f8 = (f64)rdf32((u32)param_1 + 0x114u);
    f0 = (f64)rdf32((u32)param_1 + 0x348u);
    f7 = (f64)rdf32((u32)param_1 + 0x2c4u);
    f6 = (f64)rdf32(0x80574570u);
    f1 = (f64)(f32)(px_b2f((u64)((param_2 + (u32)param_3) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
    f4 = (f64)rdf32(0x80574590u);
    f2 = ppc_fmadds(f8, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - f3), f9), (f64)rdf32((u32)param_1 + 0x2b8u));
    f3 = (f64)rdf32(0x8057458cu);
    wrf32d((u32)param_1 + 0x24cu, (f64)rdf32((u32)param_1 + 0x2bcu));
    f1 = (f64)(f32)px_fdiv(f1, f9);
    wrf32d((u32)param_1 + 0x2dcu, f11);
    f5 = ppc_fnmsubs(f7, f6, f2);
    f0 = ppc_fmadds(f8, f1, f0);
    wrf32d((u32)param_1 + 0x2b8u, f5);
    f1 = ppc_fnmsubs(f7, f6, f0);
    wrf32d((u32)param_1 + 0x248u, f5);
    wrf32d((u32)param_1 + 0x348u, f1);
    wrf32d((u32)param_1 + 0x2ccu, ppc_fmadds(f3, (f64)(f32)(f4 - f5), f5));
    wrf32d((u32)param_1 + 0x2d8u, f1);
    wrf32d((u32)param_1 + 0x35cu, ppc_fmadds(f3, (f64)(f32)(f4 - f1), f1));
    return;
}
