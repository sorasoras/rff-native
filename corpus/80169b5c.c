#include "tc_rt.h"

void fn_80169b5c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x1690u;
    (void)tc_call(0x800b2b40u, &a);
    wr32((u32)param_1 + 0xeccu, 0x27u);
    return;
}
