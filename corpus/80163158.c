#include "tc_rt.h"

void fn_80163158(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x54u, rd32((u32)param_1 + 0x54u) & 0xfe000001u);
    a.r[0] = 1u;
    (void)tc_call(0x8004f7b0u, &a);
    return;
}
