#include "tc_rt.h"

void fn_802f8d44(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r5 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    r5 = param_3;
    r8 = rd32((u32)param_1 + 0x18u);
    r6 = rd32((u32)param_1 + 0x70u) + rd32((u32)param_1 + 0x74u);
    if ((r8 + param_3) > r6) {
        r5 = (r6 - r8 + 0x1fu) & 0xffffffe0u;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = r5;
    (void)tc_call(0x802dfd24u, &a);
    return;
}
