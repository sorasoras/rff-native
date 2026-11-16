#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800da4dc(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x78u) != 0u) {
        if ((u32)((s32)((rd32((u32)param_1 + 0x74u) << 5u) & 0xc0000000u) >> 31) == 0u) {
            return;
        }
        r3 = tc_call(0x8003c9c8u, &a);
        r3 = r3 ^ 0x80000000u;
        f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80573a08u)) * (f64)rdf32(0x80573a00u));
        a.r[0] = 0x8046ae40u;
        a.r[1] = rd32((u32)param_1 + 0xf8u);
        r3 = tc_call(0x8013ecb4u, &a);
        f1 = (f64)rdf32(r3 + 0x14u);
        if (f1 > (f64)rdf32(0x805739e8u)) {
            f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x114u) + f31);
            wrf32d((u32)param_1 + 0x114u, f0);
            if (f0 > f1) {
                f0 = (f64)(f32)(f0 - f1);
                wrf32d((u32)param_1 + 0x114u, f0);
            }
        }
        a.f[0] = (f64)rdf32((u32)param_1 + 0x114u);
        a.r[0] = rd32((u32)param_1 + 0x78u);
        (void)tc_call(0x80040728u, &a);
    }
    return;
}
