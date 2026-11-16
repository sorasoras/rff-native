#include "tc_rt.h"

void fn_8020caa8(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = param_2;
    r3 = tc_call(0x8020bf1cu, &a);
    if (r3 != 0u && ((u32)param_3 + 0x10000u) != 0xffffu) {
        a.r[0] = (u32)param_1 + 0x148u;
        a.r[1] = (u32)param_3;
        (void)tc_call(0x8020c6c4u, &a);
    }
    return;
}
