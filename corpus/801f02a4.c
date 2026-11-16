#include "tc_rt.h"

u32 fn_801f02a4(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x138u);
    if (r4 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        (void)tc_call(0x800da840u, &a);
    }
    return 0u;
}
