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

void fn_801eb160(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    r6 = (u32)rd8((u32)param_1 + 0x159cu);
    if (r6 < 9u) {
        r5 = (u32)param_1 + ((r6 << 2u) & 0x3fcu);
        r7 = (u32)rd8(r5 + 0x1578u);
        r8 = r7 + (u32)rd8(r5 + 0x1579u) + (u32)rd8(r5 + 0x157au) + (u32)rd8(r5 + 0x157bu);
        if (r8 != 0u) {
            r5 = r8 ^ 0x80000000u;
            r4 = (u32)param_1 + ((r6 << 2u) & 0xfffffffcu);
            f7 = rdf64(0x80576400u);
            f6 = rdf64(0x805763e8u);
            f5 = rdf64(0x80576438u);
            wrf32d((u32)param_1 + 0x1300u, (f64)rdf32(0x80576348u));
            f4 = (f64)(f32)(f5 * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f7), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f6)));
            wrf32d((u32)param_1 + 0x1304u, f4);
            f3 = px_b2f((u64)rd8(r4 + 0x1579u) | 0x4330000000000000ull);
            wrf32d((u32)param_1 + 0x1394u, f4);
            f3 = (f64)(f32)(f3 - f7);
            f3 = (f64)(f32)(f4 + (f64)(f32)(f5 * (f64)(f32)px_fdiv(f3, (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f6))));
            wrf32d((u32)param_1 + 0x1398u, f3);
            f2 = px_b2f((u64)rd8(r4 + 0x157au) | 0x4330000000000000ull);
            wrf32d((u32)param_1 + 0x1428u, f3);
            f2 = (f64)(f32)(f2 - f7);
            f2 = (f64)(f32)((f64)(f32)(f5 * (f64)(f32)px_fdiv(f2, (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f6))) + f3);
            wrf32d((u32)param_1 + 0x142cu, f2);
            f1 = px_b2f((u64)rd8(r4 + 0x157bu) | 0x4330000000000000ull);
            wrf32d((u32)param_1 + 0x14bcu, f2);
            f1 = (f64)(f32)(f1 - f7);
            f1 = (f64)(f32)((f64)(f32)(f5 * (f64)(f32)px_fdiv(f1, (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f6))) + f2);
            wrf32d((u32)param_1 + 0x14c0u, f1);
        } else {
            f0 = (f64)rdf32(0x80576348u);
            wrf32d((u32)param_1 + 0x1300u, f0);
            wrf32d((u32)param_1 + 0x1304u, f0);
            wrf32d((u32)param_1 + 0x1394u, f0);
            wrf32d((u32)param_1 + 0x1398u, f0);
            wrf32d((u32)param_1 + 0x1428u, f0);
            wrf32d((u32)param_1 + 0x142cu, f0);
            wrf32d((u32)param_1 + 0x14bcu, f0);
            wrf32d((u32)param_1 + 0x14c0u, f0);
        }
    }
    return;
}
