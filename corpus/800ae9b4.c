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

void fn_800ae9b4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x70u);
    if (r3 != 0u) {
        r4 = rd32(r3 + 0x70u);
        if (r4 != 0u) {
            f2 = (f64)rdf32(r4 + 0x14u);
            if (f2 > (f64)rdf32(0x80572bf8u)) {
                f1 = (f64)rdf32(r4 + 0x1cu);
                if (f1 > f2) {
                    r0 = 0u;
                } else {
                    f0 = (f64)(f32)((f64)rdf32(0x80572c00u) + f1);
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    r0 = (u32)px_f2b(f0);
                }
                a.f[0] = (f64)(f32)(px_b2f((u64)(r0 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572c08u));
                a.r[0] = r3;
                (void)tc_call(0x80040728u, &a);
            }
        }
    }
    return;
}
