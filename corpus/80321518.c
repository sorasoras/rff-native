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

u32 fn_80321518(f64 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f3 = 0.0, f4 = 0.0, f6 = 0.0;
    (void)param_2;
    r4 = param_3;
    if ((f64)rdf32(0x805779f8u) != param_1) {
        f6 = rdf64(0x80577a10u);
        f4 = (f64)rdf32(0x805779fcu);
        f0 = (f64)rdf32(0x80577a08u);
        r3 = (rd32((u32)param_4 + 0xecu) * 0x343fdu) + 0x269ec3u;
        wr32((u32)param_4 + 0xecu, r3);
        f4 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)((r3 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f6), f4);
        f3 = (f64)(f32)(param_1 * (f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f6) * f4));
        if ((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f6) - f3) < f0) {
            r4 = 1u;
        } else {
            if ((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f6) - f3) > (f64)rdf32(0x80577a20u)) {
                r4 = 0xffffu;
            } else {
                r4 = (param_3 - (u32)px_f2b(px_ctiw(f3, ppc_fctiwz(f3)))) & 0xffffu;
            }
        }
    }
    return r4;
}
