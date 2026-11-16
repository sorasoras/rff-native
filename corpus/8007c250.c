#include "tc_rt.h"

void fn_8007c250(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    if ((u32)param_2 != 0u) {
        wr32((u32)param_1 + 0x5cu, r4);
        return;
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8007c218u, &a);
    r4 = r3;
    wr32((u32)param_1 + 0x5cu, r4);
    return;
}
