#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8015b0f8(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8003c9c8u, &a);
    r3 = ((r3 >> 0x1fu) & 1u) + r3;
    f31 = (f64)(f32)((f64)rdf32(param_1 + 4u) + (f64)(f32)(px_b2f((u64)((u32)((s32)r3 >> 1) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574980u)));
    a.r[0] = rd32(param_1);
    r3 = tc_call(0x8011c91cu, &a);
    if (r3 == 0u) {
        a.r[0] = rd32(param_1);
        f1 = tc_callf(0x8011c8fcu, &a);
        if (!(f31 < f1)) {
            a.r[0] = rd32(param_1);
            f1 = tc_callf(0x8011c8fcu, &a);
            f31 = f1;
        }
        f1 = f31;
    } else {
        a.r[0] = rd32(param_1);
        f1 = tc_callf(0x8011c8fcu, &a);
        a.f[0] = f31;
        a.f[1] = f1;
        f1 = tc_callf(0x8015b1b4u, &a);
    }
    wrf32d(param_1 + 4u, f1);
    return;
}
