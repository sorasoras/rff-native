#include "tc_rt.h"

void fn_8004b7f4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r7 = 0;
    TcArgs a = {0};
    r0 = param_4 ^ 1u;
    r7 = (u32)((s32)r0 >> 1);
    r0 = r0 & param_4;
    r0 = r7 - r0;
    a.r[0] = param_2 & 0xffffu;
    a.r[1] = param_3 & 0xffffu;
    a.r[2] = param_1;
    a.r[3] = (r0 >> 0x1fu) & 1u;
    a.r[4] = param_4 & 0xffu;
    (void)tc_call(0x80251f58u, &a);
    return;
}
