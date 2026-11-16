#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_8011bcb0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r30 = rd32(param_2);
    r29 = rd32(param_2 + 4u);
    r31 = rd32(param_2 + 8u);
    r28 = rd32(param_2 + 0xcu);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x2cu);
    if ((f64)(f32)(px_b2f((u64)(r31 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574228u)) > (f64)rdf32(r3 + 0x58u)) {
        r3 = 0u;
    } else {
        a.r[0] = r30;
        f1 = tc_callf(0x800a4630u, &a);
        if ((f64)(f32)(px_b2f((u64)(r29 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574228u)) < f1) {
            r3 = 0u;
        } else {
            a.r[0] = r28;
            r3 = tc_call(0x8014d8acu, &a);
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        }
    }
    return r3;
}
