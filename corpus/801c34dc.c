#include "tc_rt.h"

void fn_801c34dc(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcfcu;
    a.r[1] = param_r4;
    (void)tc_call(0x801c371cu, &a);
    return;
}
