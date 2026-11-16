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

s32 fn_80090324(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    r0 = 0u;
    f1 = (f64)rdf32(param_2);
    f0 = (f64)rdf32((u32)param_1 + 0x18u);
    if ((f0 < f1) || (f0 == f1)) {
        f0 = (f64)rdf32((u32)param_1 + 0x24u);
        if ((f0 > f1) || (f0 == f1)) {
            f0 = (f64)rdf32((u32)param_1 + 0x20u);
            f1 = (f64)rdf32(param_2 + 8u);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32((u32)param_1 + 0x2cu);
                if ((f0 > f1) || (f0 == f1)) {
                    r0 = 1u;
                }
            }
        }
    }
    if (r0 != 0u) {
        f2 = (f64)(f32)((f64)rdf32(param_2) - (f64)rdf32((u32)param_1 + 0x18u));
        f0 = (f64)(f32)((f64)rdf32(param_2 + 8u) - (f64)rdf32((u32)param_1 + 0x20u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r5 = (u32)((s32)ppc_mulhw(1374389535, (s32)px_f2b(px_ctiw(f2, ppc_fctiwz(f2)))) >> 5);
        r4 = (u32)((s32)ppc_mulhw(1374389535, (s32)px_f2b(f0)) >> 5);
        r4 = r4 + ((r4 >> 0x1fu) & 1u);
        r3 = rd32((u32)param_1 + 8u) + ((r5 + ((r5 >> 0x1fu) & 1u) + (rd32((u32)param_1 + 4u) * r4)) * 0x9cu);
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
