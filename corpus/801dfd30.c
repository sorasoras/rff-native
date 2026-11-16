#include "tc_rt.h"

void fn_801dfd30(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0xcfcu, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 8u;
    (void)tc_call(0x801e0450u, &a);
    return;
}
