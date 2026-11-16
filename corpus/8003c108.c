#include "tc_rt.h"

void fn_8003c108(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    a.r[1] = 0x18700u;
    a.r[2] = 0x20u;
    a.r[3] = 0x4e4f5320u;
    a.r[4] = 0x8034f664u;
    r3 = tc_call(0x80040e30u, &a);
    wr32((u32)param_1 + 0x88u, r3);
    a.r[0] = rd32((u32)param_1 + 0x84u);
    a.r[1] = r3;
    a.r[2] = 0x18700u;
    (void)tc_call(0x802c271cu, &a);
    return;
}
