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

void fn_8019f530(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
            r0 = rd32(param_1 + 0x120u);
            if (r0 == 0u) {
                wr32(param_1 + 0x138u, 0u);
                wr32(param_1 + 0x120u, 1u);
            } else {
                if (r0 == 1u) {
                    r4 = rd32(param_1 + 0x138u) + 1u;
                    f2 = rdf64(0x805757f8u);
                    r0 = r4 ^ 0x80000000u;
                    f1 = (f64)rdf32(param_1 + 0x128u);
                    wr32(param_1 + 0x138u, r4);
                    f0 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2);
                    if (!((f0 > f1) || (f0 == f1))) {
                        return;
                    }
                    wr32(param_1 + 0x120u, 2u);
                    f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2) - f1);
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wr32(param_1 + 0x138u, (u32)px_f2b(f0));
                } else {
                    if (r0 == 2u) {
                        a.r[0] = param_1;
                        (void)tc_call(0x8019f680u, &a);
                        wr32(param_1 + 0x13cu, 0u);
                        wr32(param_1 + 0x120u, 3u);
                    } else {
                        if (r0 == 3u) {
                            r3 = rd32(param_1 + 0x13cu) + 1u;
                            f2 = rdf64(0x805757f8u);
                            f0 = (f64)rdf32(param_1 + 0x12cu);
                            wr32(param_1 + 0x13cu, r3);
                            f1 = (f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f2);
                            if ((f1 > f0) || (f1 == f0)) {
                                wr32(param_1 + 0x120u, 1u);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
