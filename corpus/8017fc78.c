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

void fn_8017fc78(f64 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_2 + 0x80u);
    a.r[1] = 1u;
    (void)tc_call(0x8017fde4u, &a);
    wr32((u32)param_2 + 0x80u, 6u);
    a.r[0] = 6u;
    a.r[1] = 1u;
    (void)tc_call(0x8017fdc8u, &a);
    a.r[0] = (u32)param_2 + 0xb4u;
    a.r[1] = param_3;
    a.r[2] = (u32)param_2 + 0x90u;
    (void)tc_call(0x8017dd7cu, &a);
    wrf32d((u32)param_2 + 0xa8u, (f64)(f32)px_fdiv((f64)rdf32(0x80575058u), param_1));
    r3 = tc_call(0x80040b64u, &a);
    wr32((u32)param_2 + 0xacu, rd32((u32)param_2 + 0xacu) & 0xefffffffu);
    wrf32d((u32)param_2 + 0x88u, -(f64)(f32)((f64)rdf32((u32)param_2 + 0xa8u) * (f64)(f32)(px_b2f((u64)(((r3 - (((ppc_mulhwu(0xba2e8ba3u, r3) >> 3u) & 0x1fffffffu) * 0xbu)) << 1u) & 0xfffffffeu) | 0x4330000000000000ull) - rdf64(0x805750b0u))));
    return;
}
