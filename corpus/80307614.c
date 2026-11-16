#include "tc_rt.h"

u32 fn_80307614(s32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = param_r4;
        (void)tc_call(0x80307030u, &a);
        r3 = 1u;
    }
    return r3;
}
