#include "tc_rt.h"

void fn_802080ac(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32((u32)param_1 + 4u);
    (void)tc_call(0x800c8888u, &a);
    return;
}
