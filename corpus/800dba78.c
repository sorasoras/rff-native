#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_800dba78(f64 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = 0x8046a200u;
    a.r[1] = param_3;
    a.r[2] = rd32(param_2);
    r3 = tc_call(0x800590b4u, &a);
    if (r3 != 0u) {
        f0 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)rd32(param_2 + 0x30u) | 0x4330000000000000ull) - rdf64(0x80573a28u)) * (f64)rdf32(r3 + 0x18u)) - (f64)rdf32(0x80573a20u));
        if (!((param_1 > f0) || (param_1 == f0))) {
            return r31;
        }
        r31 = 1u;
    } else {
        r31 = 1u;
    }
    return r31;
}
