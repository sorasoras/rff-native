#include "tc_rt.h"

void fn_800a79b4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a51f8u, &a);
    a.r[0] = 1u;
    a.r[1] = r3 + (u32)param_1;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x800a4914u, &a);
    return;
}
