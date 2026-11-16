#include "tc_rt.h"

void fn_800c91dc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 0u;
    a.r[2] = 0x140u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_1 + 0x20u, 0x11304a50u);
    return;
}
