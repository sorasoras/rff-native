#include "tc_rt.h"

void fn_800c3fc0(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x290u, 0xcu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800bfcacu, &a);
    return;
}
