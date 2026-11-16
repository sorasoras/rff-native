#include "tc_rt.h"

void fn_800c05d0(s32 param_1, u32 param_r4)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x298u);
    if (r0 == 1u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        (void)tc_call(0x800bf968u, &a);
        return;
    }
    if (r0 != 2u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800bf6a0u, &a);
        return;
    }
    return;
}
