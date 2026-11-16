#include "tc_rt.h"

void fn_80243e78(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(0x80571824u, (u32)param_1);
    r31 = r3;
    wr32(0x80571818u, param_2);
    if ((u32)param_1 == 0u) {
        a.r[0] = 0x80571830u;
        a.r[1] = 1u;
        a.r[2] = 3u;
        (void)tc_call(0x8000443cu, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
