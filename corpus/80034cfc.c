#include "tc_rt.h"

void fn_80034cfc(f64 param_1, s32 param_2, s32 param_3)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)param_3;
    a.f[0] = param_1;
    (void)tc_call(rd32((u32)param_3 + 0x14u), &a);
    a.r[0] = (u32)param_2 + 4u;
    a.r[1] = (u32)param_3 + 0x18u;
    a.f[0] = param_1;
    (void)tc_call(rd32((u32)param_3 + 0x2cu), &a);
    a.r[0] = (u32)param_2 + 8u;
    a.r[1] = (u32)param_3 + 0x30u;
    a.f[0] = param_1;
    (void)tc_call(rd32((u32)param_3 + 0x44u), &a);
    return;
}
