#include "tc_rt.h"

void fn_802c05f0(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 4u, param_2);
    if (param_2 != 0u) {
        a.r[0] = param_2;
        a.r[1] = (u32)param_1;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0xcu), &a);
        return;
    }
    return;
}
