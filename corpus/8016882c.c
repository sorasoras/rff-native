#include "tc_rt.h"

void fn_8016882c(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    wr32((u32)param_2 + 0xed4u, 0u);
    a.r[0] = (u32)param_2;
    a.r[1] = 0x28u;
    (void)tc_call(0x800b31a0u, &a);
    return;
}
