#include "tc_rt.h"

void fn_802fed10(s32 param_1)
{
    u32 r12 = 0;
    TcArgs a = {0};
    r12 = rd32((u32)param_1 + 0x1cu);
    if (r12 != 0u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = rd32((u32)param_1 + 0x20u);
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
        return;
    }
    return;
}
