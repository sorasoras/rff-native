#include "tc_rt.h"

void fn_802024e4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x94u;
    (void)tc_call(0x8007ae84u, &a);
    return;
}
