#include "tc_rt.h"

void fn_801b5268(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x18cu);
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x801ebca8u, &a);
    wr32((u32)param_1 + 0xb4u, r3);
    return;
}
