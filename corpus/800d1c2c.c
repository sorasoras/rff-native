#include "tc_rt.h"

void fn_800d1c2c(f64 param_1, f64 param_2, s32 param_3, u32 param_4)
{
    f64 f2 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_2;
    a.f[1] = (f64)rdf32(0x805730d0u);
    a.f[2] = param_1;
    a.r[0] = (u32)param_3 + 0x34u;
    a.r[1] = param_4;
    (void)tc_call(0x800d2b80u, &a);
    f2 = (f64)rdf32(0x805730d0u);
    wr32((u32)param_3 + 0x54u, 1u);
    a.f[0] = param_2;
    a.f[1] = f2;
    a.f[2] = (f64)(f32)(f2 + param_1);
    a.r[0] = (u32)param_3 + 0x58u;
    a.r[1] = param_4;
    (void)tc_call(0x800d2b80u, &a);
    wr32((u32)param_3 + 0x78u, 1u);
    return;
}
