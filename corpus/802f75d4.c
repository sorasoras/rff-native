#include "tc_rt.h"

void fn_802f75d4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if ((u32)rd8((u32)param_1 + 0x10u) != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0xfcu;
        r3 = tc_call(0x802faa98u, &a);
        wr32((u32)param_1 + 0x14u, r3);
        wr32((u32)param_1 + 0x18u, param_2);
        wr32((u32)param_1 + 0x1cu, param_3);
        wr8((u32)param_1 + 0x10u, 1u);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
