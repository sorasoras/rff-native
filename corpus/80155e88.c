#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80155e88(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[1] = 0u;
    r3 = tc_call(0x80091a30u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x80471ed0u;
        a.r[1] = r3;
        a.r[2] = 0u;
        r3 = tc_call(0x80091a64u, &a);
        if (r3 != 0u) {
            f4 = (f64)rdf32(r3 + 8u);
            f2 = rdf64(0x805748f0u);
            wrf32d(param_1, f4);
            f1 = (f64)rdf32(0x805748e8u);
            wrf32d(param_1 + 4u, (f64)rdf32(r3 + 0xcu));
            f3 = (f64)rdf32(r3 + 0x10u);
            wrf32d(param_1 + 8u, f3);
            f0 = (f64)(f32)(f4 + (f64)(f32)(px_b2f((u64)((rd32(param_2 + 4u) * 0x12cu) ^ 0x80000000u) | 0x4330000000000000ull) - f2));
            wrf32d(param_1, f0);
            f0 = (f64)(f32)(f0 + f1);
            r0 = rd32(param_2) * 0x12cu;
            wrf32d(param_1, f0);
            r0 = r0 ^ 0x80000000u;
            wrf32d(param_1 + 8u, (f64)(f32)((f64)(f32)(f3 + (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2)) + f1));
        }
    }
    return;
}
