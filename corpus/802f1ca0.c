#include "tc_rt.h"

void fn_802f1ca0(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32((u32)param_1 + 0x10u, param_2);
    r31 = r3;
    wr32((u32)param_1 + 0x14u, param_3);
    wr32((u32)param_1 + 0x18u, param_4);
    a.r[0] = (u32)param_1 + 0x1eu;
    a.r[1] = 0u;
    a.r[2] = 0x18u;
    (void)tc_call(0x8000443cu, &a);
    wr8((u32)param_1 + 0x1cu, 1u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
