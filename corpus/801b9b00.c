#include "tc_rt.h"

void fn_801b9b00(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x34u);
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x38u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
