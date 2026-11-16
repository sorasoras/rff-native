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

void fn_802f90cc(s32 param_1, s32 param_2)
{
    f64 f0 = 0.0;
    if ((u32)param_2 == 0x7fu) {
        f0 = (f64)rdf32(0x805775e4u);
    } else {
        if ((u32)param_2 == 0x7eu) {
            f0 = (f64)rdf32(0x80577600u);
        } else {
            if (param_2 < 50) {
                f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(((((u32)param_2 << 1u) & 0xfffffffeu) + 1u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805775f8u)) * (f64)rdf32(0x80577604u)), (f64)rdf32(0x80577608u));
            } else {
                f0 = (f64)(f32)px_fdiv((f64)(f32)px_fdiv((f64)rdf32(0x8057760cu), (f64)(f32)(px_b2f((u64)((0x7eu - (u32)param_2) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805775f8u))), (f64)rdf32(0x80577608u));
            }
        }
    }
    wrf32d((u32)param_1 + 8u, f0);
    return;
}
