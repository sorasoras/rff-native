#include "tc_rt.h"

void fn_802e4d78(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x28u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_2;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0) + 0x14u), &a);
    }
    a.r[0] = (u32)param_1 + 0x1cu;
    a.r[1] = param_2;
    (void)tc_call(0x802eeedcu, &a);
    return;
}
