#include "tc_rt.h"

u32 fn_801c2a48(s32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xd30u) != 0u) {
        return 0u;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x8007fd08u, &a);
    return r3;
}
