#include "tc_rt.h"

void fn_8021a1b0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x68u);
    r3 = tc_call(0x800a7b34u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        a.r[1] = 0u;
        (void)tc_call(0x800a7bb8u, &a);
    }
    return;
}
