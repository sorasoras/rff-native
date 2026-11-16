#include "tc_rt.h"

void fn_802dfecc(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr8((u32)param_1 + 0x6fu, 1u);
    a.r[0] = 0x80571d08u;
    (void)tc_call(0x802300d0u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802dfac0u, &a);
    return;
}
