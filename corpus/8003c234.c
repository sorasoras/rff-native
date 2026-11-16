#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8003c234(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003bf48u, &a);
    if (r3 == 1u) {
        wrf32d((u32)param_1 + 0x34u, (f64)rdf32(0x80571f90u));
    } else {
        wrf32d((u32)param_1 + 0x34u, (f64)rdf32(0x80571f64u));
    }
    wrf32d((u32)param_1 + 0x38u, (f64)rdf32(0x80571f64u));
    r3 = tc_call(0x8003c9a8u, &a);
    if (r3 != 1u) {
        r3 = tc_call(0x8003c9c8u, &a);
        r3 = r3 ^ 0x80000000u;
        wrf32d((u32)param_1 + 0x30u, (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80571f98u)));
    } else {
        r3 = tc_call(0x8003c9c8u, &a);
        r3 = r3 ^ 0x80000000u;
        wrf32d((u32)param_1 + 0x30u, (f64)(f32)((f64)rdf32(0x80571f94u) * (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80571f98u))));
    }
    return;
}
