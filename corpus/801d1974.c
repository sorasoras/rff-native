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

void fn_801d1974(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x34cu);
    if (r0 == 3u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r0 = rd32((u32)param_1 + r0 + 0x374u);
        if (rd32((u32)param_1 + 0x100u) == r0) {
            f0 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if (!((s32)px_f2b(f0) < 27) && (rd32((u32)param_1 + 0x3b0u) & 1u) == 0u) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xfbfu;
                (void)tc_call(0x8010a74cu, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = 1u;
                (void)tc_call(0x801d1744u, &a);
                wr32((u32)param_1 + 0x3b0u, rd32((u32)param_1 + 0x3b0u) | 1u);
            }
        }
    }
    return;
}
