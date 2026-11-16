#include "tc_rt.h"

void fn_800c8904(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x800c8888u, &a);
    if ((s32)(r3 - (u32)param_3) < 0) {
        r4 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x800c8888u, &a);
        r4 = r3 - (u32)param_3;
    }
    wr32((u32)param_1 + ((u32)param_2 * 0x60u) + 0x3cu, r4);
    return;
}
