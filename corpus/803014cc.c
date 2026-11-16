#include "tc_rt.h"

void fn_803014cc(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 4u);
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x34u);
    a.r[2] = param_2;
    (void)tc_call(0x80302798u, &a);
    return;
}
