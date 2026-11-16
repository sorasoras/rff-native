#include "tc_rt.h"

void fn_80228118(u32 param_r7, u32 param_r8)
{
    TcArgs a = {0};
    wr32(param_r8 - 8u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[4] = param_r7;
    a.r[5] = param_r8 - 8u;
    a.r[6] = 0x817fe000u;
    a.f[0] = 0.0;
    (void)tc_call(param_r7, &a);
    return;
}
