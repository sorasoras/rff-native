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

u32 fn_8011f330(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r4 = rd32((u32)param_1 + 0x1cu);
    r3 = rd32(r4 + 0x4cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x4cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x802f5fc0u, &a);
        }
        r3 = rd32((u32)param_1 + 0x1cu);
        f0 = (f64)rdf32(r3 + 0x5cu);
        r3 = rd32(r3 + 0x4cu);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r4 = (u32)px_f2b(f0);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            (void)tc_call(0x802f643cu, &a);
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 1u;
        (void)tc_call(0x8011f1d8u, &a);
    }
    return 1u;
}
