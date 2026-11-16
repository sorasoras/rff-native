#include "tc_rt.h"

void fn_8031d39c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x20u);
    a.r[1] = (u32)param_1;
    (void)tc_call(0x80311f34u, &a);
    return;
}
