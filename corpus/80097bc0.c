#include "tc_rt.h"

void fn_80097bc0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x60u);
    (void)tc_call(0x80213710u, &a);
    return;
}
