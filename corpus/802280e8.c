#include "tc_rt.h"

void fn_802280e8(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_2 - 8u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 - 8u;
    a.r[2] = 0x817fe000u;
    a.f[0] = 0.0;
    (void)tc_call(param_1, &a);
    return;
}
