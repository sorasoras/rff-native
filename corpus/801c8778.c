#include "tc_rt.h"

void fn_801c8778(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0xcfdu) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        (void)tc_call(0x801e7230u, &a);
        return;
    }
    return;
}
