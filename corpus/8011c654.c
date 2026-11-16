#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_8011c654(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x10u);
    if (r3 != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x802edcd8u, &a);
        r3 = r3 & 0xffffu;
        f1 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80574240u));
    } else {
        f1 = (f64)rdf32(0x80574238u);
    }
    return f1;
}
