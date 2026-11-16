#include "tc_rt.h"

void fn_802f7450(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 8u);
    (void)tc_call(0x8030571cu, &a);
    return;
}
