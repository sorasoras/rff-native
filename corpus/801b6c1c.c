#include "tc_rt.h"

void fn_801b6c1c(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = (u32)param_1 + 0x48u;
    (void)tc_call(0x8019087cu, &a);
    return;
}
