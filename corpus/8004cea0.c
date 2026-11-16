#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8004cea0(s32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)rdf32(0x805721f8u) * (f64)(f32)(px_b2f((u64)((u32)(s16)rd16((u32)param_1 + 0xd8u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572200u)));
    a.f[1] = (f64)rdf32((u32)param_1 + 0xdcu);
    a.f[2] = (f64)rdf32((u32)param_1 + 0xe0u);
    a.f[3] = (f64)rdf32((u32)param_1 + 0xe4u);
    a.r[0] = (u32)param_1 + 0x58u;
    (void)tc_call(0x802341fcu, &a);
    return;
}
