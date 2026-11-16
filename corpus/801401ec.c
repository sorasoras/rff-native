#include "tc_rt.h"

void fn_801401ec(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = 5u;
    a.r[1] = (u32)rd16(rd32(param_1) + ((((u32)param_2 - rd32(param_1 + 8u)) << 3u) & 0xfffffff8u) + 4u);
    a.r[2] = 0u;
    (void)tc_call(0x801412f8u, &a);
    return;
}
