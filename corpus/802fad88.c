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

void fn_802fad88(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0, f4 = 0.0;
    r4 = param_2;
    r6 = rd32((u32)param_1 + 8u);
    r5 = rd32((u32)param_1 + 0x10u);
    if (r5 < r6) {
        r0 = r5 + param_2;
        if (r0 <= r6) {
            wr32((u32)param_1 + 0x10u, r0);
            return;
        }
        wr32((u32)param_1 + 0x10u, r6);
        r4 = param_2 - (r6 - r5);
    }
    r4 = r4 ^ 0x80000000u;
    f4 = rdf64(0x80577670u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x14u) + (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32((u32)param_1 + 4u) * (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f4)), (f64)rdf32(0x80577668u)));
    wrf32d((u32)param_1 + 0x14u, f1);
    wrf32d((u32)param_1 + 0x14u, (f64)(f32)(f1 - (f64)(f32)(px_b2f((u64)((u32)px_f2b(px_ctiw(f1, ppc_fctiwz(f1))) ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
    return;
}
