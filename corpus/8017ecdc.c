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

void fn_8017ecdc(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80575058u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    f2 = (f64)(f32)((f64)rdf32(param_1 + 0x88u) + (f64)rdf32(param_1 + 0xa8u));
    wrf32d(param_1 + 0x88u, f2);
    if (f2 > f0) {
        a.r[0] = param_1;
        (void)tc_call(0x8017fafcu, &a);
    } else {
        f1 = (f64)rdf32(0x80575048u);
        if ((f2 > f1) || (f2 == f1)) {
            wrf64(0x817fdff0u, px_ctiw(f2, ppc_fctiwz(f2)));
            if (rd32(0x817fdff4u) == 0u && (u32)((s32)((rd32(param_1 + 0xacu) << 3u) & 0xc0000000u) >> 31) == 0u) {
                wrf32d(0x817fdfecu, f1);
                wrf32d(0x817fdfe8u, f1);
                wrf32d(0x817fdfe4u, f1);
                a.f[0] = f1;
                a.r[0] = param_1 + 0xb4u;
                a.r[1] = 0x817fdfe4u;
                (void)tc_call(0x8017e408u, &a);
                wr32(param_1 + 0xacu, rd32(param_1 + 0xacu) | 0x10000000u);
            }
            f0 = (f64)rdf32(0x80575048u);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfd8u, f0);
            a.f[0] = (f64)rdf32(param_1 + 0x88u);
            a.r[0] = param_1 + 0xb4u;
            a.r[1] = 0x817fdfd8u;
            f1 = tc_callf(0x8017e408u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfd8u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
        }
    }
    return;
}
