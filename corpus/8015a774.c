#include "tc_rt.h"

void fn_8015a774(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8015a7ccu, &a);
    r3 = tc_call(0x800545e4u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r3;
    a.r[2] = param_2;
    r3 = tc_call(0x800a6048u, &a);
    if (r3 != 0u) {
        wr32((u32)param_1 + 0x18u, param_2);
    }
    return;
}
