#include "tc_rt.h"

void fn_802fc260(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x802fac5cu, &a);
    return;
}
