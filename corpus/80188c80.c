#include "tc_rt.h"

void fn_80188c80(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x80161ac4u, &a);
    wr16((u32)param_1 + 0xfcu, 0x2e8u);
    wr8((u32)param_1 + 0xfeu, 0u);
    wr8((u32)param_1 + 0xffu, 0u);
    wr32((u32)param_1 + 0x3e0u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80188bb4u, &a);
    return;
}
