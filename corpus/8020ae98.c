#include "tc_rt.h"

void fn_8020ae98(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x10u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x10u, 0u);
    }
    return;
}
