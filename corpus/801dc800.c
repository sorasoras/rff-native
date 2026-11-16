#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801dc800(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80469958u;
    a.r[1] = rd32((u32)param_1 + 0xa4u);
    r3 = tc_call(0x800586c8u, &a);
    r31 = r3;
    r3 = tc_call(0x8003c9c8u, &a);
    r3 = r3 ^ 0x80000000u;
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x330u) + (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80576210u)));
    wrf32d((u32)param_1 + 0x330u, f1);
    r3 = rd32(r31 + 0xcu);
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = (f64)rdf32(r3 + 0x14u);
        f1 = tc_callf(0x8015b1b4u, &a);
        wrf32d((u32)param_1 + 0x330u, f1);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007e314u, &a);
    return;
}
