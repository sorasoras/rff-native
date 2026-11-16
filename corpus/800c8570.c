#include "tc_rt.h"

void fn_800c8570(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + ((u32)param_2 * 0x60u) + 0x20u;
    a.r[1] = 0u;
    a.r[2] = 0x60u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_1 + ((u32)param_2 * 0x60u) + 0x20u, 0xffffffffu);
    return;
}
