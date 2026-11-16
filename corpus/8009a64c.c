#include "tc_rt.h"

void fn_8009a64c(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x54u);
    a.r[1] = param_r4;
    (void)tc_call(0x8010c9f0u, &a);
    return;
}
