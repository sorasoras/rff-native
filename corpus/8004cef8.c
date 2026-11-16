#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8004cef8(s32 param_1)
{
    u32 r6 = 0, r7 = 0;
    f64 f2 = 0.0, f4 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    f7 = rdf64(0x80572208u);
    f4 = rdf64(0x80572200u);
    r7 = (u32)rd16((u32)param_1 + 0xf2u);
    r6 = (u32)rd16((u32)param_1 + 0xf0u);
    f2 = (f64)(f32)(px_b2f((u64)((r7 + (u32)rd16((u32)param_1 + 0xf6u)) ^ 0x80000000u) | 0x4330000000000000ull) - f4);
    f4 = (f64)(f32)(px_b2f((u64)((r6 + (u32)rd16((u32)param_1 + 0xf4u)) ^ 0x80000000u) | 0x4330000000000000ull) - f4);
    a.f[0] = (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f7);
    a.f[1] = f2;
    a.f[2] = (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f7);
    a.f[3] = f4;
    a.f[4] = (f64)rdf32((u32)param_1 + 0xe0u);
    a.f[5] = (f64)rdf32((u32)param_1 + 0xe4u);
    a.r[0] = (u32)param_1 + 0x58u;
    (void)tc_call(0x802342e8u, &a);
    return;
}
