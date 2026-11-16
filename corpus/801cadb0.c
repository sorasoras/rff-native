#include "tc_rt.h"

void fn_801cadb0(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_2;
    if (param_2 < 0) {
        r30 = rd32((u32)param_1 + 8u);
    }
    r3 = tc_call(0x80077b38u, &a);
    r31 = r3;
    a.r[0] = (u32)param_1;
    a.r[1] = r30;
    a.r[2] = r3;
    (void)tc_call(0x801cae20u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r30;
    a.r[2] = r31;
    (void)tc_call(0x801cb2d4u, &a);
    return;
}
