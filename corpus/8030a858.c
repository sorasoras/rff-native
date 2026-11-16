#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8030a858(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x802f6b98u, &a);
    f31 = rdf64(0x805777b0u);
    r29 = param_r3;
    r28 = 0u;
    do {
        a.r[0] = param_r3 + 0x100u;
        a.r[1] = r28;
        r3 = tc_call(0x8030a014u, &a);
        if (r3 != 0u) {
            r6 = rd32(r29 + 0xe44u);
            r3 = param_r3 + 0x100u;
            r0 = rd32(r29 + 0xe48u);
            r4 = ((r28 & 0x20u) != 0u) ? 0u : (1u << (r28 & 0x1fu));
            if ((s32)r0 >= (s32)r6) {
                f1 = (f64)rdf32(r29 + 0xe40u);
            } else {
                f2 = (f64)rdf32(r29 + 0xe3cu);
                f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r0 ^ 0x80000000u) | 0x4330000000000000ull) - f31) * (f64)(f32)((f64)rdf32(r29 + 0xe40u) - f2)), (f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f31)));
            }
            a.f[0] = f1;
            a.r[0] = r3;
            a.r[1] = r4;
            (void)tc_call(0x80309f94u, &a);
        }
        r28 = r28 + 1u;
        r29 = r29 + 0x10u;
    } while ((s32)r28 < 8);
    return;
}
