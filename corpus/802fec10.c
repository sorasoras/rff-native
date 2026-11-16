#include "tc_rt.h"

void fn_802fec10(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x280u);
    (void)tc_call(0x802fed8cu, &a);
    return;
}
