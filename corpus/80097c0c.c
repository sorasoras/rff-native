#include "tc_rt.h"

void fn_80097c0c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x24u);
    (void)tc_call(0x80113250u, &a);
    return;
}
