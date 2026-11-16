#include "tc_rt.h"

void fn_803014c4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 4u);
    (void)tc_call(0x8030247cu, &a);
    return;
}
