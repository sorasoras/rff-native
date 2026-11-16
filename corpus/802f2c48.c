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

void fn_802f2c48(f64 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = (u32)param_3;
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(param_2) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        if ((u32)param_3 == 5u) {
            f1 = (f64)(f32)px_fdiv((f64)(f32)(param_1 * (f64)(f32)(px_b2f((u64)(rd32(param_2 + 0x18u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80577560u))), (f64)rdf32(0x80577550u));
            if (f1 > (f64)rdf32(0x80577554u)) {
                r30 = 2u;
            } else {
                if (f1 > (f64)rdf32(0x80577558u)) {
                    r30 = 3u;
                } else {
                    r30 = 4u;
                }
            }
        }
        a.r[0] = param_2;
        a.r[1] = r30;
        (void)tc_call(0x802f4268u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
