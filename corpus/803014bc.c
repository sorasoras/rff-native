#include "tc_rt.h"

void fn_803014bc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 4u);
    (void)tc_call(0x8030243cu, &a);
    return;
}
