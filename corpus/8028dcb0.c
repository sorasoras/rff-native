#include "tc_rt.h"

void fn_8028dcb0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x802963fcu, &a);
    return;
}
