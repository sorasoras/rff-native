#include "tc_rt.h"

void fn_80163144(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x54u, rd32((u32)param_1 + 0x54u) & 0xfffffffeu);
    a.r[0] = 0u;
    (void)tc_call(0x8004f7b0u, &a);
    return;
}
