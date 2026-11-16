#include "tc_rt.h"

void fn_80246484(f64 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.f[0] = (f64)(f32)((f64)rdf32(0x80576b98u) * param_1);
    r3 = tc_call(0x802558e4u, &a);
    r0 = rd32((u32)param_2 + 0x1cu);
    wr16((u32)param_2 + 0xd0u, (u16)r3);
    r0 = r0 | 0x20000u;
    wr16((u32)param_2 + 0xceu, (u16)((r3 >> 0x10u) & 0xffffu));
    wr32((u32)param_2 + 0x1cu, r0);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
