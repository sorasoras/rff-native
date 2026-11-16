#include "tc_rt.h"

void fn_800d6d84(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x7cu) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        (void)tc_call(0x80070954u, &a);
        return;
    }
    return;
}
