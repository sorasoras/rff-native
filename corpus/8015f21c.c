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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_8015f21c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r6 = 0;
    f64 f0 = 0.0, f3 = 0.0;
    r6 = 0u;
    if ((u32)param_2 != 0x2e8u) {
        r6 = (u32)rd16((u32)param_1 + ((u32)param_2 * 0x34u) + 0x2862u);
    }
    if (param_3 != 0u && param_3 <= 0xau) {
        f3 = rdf64(0x80574a28u);
        f0 = ((px_b2f((u64)r6 | 0x4330000000000000ull) - f3) * (rdf64(0x80574a20u) * (px_b2f((u64)((param_3 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574a30u)))) + (px_b2f((u64)r6 | 0x4330000000000000ull) - f3);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r6 = (u32)px_f2b(f0);
    }
    return r6;
}
