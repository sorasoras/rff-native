#include "tc_rt.h"

void fn_8003d9e0(s32 param_1, f64 param_f1, f64 param_f2, u32 param_r4)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = ((u32)param_1 * 0x60u) - 0x7fc41d00u;
    a.r[1] = param_r4;
    (void)tc_call(0x80251a50u, &a);
    wr32(0x803be5fcu, rd32(0x803be5fcu) | ((((u32)param_1 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_1 & 0x1fu))));
    return;
}
