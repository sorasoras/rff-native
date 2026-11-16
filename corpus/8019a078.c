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

void fn_8019a078(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0;
    f4 = rdf64(0x805756c0u);
    f7 = (f64)rdf32((u32)param_1 + 0xc8u);
    wr32(0x817fdfecu, (u32)rd8((u32)param_1 + 0x38u));
    f6 = (f64)rdf32((u32)param_1 + 0xd4u);
    wr32(0x817fdfe8u, 0x43300000u);
    f3 = (f64)rdf32(0x805756c8u);
    f11 = (f64)rdf32((u32)param_1 + 0xd0u);
    f5 = (f64)rdf32(0x805756b4u);
    f10 = rdf64(0x80575690u);
    f12 = (f64)(f32)(f11 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfe8u) - f4), f3));
    f2 = (f64)rdf32((u32)param_1 + 0xc4u);
    f0 = (f64)(f32)(px_b2f((u64)rd8((u32)param_1 + 0x3au) | 0x4330000000000000ull) - f4);
    f1 = px_b2f((u64)rd8((u32)param_1 + 0x39u) | 0x4330000000000000ull);
    wrf32d((u32)param_1 + 0x158u, f2);
    f8 = (f64)(f32)(f1 - f4);
    f4 = (f64)(f32)px_fdiv(f0, f3);
    f3 = (f64)rdf32((u32)param_1 + 0xd8u);
    wrf32d((u32)param_1 + 0x164u, f12);
    f0 = (f64)rdf32(0x805756ccu);
    wrf32d((u32)param_1 + 0x320u, f12);
    wrf32d((u32)param_1 + 0x16cu, f3);
    f9 = (f64)(f32)(f11 * f4);
    wrf32d((u32)param_1 + 0x15cu, f7);
    f1 = (f64)(f32)(f2 + f12);
    wrf32d((u32)param_1 + 0x168u, f6);
    wrf32d((u32)param_1 + 0x280u, f1);
    wrf32d((u32)param_1 + 0x28cu, f9);
    wrf32d((u32)param_1 + 0x3b4u, f9);
    wrf32d((u32)param_1 + 0x284u, f7);
    f11 = (f64)(f32)(f11 * (f64)(f32)px_fdiv(f8, f5));
    wrf32d((u32)param_1 + 0x290u, f6);
    f2 = (f64)(f32)(f9 + f1);
    wrf32d((u32)param_1 + 0x1f0u, f7);
    f4 = f10 * f9;
    wrf32d((u32)param_1 + 0x1ecu, f2);
    f12 = (f64)(f32)(f10 * f12);
    wrf32d((u32)param_1 + 0x1f8u, f11);
    f10 = f10 * f11;
    wrf32d((u32)param_1 + 0x1fcu, f6);
    f5 = (f64)(f32)(f3 + f12);
    f8 = (f64)(f32)f4;
    wrf32d((u32)param_1 + 0x170u, f12);
    f1 = ppc_fmadds(f0, f9, f1);
    f10 = (f64)(f32)f10;
    wrf32d((u32)param_1 + 0x32cu, f12);
    f4 = (f64)(f32)(f8 + f5);
    wrf32d((u32)param_1 + 0x298u, f8);
    f0 = ppc_fmadds(f0, f8, f5);
    wrf32d((u32)param_1 + 0x204u, f10);
    f1 = (f64)(f32)(f11 + f1);
    f0 = (f64)(f32)(f10 + f0);
    wrf32d((u32)param_1 + 0x3c0u, f8);
    wrf32d((u32)param_1 + 0x294u, f5);
    wrf32d((u32)param_1 + 0x200u, f4);
    wrf32d((u32)param_1 + 0x3a8u, (f64)(f32)(f11 + f2));
    wrf32d((u32)param_1 + 0x3bcu, (f64)(f32)(f10 + f4));
    wrf32d((u32)param_1 + 0x3acu, f7);
    wrf32d((u32)param_1 + 0x3b8u, f6);
    wrf32d((u32)param_1 + 0x314u, f1);
    wrf32d((u32)param_1 + 0x328u, f0);
    wrf32d((u32)param_1 + 0x318u, f7);
    wrf32d((u32)param_1 + 0x324u, f6);
    return;
}
