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

void fn_8011f3e8(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x1cu);
    r0 = rd32(r3 + 0x4cu);
    c0eq = r0 == 0u;
    if (c0eq) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011f1d8u, &a);
    } else {
        f0 = (f64)rdf32(r3 + 0x5cu);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r4 = (u32)px_f2b(f0);
        if (!c0eq) {
            a.r[0] = r0;
            a.r[1] = r4;
            (void)tc_call(0x802f5fd8u, &a);
        }
    }
    return;
}
