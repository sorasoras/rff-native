#include "tc_rt.h"

void fn_8003da3c(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, s32 param_7)
{
    TcArgs a = {0};
    a.f[0] = param_6;
    a.f[1] = param_5;
    a.f[2] = param_4;
    a.f[3] = param_3;
    a.f[4] = param_2;
    a.f[5] = param_1;
    a.r[0] = ((u32)param_7 * 0x60u) - 0x7fc41d00u;
    (void)tc_call(0x80251a34u, &a);
    wr32(0x803be5fcu, rd32(0x803be5fcu) | ((((u32)param_7 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_7 & 0x1fu))));
    return;
}
