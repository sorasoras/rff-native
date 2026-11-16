#include "tc_rt.h"

void fn_8017d20c(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + (rd32((u32)param_2 + 0x74u) * 0x1cu);
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8007b03cu, &a);
    wr32((u32)param_2 + 0x7cu, r3);
    return;
}
