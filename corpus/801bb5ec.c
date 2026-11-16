#include "tc_rt.h"

void fn_801bb5ec(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1acu, 0u);
    a.r[0] = 0x5f1u;
    a.r[1] = 0x801bb634u;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32((u32)param_1 + 0x1a8u, r3);
    return;
}
