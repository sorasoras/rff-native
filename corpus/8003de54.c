#include "tc_rt.h"

void fn_8003de54(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8003dda0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8003dd50u, &a);
    r0 = rd32((u32)param_1 + 8u);
    if (r0 == 0u) {
        r3 = 0u;
    } else {
        r3 = (u32)param_2 + r0;
    }
    wr32((u32)param_1 + 8u, r3);
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8003ddccu, &a);
    return;
}
