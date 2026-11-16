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

u32 fn_8020b948(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0;
    if ((u32)((s32)rd32((u32)param_1 + 0x80u) >> 31) != 0u) {
        r4 = rd32((u32)param_1 + 0x70u);
        if (r4 != 0u) {
            f0 = (f64)rdf32(r4 + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r3 = ((rd32((u32)param_1 + 0xb4u) << 3u) & 0xfffffff8u) - 0x7fc87ec8u;
            r4 = (u32)px_f2b(f0);
            if ((s32)r4 >= (s32)rd32(r3 - 0x50u) && (s32)r4 <= (s32)rd32(r3 - 0x4cu)) {
                r3 = 1u;
                return r3;
            }
        }
    }
    r3 = 0u;
    return r3;
}
