#include "tc_rt.h"

void fn_800d48d4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x4bcu;
    (void)tc_call(0x800d3338u, &a);
    return;
}
