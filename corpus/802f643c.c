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

void fn_802f643c(s32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0;
    if ((u32)rd8((u32)param_1 + 0x7bu) == 0u) {
        r7 = rd32((u32)param_1 + 0x60u);
        r6 = rd32((u32)param_1 + 0x64u);
        if ((s32)r6 >= (s32)r7) {
            f1 = (f64)rdf32((u32)param_1 + 0x5cu);
        } else {
            f4 = rdf64(0x805775b0u);
            f2 = (f64)rdf32((u32)param_1 + 0x58u);
            f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32((u32)param_1 + 0x5cu) - f2)), (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
        }
        f4 = rdf64(0x805775b0u);
        f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32(0x805775a8u) - f1));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r5 = (u32)px_f2b(f0);
        if ((s32)r6 >= (s32)r7) {
            f1 = (f64)rdf32((u32)param_1 + 0x5cu);
        } else {
            f2 = (f64)rdf32((u32)param_1 + 0x58u);
            f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32((u32)param_1 + 0x5cu) - f2)), (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
        }
        f0 = (f64)rdf32(0x805775a8u);
        wrf32d((u32)param_1 + 0x58u, f1);
        wrf32d((u32)param_1 + 0x5cu, f0);
        wr32((u32)param_1 + 0x60u, r5);
        wr32((u32)param_1 + 0x64u, 0u);
    }
    return;
}
