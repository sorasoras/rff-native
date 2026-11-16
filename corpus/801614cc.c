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

void fn_801614cc(s32 param_1)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007ae84u, &a);
    wr32((u32)param_1 + 0x150u, 1u);
    a.r[0] = (u32)param_1 + 0x1cu;
    (void)tc_call(0x8004cdecu, &a);
    r4 = (u32)rd16((u32)param_1 + 0x110u);
    f6 = (f64)rdf32(0x80574ad0u);
    f4 = rdf64(0x80574ae0u);
    f0 = (f64)rdf32(0x80574adcu);
    f5 = (f64)rdf32(0x80574ad4u);
    f1 = (f64)rdf32(0x80574ad8u);
    f3 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f4), (f64)(f32)(px_b2f((u64)rd16((u32)param_1 + 0x112u) | 0x4330000000000000ull) - f4));
    wrf32d((u32)param_1 + 0x2cu, f6);
    wrf32d((u32)param_1 + 0x30u, f6);
    wrf32d((u32)param_1 + 0x34u, f6);
    wrf32d((u32)param_1 + 0x20u, f6);
    wrf32d((u32)param_1 + 0x24u, f6);
    wrf32d((u32)param_1 + 0x28u, f5);
    f1 = (f64)(f32)(f1 * (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f4));
    wrf32d((u32)param_1 + 0xf8u, f3);
    f1 = (f64)(f32)px_fdiv(f1, f3);
    wrf32d((u32)param_1 + 0x154u, f0);
    wrf32d((u32)param_1 + 0x158u, f0);
    wrf32d((u32)param_1 + 0x15cu, f0);
    wrf32d((u32)param_1 + 0x160u, f0);
    wrf32d((u32)param_1 + 0x118u, f1);
    return;
}
